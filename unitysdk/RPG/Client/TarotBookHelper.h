#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::Client { class IBookletView; }
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define RPG_CLIENT_TAROTBOOKHELPER_DESTROYVIEW_OFFSET UNITYSDK_OFFSET(0xE1AFA60)
#define RPG_CLIENT_TAROTBOOKHELPER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xE1AF720)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookHelper_TypeDefinitionIndex = 72460;

	class TarotBookHelper : public ::System::Object
	{
	public:
		static ::System::Void InitView(::RPG::Client::UIController* a1, ::RPG::Client::IBookletView* a2, ::RPG::Client::Booklet* a3, ::System::Action* a4, ::System::Action* a5, ::System::Action* a6)
		{
			return ((::System::Void(*)(::RPG::Client::UIController*, ::RPG::Client::IBookletView*, ::RPG::Client::Booklet*, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKHELPER_INITVIEW_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DestroyView(::RPG::Client::IBookletView* a1)
		{
			return ((::System::Void(*)(::RPG::Client::IBookletView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKHELPER_DESTROYVIEW_OFFSET))(a1);
		}

	};
}
