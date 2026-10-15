#pragma once
#include "unitysdk/unitysdk.h"
class CPNBEPCCCDH;
namespace RPG::GameCore { class TaskContext; }

#define KENFPDFOAHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB37F120)
#define KENFPDFOAHJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB37F150)

	class KENFPDFOAHJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CPNBEPCCCDH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CPNBEPCCCDH*))((::PBYTE)hIl2Cpp + KENFPDFOAHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KENFPDFOAHJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
