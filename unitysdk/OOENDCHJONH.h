#pragma once
#include "unitysdk/unitysdk.h"
class ONMOHNKNAID;
namespace RPG::GameCore { class TaskContext; }

#define OOENDCHJONH_CTOR_OFFSET UNITYSDK_OFFSET(0xBF79B30)
#define OOENDCHJONH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF79B60)

	class OOENDCHJONH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ONMOHNKNAID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ONMOHNKNAID*))((::PBYTE)hIl2Cpp + OOENDCHJONH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOENDCHJONH_ONTASKBEGIN_OFFSET))(this);
		}

	};
