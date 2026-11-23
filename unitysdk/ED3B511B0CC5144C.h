#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B58AD87D1F143C/AC6716C8998753B0.h"
#include "unitysdk/System/Object.h"

class EC78D97AB8431623;

#define ED3B511B0CC5144C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ED3B511B0CC5144C_TypeDefinitionIndex = 7379;

class ED3B511B0CC5144C : public ::System::Object
{
public:
	::E0B58AD87D1F143C::AC6716C8998753B0 A8F3DF5E6F643A76; // 0x10
	::System::Byte _padding0[0x4];
	::EC78D97AB8431623* FD5B35FAD43DE23A; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED3B511B0CC5144C__CTOR_OFFSET))(this);
	}
};
