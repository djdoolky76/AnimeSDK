#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BPMKGLFACNC__CTOR_OFFSET UNITYSDK_OFFSET(0x14C5D6B0)

inline static constexpr unsigned int BPMKGLFACNC_TypeDefinitionIndex = 78818;

class BPMKGLFACNC : public ::System::Object
{
public:
	::System::Int32 OALLMKHIIFH; // 0x10
	::System::Boolean DJCNCELJPOM; // 0x14
	::System::Byte _padding0[0x3];
	::System::Int32 AEPEPHHADNP; // 0x18

	::System::Void _ctor(::System::Int32 AEPEPHHADNP, ::System::Int32 OALLMKHIIFH, ::System::Boolean DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BPMKGLFACNC__CTOR_OFFSET))(this, AEPEPHHADNP, OALLMKHIIFH, DJCNCELJPOM);
	}
};
