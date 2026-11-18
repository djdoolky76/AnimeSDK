#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LHHEEEPLFBF__CTOR_OFFSET UNITYSDK_OFFSET(0x16C508D0)

inline static constexpr unsigned int LHHEEEPLFBF_TypeDefinitionIndex = 48842;

class LHHEEEPLFBF : public ::System::Object
{
public:
	::System::Int32 OCFNJHOGNFC; // 0x10
	::System::Int32 AEPEPHHADNP; // 0x14

	::System::Void _ctor(::System::Int32 AEPEPHHADNP, ::System::Int32 OCFNJHOGNFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LHHEEEPLFBF__CTOR_OFFSET))(this, AEPEPHHADNP, OCFNJHOGNFC);
	}
};
