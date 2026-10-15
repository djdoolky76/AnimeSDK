#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEntityComparerBase; }
namespace RPG::GameCore { class ChimeraDuelOrderedEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELORDEREDENTITIESSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A6620)
#define RPG_GAMECORE_CHIMERADUELORDEREDENTITIESSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A6630)
#define RPG_GAMECORE_CHIMERADUELORDEREDENTITIESSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A65D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelOrderedEntitiesSelectorConfig_TypeDefinitionIndex = 15928;

	class ChimeraDuelOrderedEntitiesSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Source; // 0x10
		::System::Int32 MaxCount; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ChimeraDuelEntityComparerBase* Comparer; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELORDEREDENTITIESSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelOrderedEntitiesSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelOrderedEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELORDEREDENTITIESSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelOrderedEntitiesSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelOrderedEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELORDEREDENTITIESSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
