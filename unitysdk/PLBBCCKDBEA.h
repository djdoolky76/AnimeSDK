#pragma once
#include "unitysdk/unitysdk.h"
class GGADPFPIOGE;
namespace RPG::GameCore { class TaskContext; }

#define PLBBCCKDBEA_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E4CF0)
#define PLBBCCKDBEA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2E4D20)

inline static constexpr unsigned int PLBBCCKDBEA_TypeDefinitionIndex = 55566;

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
