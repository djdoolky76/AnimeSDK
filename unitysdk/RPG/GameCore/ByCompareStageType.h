#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/StageType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareStageType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESTAGETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D82F0)
#define RPG_GAMECORE_BYCOMPARESTAGETYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D84B0)
#define RPG_GAMECORE_BYCOMPARESTAGETYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D8480)
#define RPG_GAMECORE_BYCOMPARESTAGETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D8300)
#define RPG_GAMECORE_BYCOMPARESTAGETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D82C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStageType_TypeDefinitionIndex = 23061;

	class ByCompareStageType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::StageType CurrentStageType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareStageType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareStageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareStageType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareStageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
