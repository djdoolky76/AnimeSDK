#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MGBBDIIJPFJ;
namespace MoleMole { class PinballSubsystem; }

#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS727_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC0350)
#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS727_0__UPDATETARGETPRESENTATIONS_B__0_OFFSET UNITYSDK_OFFSET(0x14BC0360)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem___c__DisplayClass727_0_TypeDefinitionIndex = 56759;

	class PinballSubsystem___c__DisplayClass727_0 : public ::System::Object
	{
	public:
		::MoleMole::PinballSubsystem* __4__this; // 0x10
		::System::Single safeOutputDeltaTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS727_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateTargetPresentations_b__0(::MGBBDIIJPFJ* target)
		{
			return ((::System::Void(*)(::PVOID, ::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS727_0__UPDATETARGETPRESENTATIONS_B__0_OFFSET))(this, target);
		}
	};
}
