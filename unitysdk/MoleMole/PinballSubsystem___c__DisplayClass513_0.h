#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MGBBDIIJPFJ;
namespace MoleMole { class PinballSubsystem; }

#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS513_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7138D0)
#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS513_0__ISMOVERINSIDEANYPADDLEREHITGUARDZONE_B__0_OFFSET UNITYSDK_OFFSET(0x1A7138E0)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem___c__DisplayClass513_0_TypeDefinitionIndex = 56732;

	class PinballSubsystem___c__DisplayClass513_0 : public ::System::Object
	{
	public:
		::MGBBDIIJPFJ* mover; // 0x10
		::MoleMole::PinballSubsystem* __4__this; // 0x18
		::System::Boolean hasContact; // 0x20
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 moverCenter; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS513_0__CTOR_OFFSET))(this);
		}

		::System::Void _IsMoverInsideAnyPaddleRehitGuardZone_b__0(::MGBBDIIJPFJ* paddle)
		{
			return ((::System::Void(*)(::PVOID, ::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS513_0__ISMOVERINSIDEANYPADDLEREHITGUARDZONE_B__0_OFFSET))(this, paddle);
		}
	};
}
