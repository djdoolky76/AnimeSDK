#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareDamageCustomName; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A6AF0)
#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A6C90)
#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A6C60)
#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A6B00)
#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A6AC0)

namespace RPG::GameCore
{
	class ByCompareDamageCustomName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareDamageCustomName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareDamageCustomName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareDamageCustomName* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareDamageCustomName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageCustomName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageCustomName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageCustomName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageCustomName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
