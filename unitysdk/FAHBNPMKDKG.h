#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
class PAKPBEKMBEA;
namespace RPG::GameCore { class GameEntity; }

#define FAHBNPMKDKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1566FB20)
#define FAHBNPMKDKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1566FB70)
#define FAHBNPMKDKG_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1566FC70)
#define FAHBNPMKDKG_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x1566FCD0)

inline static constexpr unsigned int FAHBNPMKDKG_TypeDefinitionIndex = 69453;

	class FAHBNPMKDKG : public ::EDLDHDMLJDH
	{
	public:
		::PAKPBEKMBEA* KGCNPIEDOCA; // 0xA0
		::System::Int32 FGLKHFAAGGF; // 0xA8
		::System::Void _ctor(::PAKPBEKMBEA* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::PAKPBEKMBEA*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + FAHBNPMKDKG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHBNPMKDKG_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FAHBNPMKDKG_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + FAHBNPMKDKG_DOONEXIT_OFFSET))(this, a1, a2);
		}

	};
