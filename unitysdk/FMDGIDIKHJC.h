#pragma once
#include "unitysdk/unitysdk.h"
class AJMOHBIPLPG;
namespace RPG::GameCore { class TaskContext; }

#define FMDGIDIKHJC_CTOR_OFFSET UNITYSDK_OFFSET(0x17EF46D0)
#define FMDGIDIKHJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EF4700)

inline static constexpr unsigned int FMDGIDIKHJC_TypeDefinitionIndex = 53975;

	class FMDGIDIKHJC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AJMOHBIPLPG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AJMOHBIPLPG*))((::PBYTE)hIl2Cpp + FMDGIDIKHJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDGIDIKHJC_ONTASKBEGIN_OFFSET))(this);
		}

	};
