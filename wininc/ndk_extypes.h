/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was generated from a ReactOS header to make
 ***   information necessary for userspace to call into the Windows
 ***   kernel available to Dr. Memory.  It contains only constants,
 ***   structures, and macros generated from the original header, and
 ***   thus, contains no copyrightable information.
 ***
 ****************************************************************************
 ****************************************************************************/

/* from reactos/include/ndk/extypes.h */

#ifndef _EXTYPES_H
#define _EXTYPES_H

//
//  System Information Classes for NtQuerySystemInformation
//
typedef enum _SYSTEM_INFORMATION_CLASS
{
    SystemBasicInformation,
    SystemProcessorInformation,
    SystemPerformanceInformation,
    SystemTimeOfDayInformation,
    SystemPathInformation, /// Obsolete: Use KUSER_SHARED_DATA
    SystemProcessInformation,
    SystemCallCountInformation,
    SystemDeviceInformation,
    SystemProcessorPerformanceInformation,
    SystemFlagsInformation,
    SystemCallTimeInformation,
    SystemModuleInformation,
    SystemLocksInformation,
    SystemStackTraceInformation,
    SystemPagedPoolInformation,
    SystemNonPagedPoolInformation,
    SystemHandleInformation,
    SystemObjectInformation,
    SystemPageFileInformation,
    SystemVdmInstemulInformation,
    SystemVdmBopInformation,
    SystemFileCacheInformation,
    SystemPoolTagInformation,
    SystemInterruptInformation,
    SystemDpcBehaviorInformation,
    SystemFullMemoryInformation,
    SystemLoadGdiDriverInformation,
    SystemUnloadGdiDriverInformation,
    SystemTimeAdjustmentInformation,
    SystemSummaryMemoryInformation,
    SystemMirrorMemoryInformation,
    SystemPerformanceTraceInformation,
    SystemObsolete0,
    SystemExceptionInformation,
    SystemCrashDumpStateInformation,
    SystemKernelDebuggerInformation,
    SystemContextSwitchInformation,
    SystemRegistryQuotaInformation,
    SystemExtendServiceTableInformation,
    SystemPrioritySeperation,
    SystemPlugPlayBusInformation,
    SystemDockInformation,
    SystemPowerInformationNative,
    SystemProcessorSpeedInformation,
    SystemCurrentTimeZoneInformation,
    SystemLookasideInformation,
    SystemTimeSlipNotification,
    SystemSessionCreate,
    SystemSessionDetach,
    SystemSessionInformation,
    SystemRangeStartInformation,
    SystemVerifierInformation,
    SystemAddVerifier,
    SystemSessionProcessesInformation,
    SystemLoadGdiDriverInSystemSpaceInformation,
    SystemNumaProcessorMap,
    SystemPrefetcherInformation,
    SystemExtendedProcessInformation,
    SystemRecommendedSharedDataAlignment,
    SystemComPlusPackage,
    SystemNumaAvailableMemory,
    SystemProcessorPowerInformation,
    SystemEmulationBasicInformation,
    SystemEmulationProcessorInformation,
    SystemExtendedHanfleInformation,
    SystemLostDelayedWriteInformation,
    SystemBigPoolInformation,
    SystemSessionPoolTagInformation,
    SystemSessionMappedViewInformation,
    SystemHotpatchInformation,
    SystemObjectSecurityMode,
    SystemWatchDogTimerHandler,
    SystemWatchDogTimerInformation,
    SystemLogicalProcessorInformation,
    SystemWow64SharedInformationObsolete,
    SystemRegisterFirmwareTableInformationHandler,
    SystemFirmwareTableInformation,
    SystemModuleInformationEx,
    SystemVerifierTriageInformation,
    SystemSuperfetchInformation,
    SystemMemoryListInformation,
    SystemFileCacheInformationEx,
    SystemThreadPriorityClientIdInformation,
    SystemProcessorIdleCycleTimeInformation,
    SystemVerifierCancellationInformation,
    SystemProcessorPowerInformationEx,
    SystemRefTraceInformation,
    SystemSpecialPoolInformation,
    SystemProcessIdInformation,
    SystemErrorPortInformation,
    SystemBootEnvironmentInformation,
    SystemHypervisorInformation,
    SystemVerifierInformationEx,
    SystemTimeZoneInformation,
    SystemImageFileExecutionOptionsInformation,
    SystemCoverageInformation,
    SystemPrefetchPathInformation,
    SystemVerifierFaultsInformation,
    MaxSystemInfoClass,
} SYSTEM_INFORMATION_CLASS;

// Class 26
typedef struct _SYSTEM_GDI_DRIVER_INFORMATION
{
    UNICODE_STRING DriverName;
    PVOID ImageAddress;
    PVOID SectionPointer;
    PVOID EntryPoint;
    PIMAGE_EXPORT_DIRECTORY ExportSectionPointer;
    ULONG ImageLength;
} SYSTEM_GDI_DRIVER_INFORMATION, *PSYSTEM_GDI_DRIVER_INFORMATION;

// Class 53
typedef struct _SYSTEM_SESSION_PROCESS_INFORMATION
{
    ULONG SessionId;
    ULONG SizeOfBuf;
    PVOID Buffer; // Same format as in SystemProcessInformation
} SYSTEM_SESSION_PROCESS_INFORMATION, *PSYSTEM_SESSION_PROCESS_INFORMATION;

#endif /* _EXTYPES_H */
