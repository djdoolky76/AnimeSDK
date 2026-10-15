#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareLineupAvatarHpRatio; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BAAB0)
#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4BACF0)
#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4BACB0)
#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4BAAC0)
#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4BAA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareLineupAvatarHpRatio_TypeDefinitionIndex = 20798;

	class ByCompareLineupAvatarHpRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HpRatio; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
