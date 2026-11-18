#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define NIIDCBBMEJC__CTOR_OFFSET UNITYSDK_OFFSET(0x13153A70)

inline static constexpr unsigned int NIIDCBBMEJC_TypeDefinitionIndex = 65522;

class NIIDCBBMEJC : public ::System::Attribute
{
public:
	::System::Type* JJBFHNJMJPH; // 0x10

	::System::Void _ctor(::System::Type* AHNJJLGIDAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NIIDCBBMEJC__CTOR_OFFSET))(this, AHNJJLGIDAD);
	}
};
