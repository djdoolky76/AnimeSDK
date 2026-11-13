#pragma once
#include "unitysdk/unitysdk.h"
class ABBKNGEHNNA;
namespace RPG::GameCore { class TaskContext; }

#define LGJOGOKJGMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCAB150)
#define LGJOGOKJGMJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BCAB180)

inline static constexpr unsigned int LGJOGOKJGMJ_TypeDefinitionIndex = 54005;

	class LGJOGOKJGMJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ABBKNGEHNNA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ABBKNGEHNNA*))((::PBYTE)hIl2Cpp + LGJOGOKJGMJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGJOGOKJGMJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
