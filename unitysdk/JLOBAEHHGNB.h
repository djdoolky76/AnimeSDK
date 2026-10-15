#pragma once
#include "unitysdk/unitysdk.h"
class FPDFEFFBNEF;
namespace RPG::GameCore { class TaskContext; }

#define JLOBAEHHGNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB24B6C0)
#define JLOBAEHHGNB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB24B6F0)

inline static constexpr unsigned int JLOBAEHHGNB_TypeDefinitionIndex = 52844;

	class JLOBAEHHGNB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FPDFEFFBNEF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FPDFEFFBNEF*))((::PBYTE)hIl2Cpp + JLOBAEHHGNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOBAEHHGNB_ONTASKBEGIN_OFFSET))(this);
		}

	};
