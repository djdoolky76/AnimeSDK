#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define ECHBOCHHOKA__CTOR_OFFSET UNITYSDK_OFFSET(0x16130E30)

inline static constexpr unsigned int ECHBOCHHOKA_TypeDefinitionIndex = 61130;

class ECHBOCHHOKA : public ::System::Attribute
{
public:
	::System::String* IMOAKEGINJP; // 0x10
	::System::String* NEBPLBMBPNP; // 0x18

	::System::Void _ctor(::System::String* IMOAKEGINJP, ::System::String* NEBPLBMBPNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ECHBOCHHOKA__CTOR_OFFSET))(this, IMOAKEGINJP, NEBPLBMBPNP);
	}
};
