#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCFDAHOHJEA_CPPOCCPECLA.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/SpecialBPDisplayStyle.h"
class LJABAMCMDLI;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define BCFDAHOHJEA_ADCMPKKPBNC_OFFSET UNITYSDK_OFFSET(0x1709EA20)
#define BCFDAHOHJEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1709EB80)
#define BCFDAHOHJEA_EMPGHDFMDOL_OFFSET UNITYSDK_OFFSET(0x1709E700)
#define BCFDAHOHJEA_FFJMOKPAHBJ_OFFSET UNITYSDK_OFFSET(0x1709E2E0)
#define BCFDAHOHJEA_FKDFBDLNOEK_OFFSET UNITYSDK_OFFSET(0x1709E3B0)
#define BCFDAHOHJEA_FOBKIHKMFKH_OFFSET UNITYSDK_OFFSET(0x1709EAD0)
#define BCFDAHOHJEA_GET_BPSTYLE_OFFSET UNITYSDK_OFFSET(0x1709EA00)
#define BCFDAHOHJEA_KAAAEJMAFOB_OFFSET UNITYSDK_OFFSET(0x1709E340)
#define BCFDAHOHJEA_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0x1709E9B0)
#define BCFDAHOHJEA_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1709E5A0)
#define BCFDAHOHJEA_SET_BPSTYLE_OFFSET UNITYSDK_OFFSET(0x1709EA10)
#define BCFDAHOHJEA___ONEFFECTFINISH_B__19_0_OFFSET UNITYSDK_OFFSET(0x1709EBB0)

inline static constexpr unsigned int BCFDAHOHJEA_TypeDefinitionIndex = 73476;

	class BCFDAHOHJEA : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* CDJGLKECPHI; // 0x60
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
		::UnityEngine::Transform* HHJBHFGCBPN; // 0x70
		::UnityEngine::Transform* MFCELDGNMON; // 0x78
		::UnityEngine::Transform* GHGAKNDLKGM; // 0x80
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x88
		::RPG::Client::PrefabLoadMeta* MIOEBLHIJHL; // 0x90
		::BCFDAHOHJEA_CPPOCCPECLA CBGJNJGLGAG; // 0x98
		::UnityEngine::Transform* EPBGHBLAOCO; // 0xC0
		::UnityEngine::UI::Image* EIAEMNMJOJI; // 0xC8
		::UnityEngine::Transform* FIACEDOMPEA; // 0xD0
		::RPG::GameCore::SpecialBPDisplayStyle _BPStyle_k__BackingField; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFDAHOHJEA_CTOR_OFFSET))(this);
		}

		::System::Void FFJMOKPAHBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFDAHOHJEA_FFJMOKPAHBJ_OFFSET))(this);
		}

		::System::Void KAAAEJMAFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFDAHOHJEA_KAAAEJMAFOB_OFFSET))(this);
		}

		::System::Void FKDFBDLNOEK(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BCFDAHOHJEA_FKDFBDLNOEK_OFFSET))(this, a1, a2);
		}

		::System::Void NKPPGDENJAE(::LJABAMCMDLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJABAMCMDLI*))((::PBYTE)hIl2Cpp + BCFDAHOHJEA_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void KGDIPFNECJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFDAHOHJEA_KGDIPFNECJH_OFFSET))(this);
		}

		::RPG::GameCore::SpecialBPDisplayStyle get_BPStyle()
		{
			return ((::RPG::GameCore::SpecialBPDisplayStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFDAHOHJEA_GET_BPSTYLE_OFFSET))(this);
		}

		::System::Void set_BPStyle(::RPG::GameCore::SpecialBPDisplayStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialBPDisplayStyle))((::PBYTE)hIl2Cpp + BCFDAHOHJEA_SET_BPSTYLE_OFFSET))(this, a1);
		}

		::System::Void EMPGHDFMDOL(::LJABAMCMDLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJABAMCMDLI*))((::PBYTE)hIl2Cpp + BCFDAHOHJEA_EMPGHDFMDOL_OFFSET))(this, a1);
		}

		::System::Void ADCMPKKPBNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFDAHOHJEA_ADCMPKKPBNC_OFFSET))(this);
		}

		::System::Boolean FOBKIHKMFKH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFDAHOHJEA_FOBKIHKMFKH_OFFSET))(this);
		}

		::System::Void __OnEffectFinish_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFDAHOHJEA___ONEFFECTFINISH_B__19_0_OFFSET))(this);
		}

	};
