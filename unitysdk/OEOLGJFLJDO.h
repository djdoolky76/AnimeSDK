#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierAddReason.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/MVector3.h"
class MBBEBLGELAP;
class MNBNFBAMKKI;
class OEOLGJFLJDO;
class PGJINBJDAHN;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Nullable; }
namespace System { class String; }

#define OEOLGJFLJDO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE38D20)
#define OEOLGJFLJDO_CLEAR_OFFSET UNITYSDK_OFFSET(0xBE38C50)
#define OEOLGJFLJDO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE38CE0)
#define OEOLGJFLJDO_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xBE38AF0)

inline static constexpr unsigned int OEOLGJFLJDO_TypeDefinitionIndex = 53790;

	class OEOLGJFLJDO
	{
	public:
		::System::String* BFHDJGEIGBC; // 0x18
		::MBBEBLGELAP* KPLILJJOOGI; // 0x20
		::PGJINBJDAHN* PMCDOCGAOIN; // 0x28
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x30
		::System::String* MKFEAAIKJNA; // 0x38
		::MNBNFBAMKKI* AMLKIGFLNHI; // 0x40
		::System::Single OCAGLPIKAKC; // 0x48
		::System::Nullable* DIIGMKEAKCD; // 0x4C
		::System::Nullable* OEODJDBGBIF; // 0x54
		::System::Boolean LDGDOCAGNEE; // 0x5C
		::System::Boolean BPEKOACCGHK; // 0x5D
		::System::Byte _padding0[0x2];
		::System::Nullable* BNJBNIIDHJN; // 0x60
		::System::Nullable* MJPNFNMGANM; // 0x68
		::System::Byte _padding1[0x8];
		::System::Nullable* AAIKGIBKHBH; // 0x78
		::System::Single LDFKGILGIOA; // 0x80
		::RPG::GameCore::ModifierAddReason HBGNJPJNLIJ; // 0x84
		::RPG::MVector3 HNNPEMAPANP; // 0x88
		::RPG::GameCore::ModifierStackingFlag MLLIBMECPGM; // 0x94
		::System::Boolean ADMJLNEDMDG; // 0x98
		::System::Boolean DNNKBICNJOA; // 0x99
		::System::Boolean APFPPJAKNBF; // 0x9A
		::System::Boolean CPFEDPAGDFF; // 0x9B
		::System::Byte _padding2[0x4];
		::System::Nullable* HJKAEDGCBAC; // 0xA0
		static ::OEOLGJFLJDO** StaticGet_JNKBIGPJDNK()
		{
			return (::OEOLGJFLJDO**)UnitySDK::FromName("", "OEOLGJFLJDO")->GetStaticField(0x64600);
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
