#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BD3A9F619D176EFE.h"

class AB642D1382756991;
namespace System { class Object; }

#define F6F2C30D656B97DC_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x171F4E0)
#define F6F2C30D656B97DC_BE45898387226EEC_OFFSET UNITYSDK_OFFSET(0x1678550)
#define F6F2C30D656B97DC_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x171F410)
#define F6F2C30D656B97DC__CTOR_OFFSET UNITYSDK_OFFSET(0x1678540)

inline static constexpr unsigned int F6F2C30D656B97DC_TypeDefinitionIndex = 687;

class F6F2C30D656B97DC : public ::BD3A9F619D176EFE
{
public:
	::AB642D1382756991* E63E0F25F251B753; // 0x18

	::System::Boolean BE45898387226EEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F6F2C30D656B97DC_BE45898387226EEC_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + F6F2C30D656B97DC_FC3208D7B8C7EE04_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + F6F2C30D656B97DC_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6F2C30D656B97DC__CTOR_OFFSET))(this);
	}
};
