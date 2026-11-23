#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AA3569C0D94DAF36.h"

#define E99E005A6BE5D76A_F19FEBA7109A027C_OFFSET UNITYSDK_OFFSET(0x1F37290)
#define E99E005A6BE5D76A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E99E005A6BE5D76A_TypeDefinitionIndex = 7637;

class E99E005A6BE5D76A : public ::AA3569C0D94DAF36
{
public:
	::System::Boolean F19FEBA7109A027C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E99E005A6BE5D76A_F19FEBA7109A027C_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E99E005A6BE5D76A__CTOR_OFFSET))(this);
	}
};
