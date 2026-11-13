#pragma once
#include "unitysdk/unitysdk.h"
class CCLMIFCEBID;
namespace RPG::GameCore { class TaskContext; }

#define GLBFHKNNNLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E53B0)
#define GLBFHKNNNLH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8E53E0)

inline static constexpr unsigned int GLBFHKNNNLH_TypeDefinitionIndex = 53814;

	class GLBFHKNNNLH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CCLMIFCEBID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CCLMIFCEBID*))((::PBYTE)hIl2Cpp + GLBFHKNNNLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBFHKNNNLH_ONTASKBEGIN_OFFSET))(this);
		}

	};
