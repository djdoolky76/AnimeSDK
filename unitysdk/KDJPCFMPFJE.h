#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearActionBarHighlightEntity; }
namespace RPG::GameCore { class TaskContext; }

#define KDJPCFMPFJE_CTOR_OFFSET UNITYSDK_OFFSET(0xB365140)
#define KDJPCFMPFJE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB365170)

	class KDJPCFMPFJE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearActionBarHighlightEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearActionBarHighlightEntity*))((::PBYTE)hIl2Cpp + KDJPCFMPFJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJPCFMPFJE_ONTASKBEGIN_OFFSET))(this);
		}

	};
