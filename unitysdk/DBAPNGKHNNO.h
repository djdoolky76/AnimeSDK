#pragma once
#include "unitysdk/unitysdk.h"
class OOCOGGMJLBN;
namespace RPG::GameCore { class TaskContext; }

#define DBAPNGKHNNO_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD59A0)
#define DBAPNGKHNNO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFD59D0)

	class DBAPNGKHNNO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OOCOGGMJLBN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OOCOGGMJLBN*))((::PBYTE)hIl2Cpp + DBAPNGKHNNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAPNGKHNNO_ONTASKBEGIN_OFFSET))(this);
		}

	};
