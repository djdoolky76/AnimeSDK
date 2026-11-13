#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_MISSIONMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19850400)
#define RPG_CLIENT_MISSIONMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19850430)
#define RPG_CLIENT_MISSIONMODULE___C___INITFUNCENTRYMISSIONANDSUBMISSION_B__127_0_OFFSET UNITYSDK_OFFSET(0x198504B0)
#define RPG_CLIENT_MISSIONMODULE___C___INITUNLOCKDATAMAINMISSIONANDSUBMISSION_B__124_0_OFFSET UNITYSDK_OFFSET(0x19850440)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule___c_TypeDefinitionIndex = 68080;

	class MissionModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__127_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x61AD0);
		}

		static ::System::Action** StaticGet___9__124_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x61AD8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x61AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Void __InitUnlockDataMainMissionAndSubMission_b__124_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C___INITUNLOCKDATAMAINMISSIONANDSUBMISSION_B__124_0_OFFSET))(this);
		}

		::System::Void __InitFuncEntryMissionAndSubMission_b__127_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C___INITFUNCENTRYMISSIONANDSUBMISSION_B__127_0_OFFSET))(this);
		}

	};
}
