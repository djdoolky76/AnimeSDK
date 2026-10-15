#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define ILLECHADOKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB4A1C0)

inline static constexpr unsigned int ILLECHADOKP_TypeDefinitionIndex = 42961;

	class ILLECHADOKP : public ::System::Object
	{
	public:
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> IEGAMDMMOMN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLECHADOKP_CTOR_OFFSET))(this);
		}

	};
