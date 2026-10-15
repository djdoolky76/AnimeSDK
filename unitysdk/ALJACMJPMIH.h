#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeCharacterRowData; }
namespace RPG::GameCore { class TaskContext; }

#define ALJACMJPMIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1556D310)
#define ALJACMJPMIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1556D340)

	class ALJACMJPMIH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeCharacterRowData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeCharacterRowData*))((::PBYTE)hIl2Cpp + ALJACMJPMIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJACMJPMIH_ONTASKBEGIN_OFFSET))(this);
		}

	};
