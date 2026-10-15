#pragma once
#include "unitysdk/unitysdk.h"
class KCFOCCAGGAN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define HJIOMFDJLLA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x94F0)
#define HJIOMFDJLLA_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x9500)

inline static constexpr unsigned int HJIOMFDJLLA_TypeDefinitionIndex = 54000;

	struct alignas(8) HJIOMFDJLLA
	{
		::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x10
		::RPG::GameCore::GameEntity* MIAJNJNECOG; // 0x18
		::System::String* KDHPKOFLNFM; // 0x20
		::KCFOCCAGGAN* _ParamList_k__BackingField; // 0x28
		::KCFOCCAGGAN* get_ParamList()
		{
			return ((::KCFOCCAGGAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIOMFDJLLA_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Void set_ParamList(::KCFOCCAGGAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCFOCCAGGAN*))((::PBYTE)hIl2Cpp + HJIOMFDJLLA_SET_PARAMLIST_OFFSET))(this, a1);
		}

	};
