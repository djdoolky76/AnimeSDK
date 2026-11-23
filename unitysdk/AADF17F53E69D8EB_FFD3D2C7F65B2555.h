#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AADF17F53E69D8EB_FFD3D2C7F65B2555_EB0CAF8AED75C60B_OFFSET UNITYSDK_OFFSET(0x29FFD50)
#define AADF17F53E69D8EB_FFD3D2C7F65B2555__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AADF17F53E69D8EB_FFD3D2C7F65B2555_TypeDefinitionIndex = 15758;

class AADF17F53E69D8EB_FFD3D2C7F65B2555 : public ::System::Object
{
public:
	::System::String* A342D5344F7596A8; // 0x10
	::System::Boolean F811DDDB5F94B487; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADF17F53E69D8EB_FFD3D2C7F65B2555__CTOR_OFFSET))(this);
	}

	::System::Void EB0CAF8AED75C60B(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AADF17F53E69D8EB_FFD3D2C7F65B2555_EB0CAF8AED75C60B_OFFSET))(this, B083BE7841B347C4);
	}
};
