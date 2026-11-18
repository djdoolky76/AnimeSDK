#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define GDFHEILJFEL__CTOR_OFFSET UNITYSDK_OFFSET(0x13DBFD40)

inline static constexpr unsigned int GDFHEILJFEL_TypeDefinitionIndex = 90910;

class GDFHEILJFEL : public ::System::Attribute
{
public:
	::System::String* AEAFLLDMMPH; // 0x10
	::System::Boolean OEGJEJBNHGF; // 0x18

	::System::Void _ctor(::System::String* CJBJONJDOLI, ::System::Boolean DIBPGIJGNGK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDFHEILJFEL__CTOR_OFFSET))(this, CJBJONJDOLI, DIBPGIJGNGK);
	}
};
