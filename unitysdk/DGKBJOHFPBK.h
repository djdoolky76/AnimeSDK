#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierAddReason.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/MVector3.h"
class DGKBJOHFPBK;
class MBBEBLGELAP;
class PGJINBJDAHN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Nullable; }
namespace System { class String; }

#define DGKBJOHFPBK_CCTOR_OFFSET UNITYSDK_OFFSET(0xE84C2A0)
#define DGKBJOHFPBK_CLEAR_OFFSET UNITYSDK_OFFSET(0xE84C1F0)
#define DGKBJOHFPBK_CTOR_OFFSET UNITYSDK_OFFSET(0xE84C260)
#define DGKBJOHFPBK_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xE84C0A0)

	class DGKBJOHFPBK
	{
	public:
		::PGJINBJDAHN* PMCDOCGAOIN; // 0x18
		::System::String* BFHDJGEIGBC; // 0x20
		::MBBEBLGELAP* KPLILJJOOGI; // 0x28
		::RPG::GameCore::TurnBasedModifierInstance* AMLKIGFLNHI; // 0x30
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x38
		::System::String* MKFEAAIKJNA; // 0x40
		::System::Nullable* AAIKGIBKHBH; // 0x48
		::System::Boolean LDGDOCAGNEE; // 0x50
		::System::Boolean ICMOLOJEKDF; // 0x51
		::System::Boolean APFPPJAKNBF; // 0x52
		::System::Boolean CPFEDPAGDFF; // 0x53
		::RPG::GameCore::ModifierAddReason HBGNJPJNLIJ; // 0x54
		::RPG::GameCore::ModifierStackingFlag MLLIBMECPGM; // 0x58
		::System::Boolean DNNKBICNJOA; // 0x5C
		::System::Byte _padding0[0x3];
		::System::Single OCAGLPIKAKC; // 0x60
		::System::Single LDFKGILGIOA; // 0x64
		::System::Single FGGHHEIIFEL; // 0x68
		::System::Nullable* OEODJDBGBIF; // 0x6C
		::System::Nullable* DIIGMKEAKCD; // 0x74
		::RPG::MVector3 HNNPEMAPANP; // 0x7C
		::System::Boolean ADMJLNEDMDG; // 0x88
		::System::Boolean BAGDOPLOCCG; // 0x89
		::System::Boolean BPEKOACCGHK; // 0x8A
		::System::Boolean JILEMDKEOKL; // 0x8B
		::System::Nullable* MJPNFNMGANM; // 0x8C
		::System::Nullable* BNJBNIIDHJN; // 0x94
		static ::DGKBJOHFPBK** StaticGet_JNKBIGPJDNK()
		{
			return (::DGKBJOHFPBK**)UnitySDK::FromName("", "DGKBJOHFPBK")->GetStaticField(0x66120);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKBJOHFPBK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGKBJOHFPBK_CCTOR_OFFSET))();
		}

		::System::Void PPEGOIODAKI(::DGKBJOHFPBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGKBJOHFPBK*))((::PBYTE)hIl2Cpp + DGKBJOHFPBK_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKBJOHFPBK_CLEAR_OFFSET))(this);
		}

	};
