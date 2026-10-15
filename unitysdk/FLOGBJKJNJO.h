#pragma once
#include "unitysdk/unitysdk.h"
class MFHGBPDJJPE;
namespace RPG::GameCore { class TaskContext; }

#define FLOGBJKJNJO_CTOR_OFFSET UNITYSDK_OFFSET(0x158374D0)
#define FLOGBJKJNJO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15837500)

inline static constexpr unsigned int FLOGBJKJNJO_TypeDefinitionIndex = 55612;

	class FLOGBJKJNJO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MFHGBPDJJPE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MFHGBPDJJPE*))((::PBYTE)hIl2Cpp + FLOGBJKJNJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOGBJKJNJO_ONTASKBEGIN_OFFSET))(this);
		}

	};
