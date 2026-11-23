#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AADF17F53E69D8EB_A4FA2D81708EB68A_AA5754D3013E3FC4_OFFSET UNITYSDK_OFFSET(0x29FFD50)
#define AADF17F53E69D8EB_A4FA2D81708EB68A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AADF17F53E69D8EB_A4FA2D81708EB68A_TypeDefinitionIndex = 15759;

class AADF17F53E69D8EB_A4FA2D81708EB68A : public ::System::Object
{
public:
	::System::String* E82293C0814051A5; // 0x10
	::System::Boolean F811DDDB5F94B487; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADF17F53E69D8EB_A4FA2D81708EB68A__CTOR_OFFSET))(this);
	}

	::System::Void AA5754D3013E3FC4(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AADF17F53E69D8EB_A4FA2D81708EB68A_AA5754D3013E3FC4_OFFSET))(this, B083BE7841B347C4);
	}
};
