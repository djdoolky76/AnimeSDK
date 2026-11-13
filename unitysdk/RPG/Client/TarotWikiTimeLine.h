#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TarotWikiSubTitle; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTWIKITIMELINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB81E0)
#define RPG_CLIENT_TAROTWIKITIMELINE_ISNEW_OFFSET UNITYSDK_OFFSET(0x1ACB9770)
#define RPG_CLIENT_TAROTWIKITIMELINE_MARKALLSEEN_OFFSET UNITYSDK_OFFSET(0x1ACB85D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotWikiTimeLine_TypeDefinitionIndex = 70023;

	class TarotWikiTimeLine : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TarotWikiSubTitle*>* SubTitleList; // 0x10
		::System::Single Progress; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::Client::TextID TitleTextID; // 0x20
		::System::UInt32 SpecialType; // 0x30
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKITIMELINE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKITIMELINE_ISNEW_OFFSET))(this);
		}

		::System::Void MarkAllSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKITIMELINE_MARKALLSEEN_OFFSET))(this);
		}

	};
}
