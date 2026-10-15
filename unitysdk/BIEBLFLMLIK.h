#pragma once
#include "unitysdk/unitysdk.h"
class HMEFEHBBAAE;
namespace RPG::GameCore { class TaskContext; }

#define BIEBLFLMLIK_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A4C60)
#define BIEBLFLMLIK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4A4C90)
#define BIEBLFLMLIK__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB4A4EA0)

	class BIEBLFLMLIK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HMEFEHBBAAE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HMEFEHBBAAE*))((::PBYTE)hIl2Cpp + BIEBLFLMLIK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBLFLMLIK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEBLFLMLIK__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

	};
