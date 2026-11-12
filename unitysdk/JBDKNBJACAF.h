#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTargetDirMove; }
namespace RPG::GameCore { class TaskContext; }

#define JBDKNBJACAF_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A02D0)
#define JBDKNBJACAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8A0300)

inline static constexpr unsigned int JBDKNBJACAF_TypeDefinitionIndex = 59848;

	class JBDKNBJACAF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetDirMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetDirMove*))((::PBYTE)hIl2Cpp + JBDKNBJACAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDKNBJACAF_ONTASKBEGIN_OFFSET))(this);
		}

	};
