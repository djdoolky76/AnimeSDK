#pragma once
#include "unitysdk/unitysdk.h"
class PJECNBJKBEB;
namespace RPG::GameCore { class TaskContext; }

#define JOJBFMNGHAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DC580)
#define JOJBFMNGHAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B4DC5B0)

inline static constexpr unsigned int JOJBFMNGHAJ_TypeDefinitionIndex = 59401;

	class JOJBFMNGHAJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PJECNBJKBEB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PJECNBJKBEB*))((::PBYTE)hIl2Cpp + JOJBFMNGHAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJBFMNGHAJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
