#pragma once
#include "unitysdk/unitysdk.h"
class IJCKIFGGMDN;
namespace RPG::GameCore { class TaskContext; }

#define GOMIPMJDKMM_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2E610)
#define GOMIPMJDKMM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B2E640)

inline static constexpr unsigned int GOMIPMJDKMM_TypeDefinitionIndex = 52839;

	class GOMIPMJDKMM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IJCKIFGGMDN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IJCKIFGGMDN*))((::PBYTE)hIl2Cpp + GOMIPMJDKMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMIPMJDKMM_ONTASKBEGIN_OFFSET))(this);
		}

	};
