#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCEBDGLJIEJ.h"
#include "unitysdk/RPG/Client/GridFightRoleSkillRemark_RemarkState.h"
namespace RPG::Client { class GridFightRole; }

#define JCEBDGLJIEJ_CBJGHIDFFFL_CTOR_OFFSET UNITYSDK_OFFSET(0x16945960)
#define JCEBDGLJIEJ_CBJGHIDFFFL_LCKCABJFHEA_OFFSET UNITYSDK_OFFSET(0x16945980)

inline static constexpr unsigned int JCEBDGLJIEJ_CBJGHIDFFFL_TypeDefinitionIndex = 66836;

	class JCEBDGLJIEJ_CBJGHIDFFFL : public ::JCEBDGLJIEJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEBDGLJIEJ_CBJGHIDFFFL_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleSkillRemark_RemarkState LCKCABJFHEA(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightRoleSkillRemark_RemarkState(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + JCEBDGLJIEJ_CBJGHIDFFFL_LCKCABJFHEA_OFFSET))(this, a1);
		}

	};
