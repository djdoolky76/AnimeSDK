#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSeqOperation; }
namespace RPG::GameCore { class TargetSequence; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSEQUENCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6E610)
#define RPG_GAMECORE_TARGETSEQUENCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB6E700)
#define RPG_GAMECORE_TARGETSEQUENCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB6E6D0)
#define RPG_GAMECORE_TARGETSEQUENCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB6E620)
#define RPG_GAMECORE_TARGETSEQUENCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB6E5E0)

namespace RPG::GameCore
{
	class TargetSequence : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::TargetSeqOperation*>* Sequence; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSequence* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSequence* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSEQUENCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
