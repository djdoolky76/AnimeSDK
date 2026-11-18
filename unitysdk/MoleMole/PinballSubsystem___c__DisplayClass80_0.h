#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MGBBDIIJPFJ;

#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS80_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12B89FD0)
#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS80_0__ISBALLACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0x12B89FE0)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem___c__DisplayClass80_0_TypeDefinitionIndex = 56757;

	class PinballSubsystem___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::System::Boolean foundActiveBall; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS80_0__CTOR_OFFSET))(this);
		}

		::System::Void _IsBallActive_b__0(::MGBBDIIJPFJ* runtimeEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS80_0__ISBALLACTIVE_B__0_OFFSET))(this, runtimeEntity);
		}
	};
}
