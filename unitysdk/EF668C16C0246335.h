#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/FieldInfo.h"

#define EF668C16C0246335__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int EF668C16C0246335_TypeDefinitionIndex = 10882;

class EF668C16C0246335 : public ::System::Reflection::FieldInfo
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF668C16C0246335__CTOR_OFFSET))(this);
	}
};
