#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightNodeTemplateConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTNODETEMPLATECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D737130)
#define RPG_GAMECORE_GRIDFIGHTNODETEMPLATECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D736EB0)

namespace RPG::GameCore
{
	class GridFightNodeTemplateConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 NodeTemplateID; // 0x18
		::RPG::GameCore::GridFightNodeType NodeType; // 0x1C
		::System::UInt32 StageID; // 0x20
		::System::UInt32 BasicGoldRewardNum; // 0x24
		::System::UInt32 PenaltyBonusRuleID; // 0x28
		::System::UInt32 IsAugment; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTNODETEMPLATECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightNodeTemplateConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightNodeTemplateConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTNODETEMPLATECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
