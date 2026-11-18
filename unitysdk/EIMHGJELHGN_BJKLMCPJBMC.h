#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KCIHKKOICHL_BHGAOMIOGJD.h"

class EIMHGJELHGN;
namespace System { template <typename T1, typename T2> class Action_2; }

#define EIMHGJELHGN_BJKLMCPJBMC_COJCPLPOBME_OFFSET UNITYSDK_OFFSET(0x158B1E90)
#define EIMHGJELHGN_BJKLMCPJBMC_PNMAMCFOPKJ_OFFSET UNITYSDK_OFFSET(0x158B1E20)
#define EIMHGJELHGN_BJKLMCPJBMC__CTOR_OFFSET UNITYSDK_OFFSET(0x158B1E10)

inline static constexpr unsigned int EIMHGJELHGN_BJKLMCPJBMC_TypeDefinitionIndex = 73407;

class EIMHGJELHGN_BJKLMCPJBMC : public ::System::Object
{
public:
	::System::Action_2<::System::UInt32, ::System::Boolean>* NIFMMBPIJFO; // 0x10
	::MoleMole::EntityHandle HPADNAEINPK; // 0x18
	::EIMHGJELHGN* KLHPEBKNIFB; // 0x28
	::System::Action_2<::System::UInt32, ::System::Boolean>* GPBGKDKOJAJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMHGJELHGN_BJKLMCPJBMC__CTOR_OFFSET))(this);
	}

	::System::Void PNMAMCFOPKJ(::System::UInt32 JCPNDFAEOLI, ::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + EIMHGJELHGN_BJKLMCPJBMC_PNMAMCFOPKJ_OFFSET))(this, JCPNDFAEOLI, EBFCACIEKBC);
	}

	::System::Void COJCPLPOBME(::KCIHKKOICHL_BHGAOMIOGJD OKKAINBPMKN)
	{
		return ((::System::Void(*)(::PVOID, ::KCIHKKOICHL_BHGAOMIOGJD))((::PBYTE)hIl2Cpp + EIMHGJELHGN_BJKLMCPJBMC_COJCPLPOBME_OFFSET))(this, OKKAINBPMKN);
	}
};
