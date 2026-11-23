#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AC117097F4BBABD7_A856FA560551B54D_OFFSET UNITYSDK_OFFSET(0x3ED1AF0)
#define AC117097F4BBABD7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AC117097F4BBABD7_TypeDefinitionIndex = 15143;

class AC117097F4BBABD7 : public ::System::Object
{
public:
	::System::Int32 A856FA560551B54D(::System::Object* E94C137BF58A3AC1, ::System::Object* E6A42EF1F77EA40B)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + AC117097F4BBABD7_A856FA560551B54D_OFFSET))(this, E94C137BF58A3AC1, E6A42EF1F77EA40B);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC117097F4BBABD7__CTOR_OFFSET))(this);
	}
};
