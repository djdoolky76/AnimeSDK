#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelDimensionUpAction; }

#define RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BFB20)
#define RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BFB30)
#define RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BFAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelDimensionUpAction_TypeDefinitionIndex = 16772;

	class FourRotateVoxelDimensionUpAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Immediate; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Duration; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelDimensionUpAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelDimensionUpAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelDimensionUpAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelDimensionUpAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELDIMENSIONUPACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
