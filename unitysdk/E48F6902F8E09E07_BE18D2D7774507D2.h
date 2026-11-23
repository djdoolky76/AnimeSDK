#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define E48F6902F8E09E07_BE18D2D7774507D2__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB5EE0)

inline static constexpr unsigned int E48F6902F8E09E07_BE18D2D7774507D2_TypeDefinitionIndex = 19219;

struct alignas(8) E48F6902F8E09E07_BE18D2D7774507D2
{
	::System::Int32 F0CE3AB8640F63AA; // 0x10
	::System::Byte _padding0[0x4];
	::Il2CppArray<::System::Single>* FCC8BDCEE76E2537; // 0x18
	::Il2CppArray<::System::Single>* A6AE9A549B865147; // 0x20
	::Il2CppArray<::System::Single>* E8CE33AA40ADD342; // 0x28

	::System::Void _ctor(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + E48F6902F8E09E07_BE18D2D7774507D2__CTOR_OFFSET))(this, F220A2D27F7C6B6C);
	}
};
