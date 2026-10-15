#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierAddReason.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
class DGKBJOHFPBK;
class MBBEBLGELAP;
class PGJINBJDAHN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define DGKBJOHFPBK_CCTOR_OFFSET UNITYSDK_OFFSET(0xE841470)
#define DGKBJOHFPBK_CLEAR_OFFSET UNITYSDK_OFFSET(0xE8413C0)
#define DGKBJOHFPBK_CTOR_OFFSET UNITYSDK_OFFSET(0xE841430)
#define DGKBJOHFPBK_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xE841270)

inline static constexpr unsigned int DGKBJOHFPBK_TypeDefinitionIndex = 55839;

	class DGKBJOHFPBK
	{
	public:
		::MBBEBLGELAP* KPLILJJOOGI; // 0x18
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x20
		::System::String* MKFEAAIKJNA; // 0x28
		::System::String* BFHDJGEIGBC; // 0x30
		::RPG::GameCore::TurnBasedModifierInstance* AMLKIGFLNHI; // 0x38
		::PGJINBJDAHN* PMCDOCGAOIN; // 0x40
		::System::Boolean DNNKBICNJOA; // 0x48
		::System::Boolean APFPPJAKNBF; // 0x49
		::System::Byte _padding0[0x2];
		::RPG::MVector3 HNNPEMAPANP; // 0x4C
		::RPG::GameCore::ModifierStackingFlag MLLIBMECPGM; // 0x58
		::System::Nullable_1<::System::Int32> AAIKGIBKHBH; // 0x5C
		::System::Single OCAGLPIKAKC; // 0x64
		::System::Boolean LDGDOCAGNEE; // 0x68
		::System::Boolean BPEKOACCGHK; // 0x69
		::System::Boolean ADMJLNEDMDG; // 0x6A
		::System::Boolean ICMOLOJEKDF; // 0x6B
		::System::Nullable_1<::System::Int32> BNJBNIIDHJN; // 0x6C
		::System::Single LDFKGILGIOA; // 0x74
		::RPG::GameCore::ModifierAddReason HBGNJPJNLIJ; // 0x78
		::System::Nullable_1<::System::Int32> OEODJDBGBIF; // 0x7C
		::System::Single FGGHHEIIFEL; // 0x84
		::System::Boolean BAGDOPLOCCG; // 0x88
		::System::Boolean JILEMDKEOKL; // 0x89
		::System::Boolean CPFEDPAGDFF; // 0x8A
		::System::Byte _padding1[0x1];
		::System::Nullable_1<::System::Int32> MJPNFNMGANM; // 0x8C
		::System::Nullable_1<::System::Int32> DIIGMKEAKCD; // 0x94
		static ::DGKBJOHFPBK** StaticGet_JNKBIGPJDNK()
		{
			return (::DGKBJOHFPBK**)UnitySDK::FromName("", "DGKBJOHFPBK")->GetStaticField(0x639D0);
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
