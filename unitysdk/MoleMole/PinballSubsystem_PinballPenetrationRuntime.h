#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PINBALLSUBSYSTEM_PINBALLPENETRATIONRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x13F0F0A0)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_PinballPenetrationRuntime_TypeDefinitionIndex = 56767;

	class PinballSubsystem_PinballPenetrationRuntime : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* Handles; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PINBALLPENETRATIONRUNTIME__CTOR_OFFSET))(this);
		}
	};
}
