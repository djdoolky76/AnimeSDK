#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityComparerBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEntityComparerBase; }
namespace RPG::GameCore { class ChimeraDuelEntityCompositeComparer; }

#define RPG_GAMECORE_CHIMERADUELENTITYCOMPOSITECOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59DF00)
#define RPG_GAMECORE_CHIMERADUELENTITYCOMPOSITECOMPARER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59DF10)
#define RPG_GAMECORE_CHIMERADUELENTITYCOMPOSITECOMPARER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59FFC0)

namespace RPG::GameCore
{
	class ChimeraDuelEntityCompositeComparer : public ::RPG::GameCore::ChimeraDuelEntityComparerBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelEntityComparerBase*>* Comparers; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYCOMPOSITECOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityCompositeComparer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityCompositeComparer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYCOMPOSITECOMPARER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityCompositeComparer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityCompositeComparer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYCOMPOSITECOMPARER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
