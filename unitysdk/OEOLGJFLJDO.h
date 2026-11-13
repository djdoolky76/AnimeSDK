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

#define OEOLGJFLJDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1765FE30)
#define OEOLGJFLJDO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1765FD60)
#define OEOLGJFLJDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1765FDF0)
#define OEOLGJFLJDO_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x1765FC10)

inline static constexpr unsigned int OEOLGJFLJDO_TypeDefinitionIndex = 54954;

	class OEOLGJFLJDO
	{
	public:
		::PGJINBJDAHN* PMCDOCGAOIN; // 0x18
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x20
		::MNBNFBAMKKI* AMLKIGFLNHI; // 0x28
		::System::String* MKFEAAIKJNA; // 0x30
		::MBBEBLGELAP* KPLILJJOOGI; // 0x38
		::System::String* BFHDJGEIGBC; // 0x40
		::System::Nullable_1<::RPG::GameCore::FixPoint> MJPNFNMGANM; // 0x48
		::System::Byte _padding0[0x8];
		::System::Single OCAGLPIKAKC; // 0x58
		::RPG::MVector3 HNNPEMAPANP; // 0x5C
		::System::Nullable_1<::System::Int32> BNJBNIIDHJN; // 0x68
		::RPG::GameCore::ModifierStackingFlag MLLIBMECPGM; // 0x70
		::System::Boolean CPFEDPAGDFF; // 0x74
		::System::Boolean ADMJLNEDMDG; // 0x75
		::System::Boolean DNNKBICNJOA; // 0x76
		::System::Boolean BPEKOACCGHK; // 0x77
		::System::Nullable_1<::System::Int32> AAIKGIBKHBH; // 0x78
		::RPG::GameCore::ModifierAddReason HBGNJPJNLIJ; // 0x80
		::System::Nullable_1<::System::Int32> DIIGMKEAKCD; // 0x84
		::System::Nullable_1<::System::Int32> OEODJDBGBIF; // 0x8C
		::System::Byte _padding1[0x4];
		::System::Nullable_1<::RPG::GameCore::FixPoint> HJKAEDGCBAC; // 0x98
		::System::Byte _padding2[0x8];
		::System::Boolean APFPPJAKNBF; // 0xA8
		::System::Boolean LDGDOCAGNEE; // 0xA9
		::System::Byte _padding3[0x2];
		::System::Single LDFKGILGIOA; // 0xAC
		static ::OEOLGJFLJDO** StaticGet_JNKBIGPJDNK()
		{
			return (::OEOLGJFLJDO**)UnitySDK::FromName("", "OEOLGJFLJDO")->GetStaticField(0x6F670);
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
