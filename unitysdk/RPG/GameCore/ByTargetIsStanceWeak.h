#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetIsStanceWeak; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETISSTANCEWEAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D53BA00)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D53BC00)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D53BBD0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D53BA10)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D53B9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetIsStanceWeak_TypeDefinitionIndex = 23513;

	class ByTargetIsStanceWeak : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackerType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetIsStanceWeak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetIsStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetIsStanceWeak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetIsStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsStanceWeak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
