#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AB9D514D998CAE6E__CCTOR_OFFSET UNITYSDK_OFFSET(0x25FFB90)
#define AB9D514D998CAE6E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AB9D514D998CAE6E_TypeDefinitionIndex = 5813;

class AB9D514D998CAE6E : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_BB2DDAB7E26ABF56()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AB9D514D998CAE6E_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AB9D514D998CAE6E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB9D514D998CAE6E__CTOR_OFFSET))(this);
	}
};
