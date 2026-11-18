#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IICDJPFNMDC_GCKOJLCEIGL;

#define IICDJPFNMDC_IPIAEMFHLHK_EEEOPNCDOFB_OFFSET UNITYSDK_OFFSET(0xEBDE6E0)
#define IICDJPFNMDC_IPIAEMFHLHK__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDE6D0)

inline static constexpr unsigned int IICDJPFNMDC_IPIAEMFHLHK_TypeDefinitionIndex = 92151;

class IICDJPFNMDC_IPIAEMFHLHK : public ::System::Object
{
public:
	::IICDJPFNMDC_GCKOJLCEIGL* FGBNBFHOKAA; // 0x10
	::System::Int32 NCMOJIPADOD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICDJPFNMDC_IPIAEMFHLHK__CTOR_OFFSET))(this);
	}

	::System::Void EEEOPNCDOFB(::System::Int32 NCMDPBFGEFI, ::System::Int32 JKJJKBDCNPN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IICDJPFNMDC_IPIAEMFHLHK_EEEOPNCDOFB_OFFSET))(this, NCMDPBFGEFI, JKJJKBDCNPN);
	}
};
