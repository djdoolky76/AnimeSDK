#pragma once
#include "unitysdk/unitysdk.h"
class ABBKNGEHNNA;
namespace RPG::GameCore { class TaskContext; }

#define LGJOGOKJGMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB69A150)
#define LGJOGOKJGMJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB69A180)

inline static constexpr unsigned int LGJOGOKJGMJ_TypeDefinitionIndex = 52850;

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
