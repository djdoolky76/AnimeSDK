#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class CADBGOOEJLA;
namespace RPG::Client::MechCraft::View { class MechCraftRevenueControlBinder; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD65DF90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD65C6E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD65C780)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROL_PLAYLEVELUPANIM_OFFSET UNITYSDK_OFFSET(0xD65D800)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD65C720)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROL__PLAYLEVELUPANIM_B__6_0_OFFSET UNITYSDK_OFFSET(0xD65DFA0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftRevenueControl_TypeDefinitionIndex = 80047;

	class MechCraftRevenueControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::CADBGOOEJLA* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftRevenueControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROL_CTOR_OFFSET))(this);
		}

		::CADBGOOEJLA* get_Content()
		{
			return ((::CADBGOOEJLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::CADBGOOEJLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CADBGOOEJLA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::CADBGOOEJLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CADBGOOEJLA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void PlayLevelUpAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROL_PLAYLEVELUPANIM_OFFSET))(this);
		}

		::System::Void _PlayLevelUpAnim_b__6_0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREVENUECONTROL__PLAYLEVELUPANIM_B__6_0_OFFSET))(this, a1);
		}

	};
}
