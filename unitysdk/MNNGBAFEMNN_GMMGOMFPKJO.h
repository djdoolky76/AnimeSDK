#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }

#define MNNGBAFEMNN_GMMGOMFPKJO__CTOR_OFFSET UNITYSDK_OFFSET(0x6C9ED0)

inline static constexpr unsigned int MNNGBAFEMNN_GMMGOMFPKJO_TypeDefinitionIndex = 82506;

struct alignas(8) MNNGBAFEMNN_GMMGOMFPKJO
{
	::System::String* KJNFOGJOALN; // 0x10
	::System::Type* LNFEJFCOHHM; // 0x18
	::System::String* PDPDFJFHING; // 0x20
	::System::Boolean CCJPOICFCED; // 0x28

	::System::Void _ctor(::System::String* FDOKFPDLNNA, ::System::Type* LCBNOCKOKMD, ::System::Boolean LHKNAMICOEM, ::System::String* BMLMMPALJEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MNNGBAFEMNN_GMMGOMFPKJO__CTOR_OFFSET))(this, FDOKFPDLNNA, LCBNOCKOKMD, LHKNAMICOEM, BMLMMPALJEK);
	}
};
