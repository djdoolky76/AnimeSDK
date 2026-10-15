#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETEVALUATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB594A0)
#define RPG_GAMECORE_TARGETEVALUATOR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5A1D0)
#define RPG_GAMECORE_TARGETEVALUATOR_ICOKOCPAMND_OFFSET UNITYSDK_OFFSET(0x1DB5A170)
#define RPG_GAMECORE_TARGETEVALUATOR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5A1E0)
#define RPG_GAMECORE_TARGETEVALUATOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5A110)
#define RPG_GAMECORE_TARGETEVALUATOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB488F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetEvaluator_TypeDefinitionIndex = 23744;

	class TargetEvaluator : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetEvaluator* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void ICOKOCPAMND(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetEvaluator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR_ICOKOCPAMND_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetEvaluator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetEvaluator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETEVALUATOR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
