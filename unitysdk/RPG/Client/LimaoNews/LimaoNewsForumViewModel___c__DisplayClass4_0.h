#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LimaoNews { class LimaoNewsPostViewModel; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD3A9820)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL___C__DISPLAYCLASS4_0__CHANGEPOSTSTATE_B__0_OFFSET UNITYSDK_OFFSET(0xD3AA420)

namespace RPG::Client::LimaoNews
{
	class LimaoNewsForumViewModel___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 postID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ChangePostState_b__0(::RPG::Client::LimaoNews::LimaoNewsPostViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL___C__DISPLAYCLASS4_0__CHANGEPOSTSTATE_B__0_OFFSET))(this, a1);
		}

	};
}
