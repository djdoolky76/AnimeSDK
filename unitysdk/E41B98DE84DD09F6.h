#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B276BD183A6255CD.h"

class WindmillRotateController;

#define E41B98DE84DD09F6_E0A987C9C21FAD9F_OFFSET UNITYSDK_OFFSET(0x28809C0)
#define E41B98DE84DD09F6_F84845E28A07900D_OFFSET UNITYSDK_OFFSET(0x2880BD0)
#define E41B98DE84DD09F6__CTOR_OFFSET UNITYSDK_OFFSET(0x2880BC0)

inline static constexpr unsigned int E41B98DE84DD09F6_TypeDefinitionIndex = 16080;

class E41B98DE84DD09F6 : public ::B276BD183A6255CD
{
public:
	::WindmillRotateController* F84845E28A07900D()
	{
		return ((::WindmillRotateController*(*)(::PVOID))((::PBYTE)hIl2Cpp + E41B98DE84DD09F6_F84845E28A07900D_OFFSET))(this);
	}

	::System::Void E0A987C9C21FAD9F(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + E41B98DE84DD09F6_E0A987C9C21FAD9F_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E41B98DE84DD09F6__CTOR_OFFSET))(this);
	}
};
