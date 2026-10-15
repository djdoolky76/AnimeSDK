#pragma once
#include "unitysdk/unitysdk.h"
class GCBOEGEPENO;
namespace RPG::GameCore { class TaskContext; }

#define OLEOIDIBAKC_CTOR_OFFSET UNITYSDK_OFFSET(0xBF03300)
#define OLEOIDIBAKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF03330)

	class OLEOIDIBAKC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GCBOEGEPENO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GCBOEGEPENO*))((::PBYTE)hIl2Cpp + OLEOIDIBAKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEOIDIBAKC_ONTASKBEGIN_OFFSET))(this);
		}

	};
