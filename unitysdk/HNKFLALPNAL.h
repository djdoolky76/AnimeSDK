#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }

#define HNKFLALPNAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15D9E910)
#define HNKFLALPNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D9E950)
#define HNKFLALPNAL_DOONENTER_OFFSET UNITYSDK_OFFSET(0x15D9E9F0)
#define HNKFLALPNAL_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x15D9EA80)

	class HNKFLALPNAL : public ::EDLDHDMLJDH
	{
	public:
		::System::Boolean FMCHJKDPJDE; // 0xA0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HNKFLALPNAL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKFLALPNAL_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HNKFLALPNAL_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + HNKFLALPNAL_DOONEXIT_OFFSET))(this, a1, a2);
		}

	};
