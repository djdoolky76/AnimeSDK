#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAdventureAppearMode.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace System { class Action; }
namespace System { class Nullable; }

#define KJFJPLEPDAE_APAJMCAAPEJ_OFFSET UNITYSDK_OFFSET(0xB449A10)
#define KJFJPLEPDAE_BCLNCJPAKAH_OFFSET UNITYSDK_OFFSET(0xB449A80)
#define KJFJPLEPDAE_CEIONHPDNDP_OFFSET UNITYSDK_OFFSET(0xB449400)
#define KJFJPLEPDAE_CTOR_OFFSET UNITYSDK_OFFSET(0xB449AE0)
#define KJFJPLEPDAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB449170)
#define KJFJPLEPDAE_EOBPGFDIGOC_OFFSET UNITYSDK_OFFSET(0xB449950)
#define KJFJPLEPDAE_FMBHJKEDLFC_OFFSET UNITYSDK_OFFSET(0xB449460)
#define KJFJPLEPDAE_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB4491C0)
#define KJFJPLEPDAE_LPJMDKIBPCG_OFFSET UNITYSDK_OFFSET(0xB449520)
#define KJFJPLEPDAE_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB449240)
#define KJFJPLEPDAE_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB4494E0)

inline static constexpr unsigned int KJFJPLEPDAE_TypeDefinitionIndex = 56999;

	class KJFJPLEPDAE : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x18
		::System::Action* DKLLIKCJMGH; // 0x20
		::RPG::GameCore::CharacterModelComponent* OFGPBOKLGJJ; // 0x28
		::System::Boolean MCPGGJGKLGK; // 0x30
		::System::Boolean KPEGOFGDPEA; // 0x31
		::System::Byte _padding0[0x2];
		::System::Nullable* JDMMAAEKFIL; // 0x34
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
