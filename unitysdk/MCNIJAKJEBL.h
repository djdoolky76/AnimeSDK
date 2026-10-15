#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowCableUI; }
namespace RPG::GameCore { class TaskContext; }

#define MCNIJAKJEBL_CTOR_OFFSET UNITYSDK_OFFSET(0xB889260)
#define MCNIJAKJEBL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB889290)

	class MCNIJAKJEBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowCableUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowCableUI*))((::PBYTE)hIl2Cpp + MCNIJAKJEBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNIJAKJEBL_ONTASKBEGIN_OFFSET))(this);
		}

	};
