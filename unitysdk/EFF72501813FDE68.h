#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAFCA084378A7E16.h"

namespace System { class String; }

#define EFF72501813FDE68_EAE41585CEDA7352_OFFSET UNITYSDK_OFFSET(0x2287D00)
#define EFF72501813FDE68__CTOR_OFFSET UNITYSDK_OFFSET(0x167C630)

inline static constexpr unsigned int EFF72501813FDE68_TypeDefinitionIndex = 6986;

class EFF72501813FDE68 : public ::EAFCA084378A7E16
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFF72501813FDE68__CTOR_OFFSET))(this);
	}

	::System::String* EAE41585CEDA7352()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFF72501813FDE68_EAE41585CEDA7352_OFFSET))(this);
	}
};
