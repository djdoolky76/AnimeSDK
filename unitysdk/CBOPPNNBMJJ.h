#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StackStatusResistance; }
namespace RPG::GameCore { class TaskContext; }

#define CBOPPNNBMJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC4B6000)
#define CBOPPNNBMJJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4B6030)

	class CBOPPNNBMJJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackStatusResistance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackStatusResistance*))((::PBYTE)hIl2Cpp + CBOPPNNBMJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOPPNNBMJJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
