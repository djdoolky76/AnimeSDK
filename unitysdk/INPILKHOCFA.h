#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEAIJJCDJHO.h"
#include "unitysdk/EAPGFKLGCDH.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::CustomRP { class PPFilterStack; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define INPILKHOCFA_ALPJKNDKGEB_OFFSET UNITYSDK_OFFSET(0xB82AE80)
#define INPILKHOCFA_CTOR_OFFSET UNITYSDK_OFFSET(0xB82A7F0)
#define INPILKHOCFA_DHIMEIMHMKJ_OFFSET UNITYSDK_OFFSET(0xB82B1F0)
#define INPILKHOCFA_EHMHHDKBGIL_OFFSET UNITYSDK_OFFSET(0xB82AAC0)
#define INPILKHOCFA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB82A850)
#define INPILKHOCFA_HLOAFMBPGAM_OFFSET UNITYSDK_OFFSET(0xB82A9D0)
#define INPILKHOCFA_JFFCHDAJDIL_OFFSET UNITYSDK_OFFSET(0xB82B150)
#define INPILKHOCFA_KFKJNIGNLIP_OFFSET UNITYSDK_OFFSET(0xB82A8E0)
#define INPILKHOCFA_KKNOANNNANM_OFFSET UNITYSDK_OFFSET(0xB82AE10)
#define INPILKHOCFA_MFCOINKALKA_OFFSET UNITYSDK_OFFSET(0xB82A810)
#define INPILKHOCFA_MGKOFHJGLKP_OFFSET UNITYSDK_OFFSET(0xB82AC90)

inline static constexpr unsigned int INPILKHOCFA_TypeDefinitionIndex = 72128;

	class INPILKHOCFA : public ::BEAIJJCDJHO
	{
	public:
		::EAPGFKLGCDH BHDKFJPCOHD; // 0x20
		::RPG::GameCore::GameEntity* LBGOHOGMEOJ; // 0x30
		::RPG::CustomRP::PPFilterStack* BBDMNLLJNCN; // 0x38
		::System::String* CDMFNHJGGKF; // 0x40
		::System::Single MPDCHMNJKAC; // 0x48
		::System::Single CCAOGMEFNLB; // 0x4C
		::System::Single EKEPNGNLJHE; // 0x50
		::System::Single OPMMHEEFLBF; // 0x54
		::System::Single IIPKCANDFBK; // 0x58
		::System::Single DNLGMCGKHJL; // 0x5C
		::System::Single JGNDPDFEBBO; // 0x60
		::System::Single NOLLFPILIHO; // 0x64
		::System::Boolean FNOOFALACHF; // 0x68
		::System::Boolean ABIKIPMLGEL; // 0x69
		::System::Boolean MEPIPCANMLO; // 0x6A
		::System::Void _ctor(::RPG::GameCore::PPEffectFilterPriorityGroup a1, ::RPG::GameCore::PPEffectFilterPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + INPILKHOCFA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PPEffectFilterType MFCOINKALKA()
		{
			return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + INPILKHOCFA_MFCOINKALKA_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPILKHOCFA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean EHMHHDKBGIL(::RPG::GameCore::PPEffectFilterType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + INPILKHOCFA_EHMHHDKBGIL_OFFSET))(this, a1);
		}

		::System::Void MGKOFHJGLKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPILKHOCFA_MGKOFHJGLKP_OFFSET))(this);
		}

		::System::Void HLOAFMBPGAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPILKHOCFA_HLOAFMBPGAM_OFFSET))(this);
		}

		::System::Void KKNOANNNANM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPILKHOCFA_KKNOANNNANM_OFFSET))(this);
		}

		::System::Void KFKJNIGNLIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPILKHOCFA_KFKJNIGNLIP_OFFSET))(this);
		}

		::System::Void ALPJKNDKGEB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INPILKHOCFA_ALPJKNDKGEB_OFFSET))(this, a1);
		}

		::System::Single DHIMEIMHMKJ(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + INPILKHOCFA_DHIMEIMHMKJ_OFFSET))(this, a1);
		}

		::System::Void JFFCHDAJDIL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INPILKHOCFA_JFFCHDAJDIL_OFFSET))(this, a1);
		}

	};
