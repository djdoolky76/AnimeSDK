#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MissionModule; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMissionCustomValueChange; }
namespace System { class String; }

#define KOCFKACIOND_CTOR_OFFSET UNITYSDK_OFFSET(0xB589F20)
#define KOCFKACIOND_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB58A1C0)
#define KOCFKACIOND_OIEJEHMKLKL_OFFSET UNITYSDK_OFFSET(0xB58A420)
#define KOCFKACIOND__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xB58A210)
#define KOCFKACIOND__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB58A260)
#define KOCFKACIOND__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB58A340)

inline static constexpr unsigned int KOCFKACIOND_TypeDefinitionIndex = 53477;

	class KOCFKACIOND
	{
	public:
		::RPG::Client::MissionModule* JOMIMCLABPL; // 0x68
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMissionCustomValueChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMissionCustomValueChange*))((::PBYTE)hIl2Cpp + KOCFKACIOND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCFKACIOND_DISPOSE_OFFSET))(this);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCFKACIOND__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCFKACIOND__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCFKACIOND__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void OIEJEHMKLKL(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + KOCFKACIOND_OIEJEHMKLKL_OFFSET))(this, a1, a2);
		}

	};
