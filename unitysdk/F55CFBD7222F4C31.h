#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E785594F92C0DECC;

#define F55CFBD7222F4C31_BCB0A4DD6EA3B4C9_OFFSET UNITYSDK_OFFSET(0x3B78490)
#define F55CFBD7222F4C31__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B785B0)
#define F55CFBD7222F4C31__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F55CFBD7222F4C31_TypeDefinitionIndex = 11035;

class F55CFBD7222F4C31 : public ::System::Object
{
public:
	static ::F55CFBD7222F4C31** StaticGet_EE999965A1D2099B()
	{
		return (::F55CFBD7222F4C31**)Il2CppClass::FromTypeDefinitionIndex(F55CFBD7222F4C31_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F55CFBD7222F4C31__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F55CFBD7222F4C31__CTOR_OFFSET))(this);
	}

	::System::Int32 BCB0A4DD6EA3B4C9(::E785594F92C0DECC* A64886CA86DF769A, ::E785594F92C0DECC* EDC812878A8F27BB)
	{
		return ((::System::Int32(*)(::PVOID, ::E785594F92C0DECC*, ::E785594F92C0DECC*))((::PBYTE)hIl2Cpp + F55CFBD7222F4C31_BCB0A4DD6EA3B4C9_OFFSET))(this, A64886CA86DF769A, EDC812878A8F27BB);
	}
};
