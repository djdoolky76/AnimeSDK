#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F1400DC6F11C88AD_A248F54E47444682_OFFSET UNITYSDK_OFFSET(0x3A67980)
#define F1400DC6F11C88AD_A81381079819C1F1_OFFSET UNITYSDK_OFFSET(0x3A679E0)
#define F1400DC6F11C88AD_B0CD3CCBFB20084D_OFFSET UNITYSDK_OFFSET(0x3A677A0)
#define F1400DC6F11C88AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F1400DC6F11C88AD_TypeDefinitionIndex = 13034;

class F1400DC6F11C88AD : public ::System::Object
{
public:
	static ::System::Boolean A248F54E47444682()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + F1400DC6F11C88AD_A248F54E47444682_OFFSET))();
	}

	static ::System::String* A81381079819C1F1(::System::String* EFF983A80A48BB2A)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + F1400DC6F11C88AD_A81381079819C1F1_OFFSET))(EFF983A80A48BB2A);
	}

	static ::System::String* B0CD3CCBFB20084D()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + F1400DC6F11C88AD_B0CD3CCBFB20084D_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1400DC6F11C88AD__CTOR_OFFSET))(this);
	}
};
