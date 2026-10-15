#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LimaoNews { class LimaoNewsPostViewModel; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD3A9A20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL___C__DISPLAYCLASS8_0__TRYOPENPOSTDETAIL_B__0_OFFSET UNITYSDK_OFFSET(0xD3AA4E0)

namespace RPG::Client::LimaoNews
{
	class LimaoNewsForumViewModel___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 postID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _TryOpenPostDetail_b__0(::RPG::Client::LimaoNews::LimaoNewsPostViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsPostViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSFORUMVIEWMODEL___C__DISPLAYCLASS8_0__TRYOPENPOSTDETAIL_B__0_OFFSET))(this, a1);
		}

	};
}
