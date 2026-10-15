#pragma once
#include "unitysdk/unitysdk.h"
class GJMLHNALEJL;
namespace RPG::GameCore { class TaskContext; }

#define CCBDBIEICBG_CTOR_OFFSET UNITYSDK_OFFSET(0xC732C60)
#define CCBDBIEICBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC732C90)

inline static constexpr unsigned int CCBDBIEICBG_TypeDefinitionIndex = 52962;

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
