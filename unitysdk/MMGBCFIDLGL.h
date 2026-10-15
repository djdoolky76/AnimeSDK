#pragma once
#include "unitysdk/unitysdk.h"
class LDMOAIJBDBP;
namespace RPG::GameCore { class TaskContext; }

#define MMGBCFIDLGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB9C44F0)
#define MMGBCFIDLGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9C4520)

	class MMGBCFIDLGL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LDMOAIJBDBP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LDMOAIJBDBP*))((::PBYTE)hIl2Cpp + MMGBCFIDLGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMGBCFIDLGL_ONTASKBEGIN_OFFSET))(this);
		}

	};
