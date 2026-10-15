#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelLevelVarCondition; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C2A50)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C28B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelLevelVarCondition_TypeDefinitionIndex = 16778;

	class FourRotateVoxelLevelVarCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VarName; // 0x10
		::RPG::GameCore::CompareType CompareOp; // 0x18
		::System::Int16 Value; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelLevelVarCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelLevelVarCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELVARCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
