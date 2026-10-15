#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAdventureAppearMode.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace System { class Action; }

#define KJFJPLEPDAE_APAJMCAAPEJ_OFFSET UNITYSDK_OFFSET(0xB442DD0)
#define KJFJPLEPDAE_BCLNCJPAKAH_OFFSET UNITYSDK_OFFSET(0xB442E40)
#define KJFJPLEPDAE_CEIONHPDNDP_OFFSET UNITYSDK_OFFSET(0xB4427C0)
#define KJFJPLEPDAE_CTOR_OFFSET UNITYSDK_OFFSET(0xB442EA0)
#define KJFJPLEPDAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB442530)
#define KJFJPLEPDAE_EOBPGFDIGOC_OFFSET UNITYSDK_OFFSET(0xB442D10)
#define KJFJPLEPDAE_FMBHJKEDLFC_OFFSET UNITYSDK_OFFSET(0xB442820)
#define KJFJPLEPDAE_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB442580)
#define KJFJPLEPDAE_LPJMDKIBPCG_OFFSET UNITYSDK_OFFSET(0xB4428E0)
#define KJFJPLEPDAE_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB442600)
#define KJFJPLEPDAE_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB4428A0)

inline static constexpr unsigned int KJFJPLEPDAE_TypeDefinitionIndex = 56999;

	class KJFJPLEPDAE : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x18
		::RPG::GameCore::CharacterModelComponent* OFGPBOKLGJJ; // 0x20
		::System::Action* DKLLIKCJMGH; // 0x28
		::System::Nullable_1<::RPG::GameCore::EAdventureAppearMode> JDMMAAEKFIL; // 0x30
		::System::Boolean KPEGOFGDPEA; // 0x38
		::System::Boolean MCPGGJGKLGK; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFJPLEPDAE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFJPLEPDAE_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFJPLEPDAE_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFJPLEPDAE_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFJPLEPDAE_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Boolean CEIONHPDNDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFJPLEPDAE_CEIONHPDNDP_OFFSET))(this);
		}

		::System::Void LPJMDKIBPCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFJPLEPDAE_LPJMDKIBPCG_OFFSET))(this);
		}

		::System::Void EOBPGFDIGOC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KJFJPLEPDAE_EOBPGFDIGOC_OFFSET))(this, a1);
		}

		::System::Void APAJMCAAPEJ(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KJFJPLEPDAE_APAJMCAAPEJ_OFFSET))(this, a1);
		}

		::System::Void FMBHJKEDLFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFJPLEPDAE_FMBHJKEDLFC_OFFSET))(this);
		}

		::System::Void BCLNCJPAKAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFJPLEPDAE_BCLNCJPAKAH_OFFSET))(this);
		}

	};
