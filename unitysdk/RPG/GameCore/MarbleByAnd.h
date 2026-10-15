#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByAnd; }
namespace RPG::GameCore { class MarblePredicateConfig; }

#define RPG_GAMECORE_MARBLEBYAND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D837DF0)
#define RPG_GAMECORE_MARBLEBYAND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D837E00)
#define RPG_GAMECORE_MARBLEBYAND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D837DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByAnd_TypeDefinitionIndex = 16873;

	class MarbleByAnd : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarblePredicateConfig*>* PredicateList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYAND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByAnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByAnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYAND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByAnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByAnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYAND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
