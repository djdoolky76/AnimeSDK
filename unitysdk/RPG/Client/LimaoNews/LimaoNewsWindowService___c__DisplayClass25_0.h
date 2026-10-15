#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBJANKHLNGO;
namespace RPG::Client::LimaoNews { class LimaoNewsPlanData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostSubmitViewModel; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE___C__DISPLAYCLASS25_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD3F14D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE___C__DISPLAYCLASS25_0__SHOWPLANSUBMITWINDOW_B__0_OFFSET UNITYSDK_OFFSET(0xD3F2630)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWindowService___c__DisplayClass25_0_TypeDefinitionIndex = 80349;

	class LimaoNewsWindowService___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsPlanData* planData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE___C__DISPLAYCLASS25_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel* _ShowPlanSubmitWindow_b__0(::OBJANKHLNGO* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWINDOWSERVICE___C__DISPLAYCLASS25_0__SHOWPLANSUBMITWINDOW_B__0_OFFSET))(this, a1);
		}

	};
}
