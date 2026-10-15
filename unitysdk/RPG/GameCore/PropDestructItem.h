#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropDestructItem; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_PROPDESTRUCTITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D949970)
#define RPG_GAMECORE_PROPDESTRUCTITEM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D949980)
#define RPG_GAMECORE_PROPDESTRUCTITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D949760)

namespace RPG::GameCore
{
	class PropDestructItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicString* PropKey; // 0x10
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupPropID; // 0x20
		::System::Boolean IsDestructed; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropDestructItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropDestructItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PropDestructItem* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PropDestructItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTITEM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
