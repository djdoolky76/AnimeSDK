#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MGBBDIIJPFJ;
namespace MoleMole { class PinballSubsystem; }

#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS349_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1194E9B0)
#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS349_0__UPDATEBALLPRESENTATIONS_B__0_OFFSET UNITYSDK_OFFSET(0x1194E9C0)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem___c__DisplayClass349_0_TypeDefinitionIndex = 56755;

	class PinballSubsystem___c__DisplayClass349_0 : public ::System::Object
	{
	public:
		::MoleMole::PinballSubsystem* __4__this; // 0x10
		::System::Single safeOutputDeltaTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS349_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateBallPresentations_b__0(::MGBBDIIJPFJ* ball)
		{
			return ((::System::Void(*)(::PVOID, ::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS349_0__UPDATEBALLPRESENTATIONS_B__0_OFFSET))(this, ball);
		}
	};
}
