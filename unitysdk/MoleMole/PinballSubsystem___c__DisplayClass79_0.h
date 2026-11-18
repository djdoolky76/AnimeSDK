#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MGBBDIIJPFJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC0480)
#define MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS79_0__MAKEROOMFORACTIVERUNTIMECLONEBALLS_B__0_OFFSET UNITYSDK_OFFSET(0x14BC0490)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem___c__DisplayClass79_0_TypeDefinitionIndex = 56751;

	class PinballSubsystem___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MGBBDIIJPFJ*>* activeCloneBalls; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Void _MakeRoomForActiveRuntimeCloneBalls_b__0(::MGBBDIIJPFJ* runtimeEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM___C__DISPLAYCLASS79_0__MAKEROOMFORACTIVERUNTIMECLONEBALLS_B__0_OFFSET))(this, runtimeEntity);
		}
	};
}
