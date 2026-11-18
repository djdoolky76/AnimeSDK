#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CBKCEJKBGKN_AAFKDLBNMFN_OFFSET UNITYSDK_OFFSET(0x199F2200)
#define CBKCEJKBGKN__CTOR_OFFSET UNITYSDK_OFFSET(0x199F21F0)

inline static constexpr unsigned int CBKCEJKBGKN_TypeDefinitionIndex = 92813;

class CBKCEJKBGKN : public ::System::Object
{
public:
	::System::String* KIHGNGKBADE; // 0x10
	::System::UInt32 DJJGLILJKEA; // 0x18
	::System::Single JPNNNBHEEHJ; // 0x1C
	::System::Boolean HPAKDALODKP; // 0x20
	::System::Byte _padding0[0x3];
	::System::Single CMLHAPFOIPE; // 0x24
	::System::Int32 CFBNFGGIFCH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBKCEJKBGKN__CTOR_OFFSET))(this);
	}

	::System::Boolean AAFKDLBNMFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBKCEJKBGKN_AAFKDLBNMFN_OFFSET))(this);
	}
};
