#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A375536B9B082594.h"

#define E8AC6BEB9237118E_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x176BC60)
#define E8AC6BEB9237118E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x176BD40)
#define E8AC6BEB9237118E__CTOR_OFFSET UNITYSDK_OFFSET(0x176BD10)

inline static constexpr unsigned int E8AC6BEB9237118E_TypeDefinitionIndex = 832;

class E8AC6BEB9237118E : public ::A375536B9B082594
{
public:
	::System::Boolean B48E5995AB02DACB; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single AB58EC884C7A56FD; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8AC6BEB9237118E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::E8AC6BEB9237118E* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::E8AC6BEB9237118E*))((::PBYTE)hIl2Cpp + E8AC6BEB9237118E__CTOR_1_OFFSET))(this, BEEE7A5A60941632);
	}

	::A375536B9B082594* A4CFF253D56ECB2D()
	{
		return ((::A375536B9B082594*(*)(::PVOID))((::PBYTE)hIl2Cpp + E8AC6BEB9237118E_A4CFF253D56ECB2D_OFFSET))(this);
	}
};
