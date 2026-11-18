#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFDJGBJKGPL.h"
#include "unitysdk/System/Object.h"

class MGBBDIIJPFJ;
namespace MoleMole { class PinballSubsystem; }

#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS306_0__APPLYPADDLEBUTTON_B__0_OFFSET UNITYSDK_OFFSET(0x1044BDD0)
#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS306_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1044BDC0)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem___c__DisplayClass306_0_TypeDefinitionIndex = 56745;

	class PinballSubsystem___c__DisplayClass306_0 : public ::System::Object
	{
	public:
		::MoleMole::PinballSubsystem* __4__this; // 0x10
		::KFDJGBJKGPL side; // 0x18
		::System::Boolean isDown; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS306_0__CTOR_OFFSET))(this);
		}

		::System::Void _ApplyPaddleButton_b__0(::MGBBDIIJPFJ* runtimeEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS306_0__APPLYPADDLEBUTTON_B__0_OFFSET))(this, runtimeEntity);
		}
	};
}
