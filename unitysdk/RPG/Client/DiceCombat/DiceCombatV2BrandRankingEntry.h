#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_BIBHAKPJGEE_OFFSET UNITYSDK_OFFSET(0xCC9AC50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0xCC9B100)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_GET_PERCENT_OFFSET UNITYSDK_OFFSET(0xCC9AA30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_HHADJHHHPHE_OFFSET UNITYSDK_OFFSET(0xCC9AA50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_LKGLDIJPMAI_OFFSET UNITYSDK_OFFSET(0xCC9AE30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_MNMENALBNEE_OFFSET UNITYSDK_OFFSET(0xCC9AF70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_SET_PERCENT_OFFSET UNITYSDK_OFFSET(0xCC9AA40)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BrandRankingEntry_TypeDefinitionIndex = 76204;

	class DiceCombatV2BrandRankingEntry : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LocalizedText* _RankText; // 0x18
		::UnityEngine::UI::Slider* _RankSlider; // 0x20
		::UnityEngine::UI::Slider* _RankHorizontalSlider; // 0x28
		::RPG::Client::UIValueChangeAnimation* _RankSliderAnimation; // 0x30
		::RPG::Client::LocalizedText* _PercentText; // 0x38
		::UnityEngine::UI::Slider* _PercentSlider; // 0x40
		::System::Single _Percent_k__BackingField; // 0x48
		::System::Int32 OAIEBAKJKIG; // 0x4C
		::System::Boolean DLDPAGEBIKA; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_CTOR_OFFSET))(this);
		}

		::System::Single get_Percent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_GET_PERCENT_OFFSET))(this);
		}

		::System::Void set_Percent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_SET_PERCENT_OFFSET))(this, a1);
		}

		::System::Void HHADJHHHPHE(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_HHADJHHHPHE_OFFSET))(this, a1, a2);
		}

		::System::Void BIBHAKPJGEE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_BIBHAKPJGEE_OFFSET))(this, a1);
		}

		::System::Void LKGLDIJPMAI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_LKGLDIJPMAI_OFFSET))(this, a1);
		}

		::System::Void MNMENALBNEE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_MNMENALBNEE_OFFSET))(this, a1);
		}

	};
}
