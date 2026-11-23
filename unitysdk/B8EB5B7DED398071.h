#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BE1E11B808A636AE;

#define B8EB5B7DED398071__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B8EB5B7DED398071_TypeDefinitionIndex = 16792;

class B8EB5B7DED398071 : public ::System::Object
{
public:
	::BE1E11B808A636AE* A273BA5F3C38C6DF; // 0x10
	::BE1E11B808A636AE* B21459EB4C2FC1A5; // 0x18
	::System::Boolean B8B5332447891547; // 0x20
	::System::Boolean A0AB898D4C53AABF; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8EB5B7DED398071__CTOR_OFFSET))(this);
	}
};
