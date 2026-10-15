#pragma once
#include "unitysdk/unitysdk.h"
class ANNAJHLHKLD;
namespace RPG::GameCore { class TaskContext; }

#define MDAFBMOOCLK_CTOR_OFFSET UNITYSDK_OFFSET(0xB88D940)
#define MDAFBMOOCLK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB88D970)

	class MDAFBMOOCLK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ANNAJHLHKLD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ANNAJHLHKLD*))((::PBYTE)hIl2Cpp + MDAFBMOOCLK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAFBMOOCLK_ONTASKBEGIN_OFFSET))(this);
		}

	};
