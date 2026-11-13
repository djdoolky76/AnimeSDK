#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPamAnchorContinous; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMANCHORCONTINOUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1E222FC0)
#define RPG_GAMECORE_BYPAMANCHORCONTINOUS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E223140)
#define RPG_GAMECORE_BYPAMANCHORCONTINOUS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E223110)
#define RPG_GAMECORE_BYPAMANCHORCONTINOUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E222FD0)
#define RPG_GAMECORE_BYPAMANCHORCONTINOUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E222F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamAnchorContinous_TypeDefinitionIndex = 20350;

	class ByPamAnchorContinous : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMANCHORCONTINOUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPamAnchorContinous* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPamAnchorContinous*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMANCHORCONTINOUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPamAnchorContinous* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPamAnchorContinous*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMANCHORCONTINOUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamAnchorContinous* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamAnchorContinous*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMANCHORCONTINOUS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamAnchorContinous* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamAnchorContinous*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMANCHORCONTINOUS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
