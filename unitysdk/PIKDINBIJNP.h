#pragma once
#include "unitysdk/unitysdk.h"
class CKJKAFKLOIE;
namespace RPG::GameCore { class TaskContext; }

#define PIKDINBIJNP_CTOR_OFFSET UNITYSDK_OFFSET(0xC263510)
#define PIKDINBIJNP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC263540)

inline static constexpr unsigned int PIKDINBIJNP_TypeDefinitionIndex = 53905;

	class PIKDINBIJNP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CKJKAFKLOIE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CKJKAFKLOIE*))((::PBYTE)hIl2Cpp + PIKDINBIJNP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKDINBIJNP_ONTASKBEGIN_OFFSET))(this);
		}

	};
