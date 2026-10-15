#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddTimeRewindBtnCD; }
namespace RPG::GameCore { class TaskContext; }

#define FNCCNNLPAJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1586A5B0)
#define FNCCNNLPAJP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1586A5E0)

	class FNCCNNLPAJP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddTimeRewindBtnCD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddTimeRewindBtnCD*))((::PBYTE)hIl2Cpp + FNCCNNLPAJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCCNNLPAJP_ONTASKBEGIN_OFFSET))(this);
		}

	};
