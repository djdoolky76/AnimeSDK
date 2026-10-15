#pragma once
#include "unitysdk/unitysdk.h"
class PHKIDNKGPOH;
namespace RPG::GameCore { class TaskContext; }

#define FJIMLAHGACA_CTOR_OFFSET UNITYSDK_OFFSET(0x157D0DE0)
#define FJIMLAHGACA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157D0E10)

inline static constexpr unsigned int FJIMLAHGACA_TypeDefinitionIndex = 52973;

	class FJIMLAHGACA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PHKIDNKGPOH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PHKIDNKGPOH*))((::PBYTE)hIl2Cpp + FJIMLAHGACA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIMLAHGACA_ONTASKBEGIN_OFFSET))(this);
		}

	};
