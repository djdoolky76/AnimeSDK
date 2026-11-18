#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGKKDFOGGBD.h"
#include "unitysdk/System/Object.h"

class MGBBDIIJPFJ;
namespace MoleMole { class PinballSubsystem; }

#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B89F60)
#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS70_0__TRYMODIFYPINBALLBALLLIFETIME_B__0_OFFSET UNITYSDK_OFFSET(0x12B89F70)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem___c__DisplayClass70_0_TypeDefinitionIndex = 56731;

	class PinballSubsystem___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::MoleMole::PinballSubsystem* __4__this; // 0x10
		::System::Single value; // 0x18
		::HGKKDFOGGBD modifyType; // 0x1C
		::System::Boolean modified; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryModifyPinballBallLifetime_b__0(::MGBBDIIJPFJ* runtimeEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS70_0__TRYMODIFYPINBALLBALLLIFETIME_B__0_OFFSET))(this, runtimeEntity);
		}
	};
}
