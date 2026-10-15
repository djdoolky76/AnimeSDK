#pragma once
#include "unitysdk/unitysdk.h"
class NJPHJGAPNPG;
namespace RPG::GameCore { class TaskContext; }

#define PIBLJPGOPFK_CTOR_OFFSET UNITYSDK_OFFSET(0xC25CA70)
#define PIBLJPGOPFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC25CAA0)

	class PIBLJPGOPFK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NJPHJGAPNPG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NJPHJGAPNPG*))((::PBYTE)hIl2Cpp + PIBLJPGOPFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBLJPGOPFK_ONTASKBEGIN_OFFSET))(this);
		}

	};
