#pragma once
#include "unitysdk/unitysdk.h"
class GJMLHNALEJL;
namespace RPG::GameCore { class TaskContext; }

#define CCBDBIEICBG_CTOR_OFFSET UNITYSDK_OFFSET(0xCE26370)
#define CCBDBIEICBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCE263A0)

inline static constexpr unsigned int CCBDBIEICBG_TypeDefinitionIndex = 54121;

	class CCBDBIEICBG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GJMLHNALEJL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GJMLHNALEJL*))((::PBYTE)hIl2Cpp + CCBDBIEICBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBDBIEICBG_ONTASKBEGIN_OFFSET))(this);
		}

	};
