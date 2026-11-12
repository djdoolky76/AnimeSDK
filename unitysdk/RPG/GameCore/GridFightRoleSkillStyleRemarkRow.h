#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillRemarkConditionType.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillRemarkParamSourceType.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleSkillStyleRemarkRow; }

#define RPG_GAMECORE_GRIDFIGHTROLESKILLSTYLEREMARKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E950490)
#define RPG_GAMECORE_GRIDFIGHTROLESKILLSTYLEREMARKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E950020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleSkillStyleRemarkRow_TypeDefinitionIndex = 13670;

	class GridFightRoleSkillStyleRemarkRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ConditionParamList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* RemarkParamList; // 0x18
		::RPG::Client::TextID RoleSkillRemarkTitle; // 0x20
		::RPG::Client::TextID RoleSkillRemark; // 0x30
		::RPG::GameCore::GridFightRoleSkillRemarkConditionType ConditionType; // 0x40
		::System::UInt32 SkillID; // 0x44
		::System::UInt32 ID; // 0x48
		::RPG::GameCore::GridFightSkillType SkillType; // 0x4C
		::RPG::GameCore::GridFightRoleSkillRemarkParamSourceType ParamSource; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID RoleSkillRemarkSimple; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESKILLSTYLEREMARKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleSkillStyleRemarkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleSkillStyleRemarkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESKILLSTYLEREMARKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
