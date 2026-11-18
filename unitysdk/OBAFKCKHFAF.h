#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OBAFKCKHFAF__CTOR_OFFSET UNITYSDK_OFFSET(0x114E73E0)

inline static constexpr unsigned int OBAFKCKHFAF_TypeDefinitionIndex = 83092;

class OBAFKCKHFAF : public ::System::Object
{
public:
	::System::Int32 KLDIJOIAFOP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFKCKHFAF__CTOR_OFFSET))(this);
	}
};
