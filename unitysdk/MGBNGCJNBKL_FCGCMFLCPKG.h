#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKFCOMPHBLJ_IAGPNNHDDPN;

#define MGBNGCJNBKL_FCGCMFLCPKG_HMCMAEALPEI_OFFSET UNITYSDK_OFFSET(0x14D801D0)
#define MGBNGCJNBKL_FCGCMFLCPKG_LJAEENMAPDM_OFFSET UNITYSDK_OFFSET(0x14D80350)
#define MGBNGCJNBKL_FCGCMFLCPKG_OBMODIIMBPC_OFFSET UNITYSDK_OFFSET(0x14D801B0)
#define MGBNGCJNBKL_FCGCMFLCPKG__CTOR_OFFSET UNITYSDK_OFFSET(0x14D801A0)

inline static constexpr unsigned int MGBNGCJNBKL_FCGCMFLCPKG_TypeDefinitionIndex = 50432;

class MGBNGCJNBKL_FCGCMFLCPKG : public ::System::Object
{
public:
	::AKFCOMPHBLJ_IAGPNNHDDPN* LOHDEOFAANB; // 0x10
	::System::Boolean HANGCOHILOB; // 0x18
	::System::Boolean MHBCDJAADCL; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FCGCMFLCPKG__CTOR_OFFSET))(this);
	}

	::System::Void OBMODIIMBPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FCGCMFLCPKG_OBMODIIMBPC_OFFSET))(this);
	}

	::System::Void HMCMAEALPEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FCGCMFLCPKG_HMCMAEALPEI_OFFSET))(this);
	}

	::System::Void LJAEENMAPDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FCGCMFLCPKG_LJAEENMAPDM_OFFSET))(this);
	}
};
