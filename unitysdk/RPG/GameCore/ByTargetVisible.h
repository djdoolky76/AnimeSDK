#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetVisible; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D540560)
#define RPG_GAMECORE_BYTARGETVISIBLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D540720)
#define RPG_GAMECORE_BYTARGETVISIBLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5406F0)
#define RPG_GAMECORE_BYTARGETVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D540570)
#define RPG_GAMECORE_BYTARGETVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D540530)

namespace RPG::GameCore
{
	class ByTargetVisible : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetVisible* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETVISIBLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetVisible* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETVISIBLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
