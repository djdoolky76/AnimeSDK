#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BindTimeRewindController; }
namespace RPG::GameCore { class TaskContext; }

#define KCHICPGEBHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB336960)
#define KCHICPGEBHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB336990)

	class KCHICPGEBHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BindTimeRewindController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindTimeRewindController*))((::PBYTE)hIl2Cpp + KCHICPGEBHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHICPGEBHO_ONTASKBEGIN_OFFSET))(this);
		}

	};
