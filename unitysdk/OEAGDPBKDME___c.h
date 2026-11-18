#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOPKDJLEPOA.h"
#include "unitysdk/System/Object.h"

#define OEAGDPBKDME___C_FEMONLAKLFI_OFFSET UNITYSDK_OFFSET(0x1DC03060)
#define OEAGDPBKDME___C_FJHNNEIDODL_OFFSET UNITYSDK_OFFSET(0x1DC03090)
#define OEAGDPBKDME___C_GKAICBFBOGC_OFFSET UNITYSDK_OFFSET(0x1DC03080)
#define OEAGDPBKDME___C_ICOEKOKJHBA_OFFSET UNITYSDK_OFFSET(0x1DC03070)
#define OEAGDPBKDME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC03010)
#define OEAGDPBKDME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC03050)

inline static constexpr unsigned int OEAGDPBKDME___c_TypeDefinitionIndex = 24103;

class OEAGDPBKDME___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OEAGDPBKDME___c_TypeDefinitionIndex)->GetStaticField(0x19170);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEAGDPBKDME___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAGDPBKDME___C__CTOR_OFFSET))(this);
	}

	::System::Int32 FEMONLAKLFI(::MOPKDJLEPOA HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::MOPKDJLEPOA))((::PBYTE)hIl2Cpp + OEAGDPBKDME___C_FEMONLAKLFI_OFFSET))(this, HAAEBCOBKFF);
	}

	::MOPKDJLEPOA ICOEKOKJHBA(::System::Int32 HAAEBCOBKFF)
	{
		return ((::MOPKDJLEPOA(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEAGDPBKDME___C_ICOEKOKJHBA_OFFSET))(this, HAAEBCOBKFF);
	}

	::MOPKDJLEPOA GKAICBFBOGC(::System::Int32 HAAEBCOBKFF)
	{
		return ((::MOPKDJLEPOA(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEAGDPBKDME___C_GKAICBFBOGC_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Int32 FJHNNEIDODL(::MOPKDJLEPOA HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::MOPKDJLEPOA))((::PBYTE)hIl2Cpp + OEAGDPBKDME___C_FJHNNEIDODL_OFFSET))(this, HAAEBCOBKFF);
	}
};
