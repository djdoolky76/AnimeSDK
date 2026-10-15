#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockHP; }
namespace RPG::GameCore { class TaskContext; }

#define ELHAMLKMLJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1551FA90)
#define ELHAMLKMLJO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1551FAC0)

inline static constexpr unsigned int ELHAMLKMLJO_TypeDefinitionIndex = 55147;

	class ELHAMLKMLJO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockHP*))((::PBYTE)hIl2Cpp + ELHAMLKMLJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHAMLKMLJO_ONTASKBEGIN_OFFSET))(this);
		}

	};
