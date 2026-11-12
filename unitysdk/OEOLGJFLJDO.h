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

#define OEOLGJFLJDO_CCTOR_OFFSET UNITYSDK_OFFSET(0xC6F0B50)
#define OEOLGJFLJDO_CLEAR_OFFSET UNITYSDK_OFFSET(0xC6F0A80)
#define OEOLGJFLJDO_CTOR_OFFSET UNITYSDK_OFFSET(0xC6F0B10)
#define OEOLGJFLJDO_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xC6F0910)

inline static constexpr unsigned int OEOLGJFLJDO_TypeDefinitionIndex = 54954;

	class OEOLGJFLJDO
	{
	public:
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x18
		::System::String* BFHDJGEIGBC; // 0x20
		::MBBEBLGELAP* KPLILJJOOGI; // 0x28
		::PGJINBJDAHN* PMCDOCGAOIN; // 0x30
		::MNBNFBAMKKI* AMLKIGFLNHI; // 0x38
		::System::String* MKFEAAIKJNA; // 0x40
		::System::Nullable_1<::RPG::GameCore::FixPoint> MJPNFNMGANM; // 0x48
		::System::Byte _padding0[0x8];
		::System::Nullable_1<::RPG::GameCore::FixPoint> HJKAEDGCBAC; // 0x58
		::System::Byte _padding1[0x8];
		::System::Nullable_1<::System::Int32> BNJBNIIDHJN; // 0x68
		::RPG::MVector3 HNNPEMAPANP; // 0x70
		::System::Single OCAGLPIKAKC; // 0x7C
		::System::Nullable_1<::System::Int32> AAIKGIBKHBH; // 0x80
		::System::Nullable_1<::System::Int32> DIIGMKEAKCD; // 0x88
		::System::Nullable_1<::System::Int32> OEODJDBGBIF; // 0x90
		::RPG::GameCore::ModifierStackingFlag MLLIBMECPGM; // 0x98
		::RPG::GameCore::ModifierAddReason HBGNJPJNLIJ; // 0x9C
		::System::Single LDFKGILGIOA; // 0xA0
		::System::Boolean LDGDOCAGNEE; // 0xA4
		::System::Boolean APFPPJAKNBF; // 0xA5
		::System::Boolean DNNKBICNJOA; // 0xA6
		::System::Boolean CPFEDPAGDFF; // 0xA7
		::System::Boolean BPEKOACCGHK; // 0xA8
		::System::Boolean ADMJLNEDMDG; // 0xA9
		static ::OEOLGJFLJDO** StaticGet_JNKBIGPJDNK()
		{
			return (::OEOLGJFLJDO**)UnitySDK::FromName("", "OEOLGJFLJDO")->GetStaticField(0x688D0);
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
