#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressResultViewModel; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE___C__DISPLAYCLASS34_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBCC7C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE___C__DISPLAYCLASS34_0__SHOWWORKPROGRESSRESULTPAGEBYVIEWMODEL_B__0_OFFSET UNITYSDK_OFFSET(0x1CBCD4D0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWindowService___c__DisplayClass34_0_TypeDefinitionIndex = 83126;

	class LimaoNewsWindowService___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsWorkProgressResultViewModel* viewModel; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsWindowService* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE___C__DISPLAYCLASS34_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowWorkProgressResultPageByViewModel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE___C__DISPLAYCLASS34_0__SHOWWORKPROGRESSRESULTPAGEBYVIEWMODEL_B__0_OFFSET))(this);
		}

	};
}
