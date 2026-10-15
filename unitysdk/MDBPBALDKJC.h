#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowTalkRecordingDialog; }
namespace RPG::GameCore { class TaskContext; }

#define MDBPBALDKJC_CCLHPIFFMCP_OFFSET UNITYSDK_OFFSET(0xB89E420)
#define MDBPBALDKJC_CTOR_OFFSET UNITYSDK_OFFSET(0xB89E380)
#define MDBPBALDKJC_OCCIFHOEJMI_OFFSET UNITYSDK_OFFSET(0xB89E540)
#define MDBPBALDKJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB89E3B0)

	class MDBPBALDKJC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTalkRecordingDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTalkRecordingDialog*))((::PBYTE)hIl2Cpp + MDBPBALDKJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBPBALDKJC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void CCLHPIFFMCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBPBALDKJC_CCLHPIFFMCP_OFFSET))(this);
		}

		::System::Void OCCIFHOEJMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBPBALDKJC_OCCIFHOEJMI_OFFSET))(this);
		}

	};
