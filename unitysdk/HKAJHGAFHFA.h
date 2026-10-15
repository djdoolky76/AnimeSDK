#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvPlayerRemoveAttachment; }
namespace RPG::GameCore { class TaskContext; }

#define HKAJHGAFHFA_CTOR_OFFSET UNITYSDK_OFFSET(0x15D3AD00)
#define HKAJHGAFHFA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D3AD30)

	class HKAJHGAFHFA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerRemoveAttachment* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerRemoveAttachment*))((::PBYTE)hIl2Cpp + HKAJHGAFHFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJHGAFHFA_ONTASKBEGIN_OFFSET))(this);
		}

	};
