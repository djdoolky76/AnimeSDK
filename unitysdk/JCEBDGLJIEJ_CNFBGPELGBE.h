#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCEBDGLJIEJ.h"
#include "unitysdk/RPG/Client/GridFightRoleSkillRemark_RemarkState.h"
namespace RPG::Client { class GridFightRole; }

#define JCEBDGLJIEJ_CNFBGPELGBE_CTOR_OFFSET UNITYSDK_OFFSET(0xB8C92F0)
#define JCEBDGLJIEJ_CNFBGPELGBE_LCKCABJFHEA_OFFSET UNITYSDK_OFFSET(0xB8C92A0)

inline static constexpr unsigned int JCEBDGLJIEJ_CNFBGPELGBE_TypeDefinitionIndex = 66835;

	class JCEBDGLJIEJ_CNFBGPELGBE : public ::JCEBDGLJIEJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEBDGLJIEJ_CNFBGPELGBE_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleSkillRemark_RemarkState LCKCABJFHEA(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightRoleSkillRemark_RemarkState(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + JCEBDGLJIEJ_CNFBGPELGBE_LCKCABJFHEA_OFFSET))(this, a1);
		}

	};
