#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetListIntersects; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETLISTINTERSECTS_CTOR_OFFSET UNITYSDK_OFFSET(0x1E74F660)
#define RPG_GAMECORE_BYTARGETLISTINTERSECTS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E74F930)
#define RPG_GAMECORE_BYTARGETLISTINTERSECTS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E74F8F0)
#define RPG_GAMECORE_BYTARGETLISTINTERSECTS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E74F670)
#define RPG_GAMECORE_BYTARGETLISTINTERSECTS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E74F620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetListIntersects_TypeDefinitionIndex = 24259;

	class ByTargetListIntersects : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* FirstTargetType; // 0x20
		::System::Boolean FirstTargetAliveOnly; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* SecondTargetType; // 0x30
		::System::Boolean SecondTargetAliveOnly; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTINTERSECTS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetListIntersects* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetListIntersects*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTINTERSECTS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetListIntersects* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetListIntersects*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTINTERSECTS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListIntersects* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListIntersects*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTINTERSECTS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListIntersects* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListIntersects*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTINTERSECTS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
