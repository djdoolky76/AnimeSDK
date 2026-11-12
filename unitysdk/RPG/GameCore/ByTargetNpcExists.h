#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetNpcExists; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETNPCEXISTS_CTOR_OFFSET UNITYSDK_OFFSET(0x1E751050)
#define RPG_GAMECORE_BYTARGETNPCEXISTS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E751240)
#define RPG_GAMECORE_BYTARGETNPCEXISTS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E751210)
#define RPG_GAMECORE_BYTARGETNPCEXISTS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E751060)
#define RPG_GAMECORE_BYTARGETNPCEXISTS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E751020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetNpcExists_TypeDefinitionIndex = 22066;

	class ByTargetNpcExists : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 GroupNpcID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetNpcExists* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetNpcExists*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetNpcExists* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetNpcExists*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetNpcExists* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetNpcExists*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetNpcExists* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetNpcExists*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETNPCEXISTS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
