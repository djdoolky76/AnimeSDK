#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_MONOASYNCCALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System
{
	inline static constexpr unsigned int MonoAsyncCall_TypeDefinitionIndex = 10960;

	class MonoAsyncCall : public ::System::Object
	{
	public:
		::System::Object* AFBEEBF9BAFC698D; // 0x10
		::System::IntPtr ABC15ABC77797024; // 0x18
		::System::Object* A47B3BDA57F93AC5; // 0x20
		::System::Object* AD036903E9A68969; // 0x28
		::System::Object* FE7B50A0D75F495F; // 0x30
		::System::Object* A1E52ECA05520335; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOASYNCCALL__CTOR_OFFSET))(this);
		}
	};
}
