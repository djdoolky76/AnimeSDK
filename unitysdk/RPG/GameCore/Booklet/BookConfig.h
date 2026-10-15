#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/BookType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class BookConfig; }
namespace RPG::GameCore::Booklet { class ChapterConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BOOKLET_BOOKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D472980)
#define RPG_GAMECORE_BOOKLET_BOOKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4727C0)

namespace RPG::GameCore::Booklet
{
	class BookConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::Booklet::BookType Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* PrefabPathMap; // 0x18
		::Il2CppArray<::RPG::GameCore::Booklet::ChapterConfig*>* ChapterConfigList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_BOOKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::BookConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::BookConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_BOOKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
