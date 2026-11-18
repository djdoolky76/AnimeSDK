#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNOIIKNFMB.h"
#include "unitysdk/System/Object.h"

#define DOHOINAPPLG___C_ELCDFAJBGLC_OFFSET UNITYSDK_OFFSET(0x101F6070)
#define DOHOINAPPLG___C_MCBLMPNBBHO_OFFSET UNITYSDK_OFFSET(0x101F6080)
#define DOHOINAPPLG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x101F6020)
#define DOHOINAPPLG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x101F6060)

inline static constexpr unsigned int DOHOINAPPLG___c_TypeDefinitionIndex = 23251;

class DOHOINAPPLG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DOHOINAPPLG___c_TypeDefinitionIndex)->GetStaticField(0xF190);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOHOINAPPLG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHOINAPPLG___C__CTOR_OFFSET))(this);
	}

	::MNNOIIKNFMB ELCDFAJBGLC(::System::Int32 HAAEBCOBKFF)
	{
		return ((::MNNOIIKNFMB(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOHOINAPPLG___C_ELCDFAJBGLC_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Int32 MCBLMPNBBHO(::MNNOIIKNFMB HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::MNNOIIKNFMB))((::PBYTE)hIl2Cpp + DOHOINAPPLG___C_MCBLMPNBBHO_OFFSET))(this, HAAEBCOBKFF);
	}
};
