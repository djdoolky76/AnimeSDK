#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E987842ECE66EDDA.h"

namespace System { class String; }

#define A7371BB4FFF07C9B__CTOR_OFFSET UNITYSDK_OFFSET(0x418B0F0)

inline static constexpr unsigned int A7371BB4FFF07C9B_TypeDefinitionIndex = 17662;

class A7371BB4FFF07C9B : public ::UnityEngine::E987842ECE66EDDA
{
public:
	::System::String* F7E513B6AB30F4DB; // 0x10

	::System::Void _ctor(::System::String* F7E513B6AB30F4DB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A7371BB4FFF07C9B__CTOR_OFFSET))(this, F7E513B6AB30F4DB);
	}
};
