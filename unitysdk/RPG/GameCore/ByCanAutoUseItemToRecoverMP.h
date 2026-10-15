#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCanAutoUseItemToRecoverMP; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4887A0)
#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D488920)
#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4888F0)
#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4887B0)
#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D488770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCanAutoUseItemToRecoverMP_TypeDefinitionIndex = 20195;

	class ByCanAutoUseItemToRecoverMP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
