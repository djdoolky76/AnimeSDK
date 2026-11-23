#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AADF17F53E69D8EB_WEBRESPONSEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AADF17F53E69D8EB_WebResponseData_TypeDefinitionIndex = 15757;

class AADF17F53E69D8EB_WebResponseData : public ::System::Object
{
public:
	::System::String* name; // 0x10
	::System::String* data; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADF17F53E69D8EB_WEBRESPONSEDATA__CTOR_OFFSET))(this);
	}
};
