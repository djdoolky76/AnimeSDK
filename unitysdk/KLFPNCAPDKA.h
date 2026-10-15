#pragma once
#include "unitysdk/unitysdk.h"
class NPCJAJABFIB;
namespace RPG::GameCore { class TaskContext; }

#define KLFPNCAPDKA_CTOR_OFFSET UNITYSDK_OFFSET(0xB51FA00)
#define KLFPNCAPDKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB51FA30)

inline static constexpr unsigned int KLFPNCAPDKA_TypeDefinitionIndex = 53339;

	class KLFPNCAPDKA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NPCJAJABFIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NPCJAJABFIB*))((::PBYTE)hIl2Cpp + KLFPNCAPDKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFPNCAPDKA_ONTASKBEGIN_OFFSET))(this);
		}

	};
