#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CollisionDataFlag.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"
class FPNHGPEICOG;
class GFGGHEHEJKC;
class KFAAKBJKKKB;
class LFGIBPHFIMF;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FPNHGPEICOG_BFEONFDMIAJ_OFFSET UNITYSDK_OFFSET(0x168550A0)
#define FPNHGPEICOG_CLEAR_OFFSET UNITYSDK_OFFSET(0x16854FD0)
#define FPNHGPEICOG_CTOR_OFFSET UNITYSDK_OFFSET(0x168550E0)
#define FPNHGPEICOG_MBLJIBFDIKE_OFFSET UNITYSDK_OFFSET(0x168550B0)
#define FPNHGPEICOG_MFMOHGHOFOJ_OFFSET UNITYSDK_OFFSET(0x16855080)
#define FPNHGPEICOG_OMAAOOHOOOA_OFFSET UNITYSDK_OFFSET(0x16855090)

inline static constexpr unsigned int FPNHGPEICOG_TypeDefinitionIndex = 54835;

	class FPNHGPEICOG : public ::System::Object
	{
	public:
		::System::Object* MLJJIEIPIEM; // 0x10
		::LFGIBPHFIMF* GJBOKLDCKEG; // 0x18
		::System::Collections::Generic::List_1<::GFGGHEHEJKC*>* NKAFONEMJEN; // 0x20
		::KFAAKBJKKKB* JAONPDHCMBO; // 0x28
		::RPG::GameCore::FixVec2 PECPBEOHOJC; // 0x30
		::System::UInt32 PHFMCACHFIJ; // 0x40
		::System::UInt32 OOMBNFMJLEO; // 0x44
		::RPG::GameCore::FixVec2 IHOOPLCHJCI; // 0x48
		::RPG::GameCore::CollisionDataFlag FNPGDNFLMPC; // 0x58
		::System::UInt32 EOKHPIOALOA; // 0x5C
		::RPG::GameCore::FixVec2 IFJHHDGEKGO; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNHGPEICOG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNHGPEICOG_CLEAR_OFFSET))(this);
		}

		::System::Boolean MFMOHGHOFOJ(::RPG::GameCore::CollisionDataFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CollisionDataFlag))((::PBYTE)hIl2Cpp + FPNHGPEICOG_MFMOHGHOFOJ_OFFSET))(this, a1);
		}

		::System::Void OMAAOOHOOOA(::RPG::GameCore::CollisionDataFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CollisionDataFlag))((::PBYTE)hIl2Cpp + FPNHGPEICOG_OMAAOOHOOOA_OFFSET))(this, a1);
		}

		::System::Void BFEONFDMIAJ(::RPG::GameCore::CollisionDataFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CollisionDataFlag))((::PBYTE)hIl2Cpp + FPNHGPEICOG_BFEONFDMIAJ_OFFSET))(this, a1);
		}

		::System::Boolean MBLJIBFDIKE(::FPNHGPEICOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPNHGPEICOG*))((::PBYTE)hIl2Cpp + FPNHGPEICOG_MBLJIBFDIKE_OFFSET))(this, a1);
		}

	};
