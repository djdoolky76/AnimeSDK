#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJGDOCPCHGG.h"
#include "unitysdk/JGPOIHJFGKB.h"
#include "unitysdk/OONNCBKCOFI.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define DJKHELIDBOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F79FAF0)

inline static constexpr unsigned int DJKHELIDBOL_TypeDefinitionIndex = 28812;

class DJKHELIDBOL : public ::System::Attribute
{
public:
	::System::String* ONICDEFICFK; // 0x10
	::JGPOIHJFGKB HIEGNIKMOJK; // 0x18
	::OONNCBKCOFI FPPOEOGAGHF; // 0x1C
	::IJGDOCPCHGG BBCHHIKCDAL; // 0x1E
	::JGPOIHJFGKB EMCNKKFGOFH; // 0x20
	::JGPOIHJFGKB IJBEPEBIIGE; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKHELIDBOL__CTOR_OFFSET))(this);
	}
};
