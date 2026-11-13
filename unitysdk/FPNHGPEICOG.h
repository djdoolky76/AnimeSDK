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

#define FPNHGPEICOG_BFEONFDMIAJ_OFFSET UNITYSDK_OFFSET(0x1B851970)
#define FPNHGPEICOG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B8518A0)
#define FPNHGPEICOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8519B0)
#define FPNHGPEICOG_MBLJIBFDIKE_OFFSET UNITYSDK_OFFSET(0x1B851980)
#define FPNHGPEICOG_MFMOHGHOFOJ_OFFSET UNITYSDK_OFFSET(0x1B851950)
#define FPNHGPEICOG_OMAAOOHOOOA_OFFSET UNITYSDK_OFFSET(0x1B851960)

inline static constexpr unsigned int FPNHGPEICOG_TypeDefinitionIndex = 54835;

	class FPNHGPEICOG : public ::System::Object
	{
	public:
		::LFGIBPHFIMF* GJBOKLDCKEG; // 0x10
		::System::Object* MLJJIEIPIEM; // 0x18
		::System::Collections::Generic::List_1<::GFGGHEHEJKC*>* NKAFONEMJEN; // 0x20
		::KFAAKBJKKKB* JAONPDHCMBO; // 0x28
		::System::UInt32 EOKHPIOALOA; // 0x30
		::RPG::GameCore::CollisionDataFlag FNPGDNFLMPC; // 0x34
		::System::UInt32 OOMBNFMJLEO; // 0x38
		::System::UInt32 PHFMCACHFIJ; // 0x3C
		::RPG::GameCore::FixVec2 IFJHHDGEKGO; // 0x40
		::RPG::GameCore::FixVec2 IHOOPLCHJCI; // 0x50
		::RPG::GameCore::FixVec2 PECPBEOHOJC; // 0x60
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
