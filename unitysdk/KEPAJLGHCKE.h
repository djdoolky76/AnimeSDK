#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBIKMJHGEDE.h"
#include "unitysdk/RPG/GameCore/FiveDimGrenadierAttackType.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/RPG/GameCore/FiveDimSimpleProjectileMoveType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class POHNBOACDHB;
namespace RPG::GameCore { class FiveDimGrenadierBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimGrenadierMoveConfig; }
namespace RPG::GameCore { class FiveDimGrenadierProjectileConfig; }
namespace RPG::GameCore { class FiveDimGrenadierPropSpawnerParam; }
namespace RPG::GameCore { class FloatCurve; }

#define KEPAJLGHCKE_CDPMALOBAKK_OFFSET UNITYSDK_OFFSET(0xBC0F9A0)
#define KEPAJLGHCKE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC0FB00)
#define KEPAJLGHCKE_DDCIDELMGMD_OFFSET UNITYSDK_OFFSET(0xBC0E050)
#define KEPAJLGHCKE_DEFNPJLFDJB_OFFSET UNITYSDK_OFFSET(0xBC0EE10)
#define KEPAJLGHCKE_DGOPGPFGDDJ_OFFSET UNITYSDK_OFFSET(0xBC0E110)
#define KEPAJLGHCKE_FNJCKCNKBKC_OFFSET UNITYSDK_OFFSET(0xBC0D5B0)
#define KEPAJLGHCKE_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xBC0DC80)
#define KEPAJLGHCKE_GLKIGEDDFOK_OFFSET UNITYSDK_OFFSET(0xBC0F600)
#define KEPAJLGHCKE_HLGPIAMPANI_OFFSET UNITYSDK_OFFSET(0xBC0DE30)
#define KEPAJLGHCKE_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xBC0DD20)
#define KEPAJLGHCKE_INHEPGFPGGD_OFFSET UNITYSDK_OFFSET(0xBC0E9E0)
#define KEPAJLGHCKE_JLHCNCPPHMA_OFFSET UNITYSDK_OFFSET(0xBC0E180)
#define KEPAJLGHCKE_KOKMGFODDNF_OFFSET UNITYSDK_OFFSET(0xBC0E4F0)
#define KEPAJLGHCKE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC0CE10)
#define KEPAJLGHCKE_LDGNMPOAKJN_OFFSET UNITYSDK_OFFSET(0xBC0F860)
#define KEPAJLGHCKE_MCHPNNKMNFL_OFFSET UNITYSDK_OFFSET(0xBC0FA70)
#define KEPAJLGHCKE_MNMPLEEMKKN_OFFSET UNITYSDK_OFFSET(0xBC0DDD0)
#define KEPAJLGHCKE_OBILFPGIIBB_OFFSET UNITYSDK_OFFSET(0xBC0EDC0)

inline static constexpr unsigned int KEPAJLGHCKE_TypeDefinitionIndex = 79391;

	class KEPAJLGHCKE : public ::CBIKMJHGEDE
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimGrenadierProjectileConfig*>* OOCOCMFFKBP; // 0x18
		::RPG::GameCore::FiveDimGrenadierPropSpawnerParam* FAKLDOKMHBF; // 0x20
		::RPG::GameCore::FloatCurve* HIGDOKHKMPL; // 0x28
		::System::Single PGKOAKJFDAM; // 0x30
		::System::Single NOODCPGOLFE; // 0x34
		::System::Single FBMMGCDCJDC; // 0x38
		::System::Single EHIDKMJBGIG; // 0x3C
		::RPG::GameCore::FiveDimGrenadierAttackType KHPNNECOAGN; // 0x40
		::System::Single EINBJPDEGCM; // 0x44
		::System::Single CEGEFFGMPNL; // 0x48
		::System::Single FLHOEGBFPJB; // 0x4C
		::System::Single KGAKODBDKDB; // 0x50
		::System::Single AHANKNNOMMK; // 0x54
		::System::Single GDOIPGKIPJE; // 0x58
		::RPG::GameCore::FiveDimSimpleProjectileMoveType OCKMOPEPELP; // 0x5C
		::System::Single DJMBNCFMOPH; // 0x60
		::System::Single ADIKPCEHLLL; // 0x64
		::System::Single GBBDEEJPEOO; // 0x68
		::System::Single IFOMEPEPOEC; // 0x6C
		::System::Single OBICEPBGKMP; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FNJCKCNKBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_FNJCKCNKBKC_OFFSET))(this);
		}

		::System::Void GBCHFFLMIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_GBCHFFLMIIC_OFFSET))(this);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void MNMPLEEMKKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_MNMPLEEMKKN_OFFSET))(this);
		}

		::System::Boolean HLGPIAMPANI(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_HLGPIAMPANI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean DDCIDELMGMD(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_DDCIDELMGMD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean DGOPGPFGDDJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_DGOPGPFGDDJ_OFFSET))(this);
		}

		::System::Boolean KOKMGFODDNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_KOKMGFODDNF_OFFSET))(this);
		}

		::System::Boolean DEFNPJLFDJB(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_DEFNPJLFDJB_OFFSET))(this, a1);
		}

		::System::Boolean INHEPGFPGGD(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_INHEPGFPGGD_OFFSET))(this, a1);
		}

		::System::UInt32 JLHCNCPPHMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_JLHCNCPPHMA_OFFSET))(this);
		}

		::System::Boolean GLKIGEDDFOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_GLKIGEDDFOK_OFFSET))(this);
		}

		::UnityEngine::Vector3 LDGNMPOAKJN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_LDGNMPOAKJN_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimOrthoDirection OBILFPGIIBB()
		{
			return ((::RPG::GameCore::FiveDimOrthoDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_OBILFPGIIBB_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimGrenadierMoveConfig* MCHPNNKMNFL()
		{
			return ((::RPG::GameCore::FiveDimGrenadierMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_MCHPNNKMNFL_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimGrenadierBakedMoveConfig* CDPMALOBAKK()
		{
			return ((::RPG::GameCore::FiveDimGrenadierBakedMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPAJLGHCKE_CDPMALOBAKK_OFFSET))(this);
		}

	};
