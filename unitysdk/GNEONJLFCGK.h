#pragma once
#include "unitysdk/unitysdk.h"
class GMODDCLOONA;
namespace RPG::GameCore { class TaskContext; }

#define GNEONJLFCGK_CTOR_OFFSET UNITYSDK_OFFSET(0x15B00C40)
#define GNEONJLFCGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B00C70)

	class GNEONJLFCGK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GMODDCLOONA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GMODDCLOONA*))((::PBYTE)hIl2Cpp + GNEONJLFCGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEONJLFCGK_ONTASKBEGIN_OFFSET))(this);
		}

	};
