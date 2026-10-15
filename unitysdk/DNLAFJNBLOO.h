#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAdvLockDistance; }
namespace RPG::GameCore { class TaskContext; }

#define DNLAFJNBLOO_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD72D0)
#define DNLAFJNBLOO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FD7300)
#define DNLAFJNBLOO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FD7340)

	class DNLAFJNBLOO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvLockDistance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvLockDistance*))((::PBYTE)hIl2Cpp + DNLAFJNBLOO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLAFJNBLOO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLAFJNBLOO_ONTASKBEGIN_OFFSET))(this);
		}

	};
