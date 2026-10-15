#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelComparerBase; }

#define RPG_GAMECORE_CHIMERADUELCOMPARERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5706E0)
#define RPG_GAMECORE_CHIMERADUELCOMPARERBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D570620)
#define RPG_GAMECORE_CHIMERADUELCOMPARERBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5701C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelComparerBase_TypeDefinitionIndex = 15929;

	class ChimeraDuelComparerBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsAscend; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCOMPARERBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelComparerBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelComparerBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCOMPARERBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelComparerBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelComparerBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCOMPARERBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
