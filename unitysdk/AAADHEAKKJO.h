#pragma once
#include "unitysdk/unitysdk.h"
class GIFBHKAGPEG;
namespace RPG::GameCore { class TaskContext; }

#define AAADHEAKKJO_CTOR_OFFSET UNITYSDK_OFFSET(0x18C6DC80)
#define AAADHEAKKJO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C6DCB0)

inline static constexpr unsigned int AAADHEAKKJO_TypeDefinitionIndex = 56424;

	class AAADHEAKKJO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GIFBHKAGPEG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GIFBHKAGPEG*))((::PBYTE)hIl2Cpp + AAADHEAKKJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAADHEAKKJO_ONTASKBEGIN_OFFSET))(this);
		}

	};
