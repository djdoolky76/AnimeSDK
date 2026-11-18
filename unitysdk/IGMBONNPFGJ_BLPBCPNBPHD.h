#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OBCHINACLEL;

#define IGMBONNPFGJ_BLPBCPNBPHD_JNAKBLHOJFC_OFFSET UNITYSDK_OFFSET(0x1953FB60)
#define IGMBONNPFGJ_BLPBCPNBPHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1953FB50)

inline static constexpr unsigned int IGMBONNPFGJ_BLPBCPNBPHD_TypeDefinitionIndex = 16856;

class IGMBONNPFGJ_BLPBCPNBPHD : public ::System::Object
{
public:
	::System::Int32 ABEFOPGDDBL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMBONNPFGJ_BLPBCPNBPHD__CTOR_OFFSET))(this);
	}

	::System::Boolean JNAKBLHOJFC(::OBCHINACLEL* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::OBCHINACLEL*))((::PBYTE)hIl2Cpp + IGMBONNPFGJ_BLPBCPNBPHD_JNAKBLHOJFC_OFFSET))(this, HAAEBCOBKFF);
	}
};
