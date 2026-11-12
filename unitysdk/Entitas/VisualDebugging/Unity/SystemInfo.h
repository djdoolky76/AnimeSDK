#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/SystemInterfaceFlags.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class ISystem; }
namespace Entitas::VisualDebugging::Unity { class SystemInfo; }
namespace System { class String; }

#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_ADDCLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x175A6A20)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_ADDEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x175A69C0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x175A55B0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GETINTERFACEFLAGS_OFFSET UNITYSDK_OFFSET(0x175A7A50)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ACCUMULATEDCLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x175A79A0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ACCUMULATEDEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x175A7950)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AREALLPARENTSACTIVE_OFFSET UNITYSDK_OFFSET(0x175A7A30)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AVERAGECLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x175A79D0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AVERAGEEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x175A7980)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_CLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x175A79F0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_INITIALIZATIONDURATION_OFFSET UNITYSDK_OFFSET(0x175A7930)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISCLEANUPSYSTEMS_OFFSET UNITYSDK_OFFSET(0x175A5B80)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISEXECUTESYSTEMS_OFFSET UNITYSDK_OFFSET(0x175A5B60)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISINITIALIZESYSTEMS_OFFSET UNITYSDK_OFFSET(0x175A5B50)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISREACTIVESYSTEMS_OFFSET UNITYSDK_OFFSET(0x175A5B70)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISTEARDOWNSYSTEMS_OFFSET UNITYSDK_OFFSET(0x175A5B90)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MAXCLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x175A79C0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MAXEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x175A7970)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MINCLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x175A79B0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MINEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x175A7960)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEMFULLNAME_OFFSET UNITYSDK_OFFSET(0x175A7920)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEMNAME_OFFSET UNITYSDK_OFFSET(0x175A7910)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x175A7900)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_TEARDOWNDURATION_OFFSET UNITYSDK_OFFSET(0x175A7A10)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_RESETDURATIONS_OFFSET UNITYSDK_OFFSET(0x175A5DB0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_CLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x175A7A00)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_INITIALIZATIONDURATION_OFFSET UNITYSDK_OFFSET(0x175A7940)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_TEARDOWNDURATION_OFFSET UNITYSDK_OFFSET(0x175A7A20)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int SystemInfo_TypeDefinitionIndex = 10071;

	class SystemInfo : public ::System::Object
	{
	public:
		::Entitas::VisualDebugging::Unity::SystemInfo* parentSystemInfo; // 0x10
		::System::String* _systemFullName; // 0x18
		::System::String* _systemName; // 0x20
		::Entitas::ISystem* _system; // 0x28
		::System::Double _accumulatedCleanupDuration; // 0x30
		::Entitas::VisualDebugging::Unity::SystemInterfaceFlags _interfaceFlags; // 0x38
		::System::Int32 _cleanupDurationsCount; // 0x3C
		::System::Double _teardownDuration_k__BackingField; // 0x40
		::System::Double _initializationDuration_k__BackingField; // 0x48
		::System::Double _maxCleanupDuration; // 0x50
		::System::Double _minCleanupDuration; // 0x58
		::System::Double _minExecutionDuration; // 0x60
		::System::Double _cleanupDuration_k__BackingField; // 0x68
		::System::Double _maxExecutionDuration; // 0x70
		::System::Int32 _executionDurationsCount; // 0x78
		::System::Boolean isActive; // 0x7C
		::System::Byte _padding0[0x3];
		::System::Double _accumulatedExecutionDuration; // 0x80
		::System::Void _ctor(::Entitas::ISystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_CTOR_OFFSET))(this, a1);
		}

		::Entitas::ISystem* get_system()
		{
			return ((::Entitas::ISystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEM_OFFSET))(this);
		}

		::System::String* get_systemName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEMNAME_OFFSET))(this);
		}

		::System::String* get_systemFullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEMFULLNAME_OFFSET))(this);
		}

		::System::Boolean get_isInitializeSystems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISINITIALIZESYSTEMS_OFFSET))(this);
		}

		::System::Boolean get_isExecuteSystems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISEXECUTESYSTEMS_OFFSET))(this);
		}

		::System::Boolean get_isCleanupSystems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISCLEANUPSYSTEMS_OFFSET))(this);
		}

		::System::Boolean get_isTearDownSystems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISTEARDOWNSYSTEMS_OFFSET))(this);
		}

		::System::Boolean get_isReactiveSystems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISREACTIVESYSTEMS_OFFSET))(this);
		}

		::System::Double get_initializationDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_INITIALIZATIONDURATION_OFFSET))(this);
		}

		::System::Void set_initializationDuration(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_INITIALIZATIONDURATION_OFFSET))(this, a1);
		}

		::System::Double get_accumulatedExecutionDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ACCUMULATEDEXECUTIONDURATION_OFFSET))(this);
		}

		::System::Double get_minExecutionDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MINEXECUTIONDURATION_OFFSET))(this);
		}

		::System::Double get_maxExecutionDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MAXEXECUTIONDURATION_OFFSET))(this);
		}

		::System::Double get_averageExecutionDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AVERAGEEXECUTIONDURATION_OFFSET))(this);
		}

		::System::Double get_accumulatedCleanupDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ACCUMULATEDCLEANUPDURATION_OFFSET))(this);
		}

		::System::Double get_minCleanupDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MINCLEANUPDURATION_OFFSET))(this);
		}

		::System::Double get_maxCleanupDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MAXCLEANUPDURATION_OFFSET))(this);
		}

		::System::Double get_averageCleanupDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AVERAGECLEANUPDURATION_OFFSET))(this);
		}

		::System::Double get_cleanupDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_CLEANUPDURATION_OFFSET))(this);
		}

		::System::Void set_cleanupDuration(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_CLEANUPDURATION_OFFSET))(this, a1);
		}

		::System::Double get_teardownDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_TEARDOWNDURATION_OFFSET))(this);
		}

		::System::Void set_teardownDuration(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_TEARDOWNDURATION_OFFSET))(this, a1);
		}

		::System::Boolean get_areAllParentsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AREALLPARENTSACTIVE_OFFSET))(this);
		}

		::System::Void AddExecutionDuration(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_ADDEXECUTIONDURATION_OFFSET))(this, a1);
		}

		::System::Void AddCleanupDuration(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_ADDCLEANUPDURATION_OFFSET))(this, a1);
		}

		::System::Void ResetDurations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_RESETDURATIONS_OFFSET))(this);
		}

		static ::Entitas::VisualDebugging::Unity::SystemInterfaceFlags getInterfaceFlags(::Entitas::ISystem* a1)
		{
			return ((::Entitas::VisualDebugging::Unity::SystemInterfaceFlags(*)(::Entitas::ISystem*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GETINTERFACEFLAGS_OFFSET))(a1);
		}

	};
}
