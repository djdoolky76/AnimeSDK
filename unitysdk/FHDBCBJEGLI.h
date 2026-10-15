#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StackBoostPointDirty; }
namespace RPG::GameCore { class TaskContext; }

#define FHDBCBJEGLI_CTOR_OFFSET UNITYSDK_OFFSET(0x15775AC0)
#define FHDBCBJEGLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15775AF0)

	class FHDBCBJEGLI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackBoostPointDirty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackBoostPointDirty*))((::PBYTE)hIl2Cpp + FHDBCBJEGLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDBCBJEGLI_ONTASKBEGIN_OFFSET))(this);
		}

	};
