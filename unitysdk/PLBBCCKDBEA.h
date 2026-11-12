#pragma once
#include "unitysdk/unitysdk.h"
class GGADPFPIOGE;
namespace RPG::GameCore { class TaskContext; }

#define PLBBCCKDBEA_CTOR_OFFSET UNITYSDK_OFFSET(0xCC1B430)
#define PLBBCCKDBEA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC1B460)

inline static constexpr unsigned int PLBBCCKDBEA_TypeDefinitionIndex = 56760;

	class PLBBCCKDBEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GGADPFPIOGE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GGADPFPIOGE*))((::PBYTE)hIl2Cpp + PLBBCCKDBEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBBCCKDBEA_ONTASKBEGIN_OFFSET))(this);
		}

	};
