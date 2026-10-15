#pragma once
#include "unitysdk/unitysdk.h"
class NBOALILMEML;
namespace RPG::GameCore { class TaskContext; }

#define KEDEPCODNHH_CTOR_OFFSET UNITYSDK_OFFSET(0xB374C90)
#define KEDEPCODNHH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB374CC0)

	class KEDEPCODNHH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NBOALILMEML* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NBOALILMEML*))((::PBYTE)hIl2Cpp + KEDEPCODNHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEDEPCODNHH_ONTASKBEGIN_OFFSET))(this);
		}

	};
