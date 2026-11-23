#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BD67DDDE82E42AC6_A95A577B550E5B9E_OFFSET UNITYSDK_OFFSET(0x272D2A0)
#define BD67DDDE82E42AC6__CTOR_OFFSET UNITYSDK_OFFSET(0x1F26BB0)

inline static constexpr unsigned int BD67DDDE82E42AC6_TypeDefinitionIndex = 2965;

class BD67DDDE82E42AC6 : public ::System::Object
{
public:
	::System::Int32 BFC619E0B5CE92E2; // 0x10

	::System::Void _ctor(::System::Int32 E14961743E675799)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BD67DDDE82E42AC6__CTOR_OFFSET))(this, E14961743E675799);
	}

	::System::Int32 A95A577B550E5B9E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BD67DDDE82E42AC6_A95A577B550E5B9E_OFFSET))(this);
	}
};
