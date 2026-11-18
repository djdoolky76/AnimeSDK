#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EMPEGMEDAHH;
class JKLNCKHIBNP;

#define JKLNCKHIBNP_HDOLFCDBIHA_MAAMBNJAINJ_OFFSET UNITYSDK_OFFSET(0x1385FF70)
#define JKLNCKHIBNP_HDOLFCDBIHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1385FF60)

inline static constexpr unsigned int JKLNCKHIBNP_HDOLFCDBIHA_TypeDefinitionIndex = 87634;

class JKLNCKHIBNP_HDOLFCDBIHA : public ::System::Object
{
public:
	::JKLNCKHIBNP* KLHPEBKNIFB; // 0x10
	::System::UInt32 ALIEIGODCBH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLNCKHIBNP_HDOLFCDBIHA__CTOR_OFFSET))(this);
	}

	::System::Boolean MAAMBNJAINJ(::EMPEGMEDAHH* HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EMPEGMEDAHH*))((::PBYTE)hIl2Cpp + JKLNCKHIBNP_HDOLFCDBIHA_MAAMBNJAINJ_OFFSET))(this, HFMHOELKCAJ);
	}
};
