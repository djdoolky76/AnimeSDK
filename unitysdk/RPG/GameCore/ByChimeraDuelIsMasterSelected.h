#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByChimeraDuelIsMasterSelected; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D498560)
#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D498710)
#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4986E0)
#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D498570)
#define RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D498530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByChimeraDuelIsMasterSelected_TypeDefinitionIndex = 24305;

	class ByChimeraDuelIsMasterSelected : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MasterID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByChimeraDuelIsMasterSelected* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByChimeraDuelIsMasterSelected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHIMERADUELISMASTERSELECTED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
