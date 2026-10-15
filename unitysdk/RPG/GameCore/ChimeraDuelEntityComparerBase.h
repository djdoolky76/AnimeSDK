#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelComparerBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEntityComparerBase; }

#define RPG_GAMECORE_CHIMERADUELENTITYCOMPARERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D572090)
#define RPG_GAMECORE_CHIMERADUELENTITYCOMPARERBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5724B0)
#define RPG_GAMECORE_CHIMERADUELENTITYCOMPARERBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D572320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityComparerBase_TypeDefinitionIndex = 15930;

	class ChimeraDuelEntityComparerBase : public ::RPG::GameCore::ChimeraDuelComparerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYCOMPARERBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityComparerBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityComparerBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYCOMPARERBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityComparerBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityComparerBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYCOMPARERBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
