#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetQuery; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETQUERY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3FB90)
#define RPG_GAMECORE_TARGETQUERY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB3FE30)
#define RPG_GAMECORE_TARGETQUERY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB3FDC0)
#define RPG_GAMECORE_TARGETQUERY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3FBE0)
#define RPG_GAMECORE_TARGETQUERY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3FB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetQuery_TypeDefinitionIndex = 23970;

	class TargetQuery : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* Source; // 0x10
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x28
		::System::Byte _padding2[0x4];
		::RPG::GameCore::PredicateConfig* Predicate; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETQUERY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetQuery* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetQuery*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETQUERY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetQuery* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetQuery*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETQUERY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetQuery* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetQuery*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETQUERY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetQuery* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetQuery*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETQUERY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
