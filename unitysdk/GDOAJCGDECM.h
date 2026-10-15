#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearEntityRelationGroup; }
namespace RPG::GameCore { class TaskContext; }

#define GDOAJCGDECM_CTOR_OFFSET UNITYSDK_OFFSET(0x159BE330)
#define GDOAJCGDECM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159BE360)

	class GDOAJCGDECM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearEntityRelationGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearEntityRelationGroup*))((::PBYTE)hIl2Cpp + GDOAJCGDECM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOAJCGDECM_ONTASKBEGIN_OFFSET))(this);
		}

	};
