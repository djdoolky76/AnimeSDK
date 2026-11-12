#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetLuaActionQueuePause; }
namespace RPG::GameCore { class TaskContext; }

#define BBBDKMKKHOM_CTOR_OFFSET UNITYSDK_OFFSET(0x16D06C80)
#define BBBDKMKKHOM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D06CB0)
#define BBBDKMKKHOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D06D30)

inline static constexpr unsigned int BBBDKMKKHOM_TypeDefinitionIndex = 59822;

	class BBBDKMKKHOM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLuaActionQueuePause* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLuaActionQueuePause*))((::PBYTE)hIl2Cpp + BBBDKMKKHOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBDKMKKHOM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBDKMKKHOM_ONTASKBEGIN_OFFSET))(this);
		}

	};
