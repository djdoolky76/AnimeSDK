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

#define DGKBJOHFPBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADB5EA0)
#define DGKBJOHFPBK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ADB5DF0)
#define DGKBJOHFPBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB5E60)
#define DGKBJOHFPBK_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x1ADB5CA0)

inline static constexpr unsigned int DGKBJOHFPBK_TypeDefinitionIndex = 57042;

	class DGKBJOHFPBK
	{
	public:
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x18
		::System::String* MKFEAAIKJNA; // 0x20
		::RPG::GameCore::TurnBasedModifierInstance* AMLKIGFLNHI; // 0x28
		::System::String* BFHDJGEIGBC; // 0x30
		::MBBEBLGELAP* KPLILJJOOGI; // 0x38
		::PGJINBJDAHN* PMCDOCGAOIN; // 0x40
		::System::Boolean CPFEDPAGDFF; // 0x48
		::System::Boolean ADMJLNEDMDG; // 0x49
		::System::Boolean BPEKOACCGHK; // 0x4A
		::System::Byte _padding0[0x1];
		::System::Nullable_1<::System::Int32> DIIGMKEAKCD; // 0x4C
		::RPG::MVector3 HNNPEMAPANP; // 0x54
		::System::Single LDFKGILGIOA; // 0x60
		::System::Single FGGHHEIIFEL; // 0x64
		::System::Nullable_1<::System::Int32> BNJBNIIDHJN; // 0x68
		::System::Boolean JILEMDKEOKL; // 0x70
		::System::Boolean BAGDOPLOCCG; // 0x71
		::System::Boolean DNNKBICNJOA; // 0x72
		::System::Boolean ICMOLOJEKDF; // 0x73
		::System::Single OCAGLPIKAKC; // 0x74
		::RPG::GameCore::ModifierAddReason HBGNJPJNLIJ; // 0x78
		::System::Nullable_1<::System::Int32> AAIKGIBKHBH; // 0x7C
		::RPG::GameCore::ModifierStackingFlag MLLIBMECPGM; // 0x84
		::System::Boolean LDGDOCAGNEE; // 0x88
		::System::Boolean APFPPJAKNBF; // 0x89
		::System::Byte _padding1[0x2];
		::System::Nullable_1<::System::Int32> MJPNFNMGANM; // 0x8C
		::System::Nullable_1<::System::Int32> OEODJDBGBIF; // 0x94
		static ::DGKBJOHFPBK** StaticGet_JNKBIGPJDNK()
		{
			return (::DGKBJOHFPBK**)UnitySDK::FromName("", "DGKBJOHFPBK")->GetStaticField(0x62E30);
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
