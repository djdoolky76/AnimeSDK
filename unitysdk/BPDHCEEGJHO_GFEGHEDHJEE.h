#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBOOMCHNIBO;

#define BPDHCEEGJHO_GFEGHEDHJEE_NEHKDFEKMBD_OFFSET UNITYSDK_OFFSET(0x18DBA3F0)
#define BPDHCEEGJHO_GFEGHEDHJEE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DB8190)

inline static constexpr unsigned int BPDHCEEGJHO_GFEGHEDHJEE_TypeDefinitionIndex = 73052;

class BPDHCEEGJHO_GFEGHEDHJEE : public ::System::Object
{
public:
	::System::Int32 AECPJJPNAOF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDHCEEGJHO_GFEGHEDHJEE__CTOR_OFFSET))(this);
	}

	::System::Boolean NEHKDFEKMBD(::CBOOMCHNIBO* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::CBOOMCHNIBO*))((::PBYTE)hIl2Cpp + BPDHCEEGJHO_GFEGHEDHJEE_NEHKDFEKMBD_OFFSET))(this, IPMMCGDMODG);
	}
};
