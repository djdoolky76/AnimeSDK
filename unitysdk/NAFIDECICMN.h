#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NAFIDECICMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1726A9B0)

inline static constexpr unsigned int NAFIDECICMN_TypeDefinitionIndex = 81757;

class NAFIDECICMN : public ::System::Object
{
public:
	::System::Int32 OIKFFGKDHME; // 0x10
	::System::Boolean GMNLPHFNLMB; // 0x14
	::System::Byte _padding0[0x3];
	::System::Int32 PGPANOOFOCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFIDECICMN__CTOR_OFFSET))(this);
	}
};
