#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class StringBuilder; }

#define F5B84E36D3E135DD__CTOR_OFFSET UNITYSDK_OFFSET(0x44271B0)

inline static constexpr unsigned int F5B84E36D3E135DD_TypeDefinitionIndex = 18961;

class F5B84E36D3E135DD : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* BA0F2AC82C3269D4; // 0x10
	::System::Text::StringBuilder* FFA0F075F741CDDB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5B84E36D3E135DD__CTOR_OFFSET))(this);
	}
};
