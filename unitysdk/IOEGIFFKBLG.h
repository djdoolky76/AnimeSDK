#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
class GIPELBHHIHI;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define IOEGIFFKBLG_CTOR_OFFSET UNITYSDK_OFFSET(0x16500870)
#define IOEGIFFKBLG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16500970)
#define IOEGIFFKBLG_DOONENTER_OFFSET UNITYSDK_OFFSET(0x16500A10)
#define IOEGIFFKBLG_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x16500A90)

	class IOEGIFFKBLG : public ::EDLDHDMLJDH
	{
	public:
		::System::String* LOHNGOHDLEK; // 0xA0
		::GIPELBHHIHI* NLOIFCLPHAC; // 0xA8
		::System::UInt32 PEEFHNHDBMF; // 0xB0
		::System::UInt32 JAGLDFFBENK; // 0xB4
		::System::UInt32 JGGDKOCIEGH; // 0xB8
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::String* a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + IOEGIFFKBLG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOEGIFFKBLG_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IOEGIFFKBLG_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + IOEGIFFKBLG_DOONEXIT_OFFSET))(this, a1, a2);
		}

	};
