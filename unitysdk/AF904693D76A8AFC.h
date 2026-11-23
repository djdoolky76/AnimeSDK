#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AA3569C0D94DAF36.h"

#define AF904693D76A8AFC_F19FEBA7109A027C_OFFSET UNITYSDK_OFFSET(0x1FE17A0)
#define AF904693D76A8AFC__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AF904693D76A8AFC_TypeDefinitionIndex = 8158;

class AF904693D76A8AFC : public ::AA3569C0D94DAF36
{
public:
	::System::Boolean F19FEBA7109A027C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AF904693D76A8AFC_F19FEBA7109A027C_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF904693D76A8AFC__CTOR_OFFSET))(this);
	}
};
