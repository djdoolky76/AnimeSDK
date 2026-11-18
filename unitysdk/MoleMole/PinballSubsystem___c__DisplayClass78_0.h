#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MGBBDIIJPFJ;

#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS78_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A713960)
#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS78_0__GETPINBALLBALLCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1A713970)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem___c__DisplayClass78_0_TypeDefinitionIndex = 56764;

	class PinballSubsystem___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::System::Int32 count; // 0x10
		::System::Boolean activeOnly; // 0x14
		::System::Boolean cloneOnly; // 0x15

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS78_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetPinballBallCount_b__0(::MGBBDIIJPFJ* runtimeEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS78_0__GETPINBALLBALLCOUNT_B__0_OFFSET))(this, runtimeEntity);
		}
	};
}
