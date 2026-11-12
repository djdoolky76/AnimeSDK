#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StopMunicipalChat; }
namespace RPG::GameCore { class TaskContext; }

#define PFCEKHKDBJL_CTOR_OFFSET UNITYSDK_OFFSET(0xCAE9AB0)
#define PFCEKHKDBJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCAE9AE0)

inline static constexpr unsigned int PFCEKHKDBJL_TypeDefinitionIndex = 60001;

	class PFCEKHKDBJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopMunicipalChat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopMunicipalChat*))((::PBYTE)hIl2Cpp + PFCEKHKDBJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCEKHKDBJL_ONTASKBEGIN_OFFSET))(this);
		}

	};
