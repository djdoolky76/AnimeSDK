#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ONOOKOPBJHP_DCKPJEMPGLB_GJGAIMIKJEH_OFFSET UNITYSDK_OFFSET(0x12954D00)
#define ONOOKOPBJHP_DCKPJEMPGLB__CTOR_OFFSET UNITYSDK_OFFSET(0x12954BE0)

inline static constexpr unsigned int ONOOKOPBJHP_DCKPJEMPGLB_TypeDefinitionIndex = 71512;

class ONOOKOPBJHP_DCKPJEMPGLB : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle OMPHGGCEIBD; // 0x10
	::System::String* PMMOBMKAHPI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOOKOPBJHP_DCKPJEMPGLB__CTOR_OFFSET))(this);
	}

	::System::Void GJGAIMIKJEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOOKOPBJHP_DCKPJEMPGLB_GJGAIMIKJEH_OFFSET))(this);
	}
};
