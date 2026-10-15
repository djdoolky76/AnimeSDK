#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetVisible; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D512AF0)
#define RPG_GAMECORE_BYTARGETVISIBLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D512CB0)
#define RPG_GAMECORE_BYTARGETVISIBLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D512C80)
#define RPG_GAMECORE_BYTARGETVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D512B00)
#define RPG_GAMECORE_BYTARGETVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D512AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetVisible_TypeDefinitionIndex = 20606;

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
