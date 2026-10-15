#pragma once
#include "unitysdk/unitysdk.h"
class CKJKAFKLOIE;
namespace RPG::GameCore { class TaskContext; }

#define PIKDINBIJNP_CTOR_OFFSET UNITYSDK_OFFSET(0xC26AE20)
#define PIKDINBIJNP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC26AE50)

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
