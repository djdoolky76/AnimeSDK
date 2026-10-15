#pragma once
#include "unitysdk/unitysdk.h"
class MFDGMNBPMLI;
namespace RPG::GameCore { class TaskContext; }

#define CGOIEEDBBHL_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8C7D0)
#define CGOIEEDBBHL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC8C800)

	class CGOIEEDBBHL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MFDGMNBPMLI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MFDGMNBPMLI*))((::PBYTE)hIl2Cpp + CGOIEEDBBHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOIEEDBBHL_ONTASKBEGIN_OFFSET))(this);
		}

	};
