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

#define DGKBJOHFPBK_CCTOR_OFFSET UNITYSDK_OFFSET(0xF41E350)
#define DGKBJOHFPBK_CLEAR_OFFSET UNITYSDK_OFFSET(0xF41E2A0)
#define DGKBJOHFPBK_CTOR_OFFSET UNITYSDK_OFFSET(0xF41E310)
#define DGKBJOHFPBK_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xF41E150)

inline static constexpr unsigned int DGKBJOHFPBK_TypeDefinitionIndex = 57042;

	class DGKBJOHFPBK
	{
	public:
		::MBBEBLGELAP* KPLILJJOOGI; // 0x18
		::System::String* MKFEAAIKJNA; // 0x20
		::System::String* BFHDJGEIGBC; // 0x28
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x30
		::PGJINBJDAHN* PMCDOCGAOIN; // 0x38
		::RPG::GameCore::TurnBasedModifierInstance* AMLKIGFLNHI; // 0x40
		::System::Boolean ADMJLNEDMDG; // 0x48
		::System::Boolean DNNKBICNJOA; // 0x49
		::System::Boolean BPEKOACCGHK; // 0x4A
		::System::Boolean JILEMDKEOKL; // 0x4B
		::System::Boolean CPFEDPAGDFF; // 0x4C
		::System::Boolean LDGDOCAGNEE; // 0x4D
		::System::Boolean BAGDOPLOCCG; // 0x4E
		::System::Byte _padding0[0x1];
		::System::Single LDFKGILGIOA; // 0x50
		::RPG::GameCore::ModifierStackingFlag MLLIBMECPGM; // 0x54
		::System::Single FGGHHEIIFEL; // 0x58
		::System::Boolean ICMOLOJEKDF; // 0x5C
		::System::Boolean APFPPJAKNBF; // 0x5D
		::System::Byte _padding1[0x2];
		::System::Single OCAGLPIKAKC; // 0x60
		::RPG::MVector3 HNNPEMAPANP; // 0x64
		::System::Nullable_1<::System::Int32> OEODJDBGBIF; // 0x70
		::System::Nullable_1<::System::Int32> AAIKGIBKHBH; // 0x78
		::System::Nullable_1<::System::Int32> DIIGMKEAKCD; // 0x80
		::System::Nullable_1<::System::Int32> MJPNFNMGANM; // 0x88
		::System::Nullable_1<::System::Int32> BNJBNIIDHJN; // 0x90
		::RPG::GameCore::ModifierAddReason HBGNJPJNLIJ; // 0x98
		static ::DGKBJOHFPBK** StaticGet_JNKBIGPJDNK()
		{
			return (::DGKBJOHFPBK**)UnitySDK::FromName("", "DGKBJOHFPBK")->GetStaticField(0x5C6D0);
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
