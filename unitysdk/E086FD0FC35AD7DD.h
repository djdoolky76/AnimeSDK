#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Enum; }
namespace System { class String; }

#define E086FD0FC35AD7DD_E3EBDB46DD72D47F_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E086FD0FC35AD7DD_ED558BCFFB226CBA_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E086FD0FC35AD7DD_F0A7F3F754486F0C_OFFSET UNITYSDK_OFFSET(0x3A51220)
#define E086FD0FC35AD7DD__CTOR_OFFSET UNITYSDK_OFFSET(0x2759260)

inline static constexpr unsigned int E086FD0FC35AD7DD_TypeDefinitionIndex = 13014;

class E086FD0FC35AD7DD : public ::System::Attribute
{
public:
	::System::String* FFF4B2B140BB86A2; // 0x10

	static ::System::String* F0A7F3F754486F0C(::System::Enum* A86A90C31A146E9C)
	{
		return ((::System::String*(*)(::System::Enum*))((::PBYTE)hIl2Cpp + E086FD0FC35AD7DD_F0A7F3F754486F0C_OFFSET))(A86A90C31A146E9C);
	}

	::System::String* ED558BCFFB226CBA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + E086FD0FC35AD7DD_ED558BCFFB226CBA_OFFSET))(this);
	}

	::System::Void E3EBDB46DD72D47F(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E086FD0FC35AD7DD_E3EBDB46DD72D47F_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor(::System::String* E97E8D008427A296)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E086FD0FC35AD7DD__CTOR_OFFSET))(this, E97E8D008427A296);
	}
};
