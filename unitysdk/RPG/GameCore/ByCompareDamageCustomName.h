#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareDamageCustomName; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D479080)
#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D479220)
#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4791F0)
#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D479090)
#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D479050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareDamageCustomName_TypeDefinitionIndex = 23571;

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
