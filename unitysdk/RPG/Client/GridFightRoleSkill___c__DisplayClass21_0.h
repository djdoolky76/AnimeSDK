#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRoleSkillRemark; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLESKILL___C__DISPLAYCLASS21_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EFE50)
#define RPG_CLIENT_GRIDFIGHTROLESKILL___C__DISPLAYCLASS21_0__GET_SKILLREMARK_B__1_OFFSET UNITYSDK_OFFSET(0x1D4F0230)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSkill___c__DisplayClass21_0_TypeDefinitionIndex = 66831;

	class GridFightRoleSkill___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* skillIDs; // 0x10
		::RPG::GameCore::GridFightSkillType needType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL___C__DISPLAYCLASS21_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_SkillRemark_b__1(::RPG::Client::GridFightRoleSkillRemark* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRoleSkillRemark*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILL___C__DISPLAYCLASS21_0__GET_SKILLREMARK_B__1_OFFSET))(this, a1);
		}

	};
}
