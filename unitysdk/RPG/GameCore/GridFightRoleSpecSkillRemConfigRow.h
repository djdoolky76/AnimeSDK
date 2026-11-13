#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillRemarkActivateType.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillTagType.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleSpecSkillRemConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTROLESPECSKILLREMCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5E500)
#define RPG_GAMECORE_GRIDFIGHTROLESPECSKILLREMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA5E210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleSpecSkillRemConfigRow_TypeDefinitionIndex = 13664;

	class GridFightRoleSpecSkillRemConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Params; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::RPG::GameCore::GridFightRoleSkillRemarkActivateType ActivateType; // 0x28
		::System::UInt32 SkillID; // 0x2C
		::RPG::GameCore::GridFightSkillType SkillType; // 0x30
		::System::UInt32 RoleID; // 0x34
		::RPG::GameCore::GridFightRoleSkillTagType SkillTag; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESPECSKILLREMCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleSpecSkillRemConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleSpecSkillRemConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESPECSKILLREMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
