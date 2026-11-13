#pragma once
#include "unitysdk/unitysdk.h"
class ECEGLOOOCHL;
namespace RPG::GameCore { class TaskContext; }

#define OPLCKIEHIFO_CTOR_OFFSET UNITYSDK_OFFSET(0x18ABF660)
#define OPLCKIEHIFO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18ABF690)

inline static constexpr unsigned int OPLCKIEHIFO_TypeDefinitionIndex = 56219;

	class OPLCKIEHIFO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ECEGLOOOCHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ECEGLOOOCHL*))((::PBYTE)hIl2Cpp + OPLCKIEHIFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLCKIEHIFO_ONTASKBEGIN_OFFSET))(this);
		}

	};
