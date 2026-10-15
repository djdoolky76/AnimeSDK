#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierAddReason.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
class MBBEBLGELAP;
class MNBNFBAMKKI;
class OEOLGJFLJDO;
class PGJINBJDAHN;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define OEOLGJFLJDO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE31860)
#define OEOLGJFLJDO_CLEAR_OFFSET UNITYSDK_OFFSET(0xBE31790)
#define OEOLGJFLJDO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE31820)
#define OEOLGJFLJDO_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xBE31630)

inline static constexpr unsigned int OEOLGJFLJDO_TypeDefinitionIndex = 53790;

	class OEOLGJFLJDO
	{
	public:
		::MBBEBLGELAP* KPLILJJOOGI; // 0x18
		::System::String* BFHDJGEIGBC; // 0x20
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x28
		::MNBNFBAMKKI* AMLKIGFLNHI; // 0x30
		::System::String* MKFEAAIKJNA; // 0x38
		::PGJINBJDAHN* PMCDOCGAOIN; // 0x40
		::System::Nullable_1<::System::Int32> BNJBNIIDHJN; // 0x48
		::System::Single LDFKGILGIOA; // 0x50
		::System::Nullable_1<::System::Int32> AAIKGIBKHBH; // 0x54
		::RPG::MVector3 HNNPEMAPANP; // 0x5C
		::System::Nullable_1<::System::Int32> OEODJDBGBIF; // 0x68
		::System::Single OCAGLPIKAKC; // 0x70
		::System::Byte _padding0[0x4];
		::System::Nullable_1<::RPG::GameCore::FixPoint> MJPNFNMGANM; // 0x78
		::System::Byte _padding1[0x8];
		::System::Nullable_1<::System::Int32> DIIGMKEAKCD; // 0x88
		::RPG::GameCore::ModifierStackingFlag MLLIBMECPGM; // 0x90
		::RPG::GameCore::ModifierAddReason HBGNJPJNLIJ; // 0x94
		::System::Boolean APFPPJAKNBF; // 0x98
		::System::Boolean CPFEDPAGDFF; // 0x99
		::System::Boolean ADMJLNEDMDG; // 0x9A
		::System::Boolean DNNKBICNJOA; // 0x9B
		::System::Boolean LDGDOCAGNEE; // 0x9C
		::System::Boolean BPEKOACCGHK; // 0x9D
		::System::Byte _padding2[0x2];
		::System::Nullable_1<::RPG::GameCore::FixPoint> HJKAEDGCBAC; // 0xA0
		static ::OEOLGJFLJDO** StaticGet_JNKBIGPJDNK()
		{
			return (::OEOLGJFLJDO**)UnitySDK::FromName("", "OEOLGJFLJDO")->GetStaticField(0x60560);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOLGJFLJDO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEOLGJFLJDO_CCTOR_OFFSET))();
		}

		::System::Void PPEGOIODAKI(::OEOLGJFLJDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEOLGJFLJDO*))((::PBYTE)hIl2Cpp + OEOLGJFLJDO_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOLGJFLJDO_CLEAR_OFFSET))(this);
		}

	};
