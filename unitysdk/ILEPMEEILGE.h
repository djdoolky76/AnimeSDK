#pragma once
#include "unitysdk/unitysdk.h"
class HBPGKIFDBOC;
namespace RPG::GameCore { class TaskContext; }

#define ILEPMEEILGE_CTOR_OFFSET UNITYSDK_OFFSET(0x174844D0)
#define ILEPMEEILGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17484500)
#define ILEPMEEILGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17484540)

inline static constexpr unsigned int ILEPMEEILGE_TypeDefinitionIndex = 56256;

	class ILEPMEEILGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HBPGKIFDBOC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HBPGKIFDBOC*))((::PBYTE)hIl2Cpp + ILEPMEEILGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPMEEILGE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPMEEILGE_ONTASKBEGIN_OFFSET))(this);
		}

	};
