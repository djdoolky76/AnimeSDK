#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define E9781F34B22778CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9781F34B22778CA_TypeDefinitionIndex = 20328;

class E9781F34B22778CA : public ::System::Object
{
public:
	::System::Void _ctor(::System::String* F79B4D487F303AB2, ::System::Boolean FA95B075F8276905)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + E9781F34B22778CA__CTOR_OFFSET))(this, F79B4D487F303AB2, FA95B075F8276905);
	}
};
