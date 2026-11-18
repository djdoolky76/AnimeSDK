#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EOENFPPGEOB_LCGHFIGMKGB_OFFSET UNITYSDK_OFFSET(0x1427A290)
#define EOENFPPGEOB__CTOR_OFFSET UNITYSDK_OFFSET(0x1427A280)

inline static constexpr unsigned int EOENFPPGEOB_TypeDefinitionIndex = 64747;

class EOENFPPGEOB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOENFPPGEOB__CTOR_OFFSET))(this);
	}

	static ::System::Void LCGHFIGMKGB(::System::String* DIJJLMEOEKK, ::System::String* MGKIHCBNKJI, ::System::String* BOBJHBAIAFE)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EOENFPPGEOB_LCGHFIGMKGB_OFFSET))(DIJJLMEOEKK, MGKIHCBNKJI, BOBJHBAIAFE);
	}
};
