#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCEBDGLJIEJ.h"
#include "unitysdk/RPG/Client/GridFightRoleSkillRemark_RemarkState.h"
namespace RPG::Client { class GridFightRole; }

#define JCEBDGLJIEJ_DLFOPPOFMLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB8C9200)
#define JCEBDGLJIEJ_DLFOPPOFMLJ_GAAPMFFLOCC_OFFSET UNITYSDK_OFFSET(0xB8C96D0)
#define JCEBDGLJIEJ_DLFOPPOFMLJ_LCKCABJFHEA_OFFSET UNITYSDK_OFFSET(0xB8C9300)

inline static constexpr unsigned int JCEBDGLJIEJ_DLFOPPOFMLJ_TypeDefinitionIndex = 66838;

	class JCEBDGLJIEJ_DLFOPPOFMLJ : public ::JCEBDGLJIEJ
	{
	public:
		::System::UInt32 LNMBALGMBID; // 0x10
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + JCEBDGLJIEJ_DLFOPPOFMLJ_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleSkillRemark_RemarkState LCKCABJFHEA(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightRoleSkillRemark_RemarkState(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + JCEBDGLJIEJ_DLFOPPOFMLJ_LCKCABJFHEA_OFFSET))(this, a1);
		}

		::System::Boolean GAAPMFFLOCC(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + JCEBDGLJIEJ_DLFOPPOFMLJ_GAAPMFFLOCC_OFFSET))(this, a1);
		}

	};
