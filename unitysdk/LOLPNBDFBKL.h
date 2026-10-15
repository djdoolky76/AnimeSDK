#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlayerForceRush; }
namespace RPG::GameCore { class TaskContext; }

#define LOLPNBDFBKL_CTOR_OFFSET UNITYSDK_OFFSET(0xB80D310)
#define LOLPNBDFBKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB80D340)

	class LOLPNBDFBKL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayerForceRush* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayerForceRush*))((::PBYTE)hIl2Cpp + LOLPNBDFBKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLPNBDFBKL_ONTASKBEGIN_OFFSET))(this);
		}

	};
