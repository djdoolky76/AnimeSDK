#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPlayerGravityOppositeToCurrentSurface; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D503B70)
#define RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D503CF0)
#define RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D503CC0)
#define RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D503B80)
#define RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D503B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPlayerGravityOppositeToCurrentSurface_TypeDefinitionIndex = 21430;

	class ByPlayerGravityOppositeToCurrentSurface : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPLAYERGRAVITYOPPOSITETOCURRENTSURFACE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
