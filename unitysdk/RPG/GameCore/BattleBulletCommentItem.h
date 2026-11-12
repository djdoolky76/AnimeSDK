#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleBulletCommentItem; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEBULLETCOMMENTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E662A10)
#define RPG_GAMECORE_BATTLEBULLETCOMMENTITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E662880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleBulletCommentItem_TypeDefinitionIndex = 23691;

	class BattleBulletCommentItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Text; // 0x10
		::System::String* Icon; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBULLETCOMMENTITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleBulletCommentItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleBulletCommentItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEBULLETCOMMENTITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
