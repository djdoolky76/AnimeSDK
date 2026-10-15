#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VP_Sigmoid; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_SIGMOID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8A3A0)
#define RPG_GAMECORE_VP_SIGMOID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC8A430)
#define RPG_GAMECORE_VP_SIGMOID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC8A410)
#define RPG_GAMECORE_VP_SIGMOID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC8A3B0)
#define RPG_GAMECORE_VP_SIGMOID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC8A330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Sigmoid_TypeDefinitionIndex = 24060;

	class VP_Sigmoid : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SIGMOID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Sigmoid* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Sigmoid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SIGMOID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Sigmoid* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Sigmoid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SIGMOID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Sigmoid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Sigmoid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SIGMOID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Sigmoid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Sigmoid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SIGMOID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
