#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/WwiseObjectReference.h"

namespace System { class String; }

#define WWISEGROUPVALUEOBJECTREFERENCE_EC4DF568266C3E4D_OFFSET UNITYSDK_OFFSET(0x2913810)
#define WWISEGROUPVALUEOBJECTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x29137A0)

inline static constexpr unsigned int WwiseGroupValueObjectReference_TypeDefinitionIndex = 21571;

class WwiseGroupValueObjectReference : public ::WwiseObjectReference
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEGROUPVALUEOBJECTREFERENCE__CTOR_OFFSET))(this);
	}

	::System::String* EC4DF568266C3E4D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEGROUPVALUEOBJECTREFERENCE_EC4DF568266C3E4D_OFFSET))(this);
	}
};
