#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EC9107DD163B3175_EED3EB8FB2C769B5_FEB1557DF231BF9E_OFFSET UNITYSDK_OFFSET(0x1AE5790)
#define EC9107DD163B3175_EED3EB8FB2C769B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EC9107DD163B3175_EED3EB8FB2C769B5_TypeDefinitionIndex = 1983;

class EC9107DD163B3175_EED3EB8FB2C769B5 : public ::System::Object
{
public:
	::System::UInt32 F2CBD887D67A43BB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC9107DD163B3175_EED3EB8FB2C769B5__CTOR_OFFSET))(this);
	}

	::System::Boolean FEB1557DF231BF9E(::System::UInt32 BB8C609F76620E45)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EC9107DD163B3175_EED3EB8FB2C769B5_FEB1557DF231BF9E_OFFSET))(this, BB8C609F76620E45);
	}
};
