#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/RPG/GameCore/GridFightSpecialModifyCondition.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSpecialModifyConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSPECIALMODIFYCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E955790)
#define RPG_GAMECORE_GRIDFIGHTSPECIALMODIFYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9553A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSpecialModifyConfigRow_TypeDefinitionIndex = 13652;

	class GridFightSpecialModifyConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ModifyValues; // 0x10
		::Il2CppArray<::System::UInt32>* DependRoleIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>* ModifyOps; // 0x20
		::Il2CppArray<::System::UInt32>* ModifySkillIndexs; // 0x28
		::System::String* MultipleValueKey; // 0x30
		::Il2CppArray<::System::UInt32>* ParamList; // 0x38
		::RPG::GameCore::GridFightSpecialModifyCondition ConditionType; // 0x40
		::System::UInt32 ModifySkillID; // 0x44
		::RPG::GameCore::GridFightSkillType ModifySkillType; // 0x48
		::System::UInt32 DependRoleID; // 0x4C
		::System::UInt32 ModifyRoleID; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPECIALMODIFYCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSpecialModifyConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSpecialModifyConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPECIALMODIFYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
