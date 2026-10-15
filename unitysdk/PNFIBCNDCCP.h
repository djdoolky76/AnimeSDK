#pragma once
#include "unitysdk/unitysdk.h"
class LHOKPKHEBIK;
namespace RPG::GameCore { class TaskContext; }

#define PNFIBCNDCCP_CTOR_OFFSET UNITYSDK_OFFSET(0xC337E20)
#define PNFIBCNDCCP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC337E50)

	class PNFIBCNDCCP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LHOKPKHEBIK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LHOKPKHEBIK*))((::PBYTE)hIl2Cpp + PNFIBCNDCCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFIBCNDCCP_ONTASKBEGIN_OFFSET))(this);
		}

	};
