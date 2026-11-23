#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EC68E7BECA77DFF9.h"

namespace System { class String; }

#define F209EADAC351D14B_B7697643A4900459_OFFSET UNITYSDK_OFFSET(0x1678550)
#define F209EADAC351D14B_EAE41585CEDA7352_OFFSET UNITYSDK_OFFSET(0x1AB1CB0)
#define F209EADAC351D14B__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB1CA0)

inline static constexpr unsigned int F209EADAC351D14B_TypeDefinitionIndex = 1914;

class F209EADAC351D14B : public ::EC68E7BECA77DFF9
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F209EADAC351D14B__CTOR_OFFSET))(this);
	}

	::System::Boolean B7697643A4900459()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F209EADAC351D14B_B7697643A4900459_OFFSET))(this);
	}

	::System::String* EAE41585CEDA7352()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F209EADAC351D14B_EAE41585CEDA7352_OFFSET))(this);
	}
};
