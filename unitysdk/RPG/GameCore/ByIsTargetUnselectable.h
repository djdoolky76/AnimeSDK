#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsTargetUnselectable; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTARGETUNSELECTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D525180)
#define RPG_GAMECORE_BYISTARGETUNSELECTABLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D525380)
#define RPG_GAMECORE_BYISTARGETUNSELECTABLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D525350)
#define RPG_GAMECORE_BYISTARGETUNSELECTABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D525190)
#define RPG_GAMECORE_BYISTARGETUNSELECTABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D525150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTargetUnselectable_TypeDefinitionIndex = 23526;

	class ByIsTargetUnselectable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETUNSELECTABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTargetUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTargetUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETUNSELECTABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTargetUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTargetUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETUNSELECTABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETUNSELECTABLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETUNSELECTABLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
