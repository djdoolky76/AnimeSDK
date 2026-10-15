#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetConcat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETCONCAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB59D10)
#define RPG_GAMECORE_TARGETCONCAT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB59E00)
#define RPG_GAMECORE_TARGETCONCAT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB59DD0)
#define RPG_GAMECORE_TARGETCONCAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB59D20)
#define RPG_GAMECORE_TARGETCONCAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB59CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetConcat_TypeDefinitionIndex = 23895;

	class TargetConcat : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::TargetEvaluator*>* Targets; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetConcat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetConcat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetConcat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetConcat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetConcat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetConcat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetConcat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetConcat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONCAT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
