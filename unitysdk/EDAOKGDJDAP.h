#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IADLOBEMNDI.h"
#include "unitysdk/PONEGOPCLPF.h"
#include "unitysdk/System/Object.h"

class CDNLGHNHLAA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDAOKGDJDAP_HLFPCOJIJLK_OFFSET UNITYSDK_OFFSET(0xF9B94F0)
#define EDAOKGDJDAP_MDFLFBGDICB_OFFSET UNITYSDK_OFFSET(0xF9B94E0)
#define EDAOKGDJDAP_MEKEFGBBNHL_OFFSET UNITYSDK_OFFSET(0xF9B9770)
#define EDAOKGDJDAP_OPKGOPGJDBM_OFFSET UNITYSDK_OFFSET(0xF9B9A70)
#define EDAOKGDJDAP_PIFDENDNKFL_OFFSET UNITYSDK_OFFSET(0xF9B96A0)
#define EDAOKGDJDAP__CTOR_OFFSET UNITYSDK_OFFSET(0xF9B9430)

inline static constexpr unsigned int EDAOKGDJDAP_TypeDefinitionIndex = 70810;

class EDAOKGDJDAP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::CDNLGHNHLAA*>* KLGHDHNGAHG; // 0x10
	::PONEGOPCLPF OIALENJMJGA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAOKGDJDAP__CTOR_OFFSET))(this);
	}

	::PONEGOPCLPF MDFLFBGDICB()
	{
		return ((::PONEGOPCLPF(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAOKGDJDAP_MDFLFBGDICB_OFFSET))(this);
	}

	::PONEGOPCLPF HLFPCOJIJLK()
	{
		return ((::PONEGOPCLPF(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAOKGDJDAP_HLFPCOJIJLK_OFFSET))(this);
	}

	::System::Boolean PIFDENDNKFL(::PONEGOPCLPF PEADLADKAEK, ::IADLOBEMNDI ENICBHIGHCC)
	{
		return ((::System::Boolean(*)(::PVOID, ::PONEGOPCLPF, ::IADLOBEMNDI))((::PBYTE)hIl2Cpp + EDAOKGDJDAP_PIFDENDNKFL_OFFSET))(this, PEADLADKAEK, ENICBHIGHCC);
	}

	::System::Void MEKEFGBBNHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAOKGDJDAP_MEKEFGBBNHL_OFFSET))(this);
	}

	::System::Boolean OPKGOPGJDBM(::PONEGOPCLPF PEADLADKAEK, ::IADLOBEMNDI ENICBHIGHCC)
	{
		return ((::System::Boolean(*)(::PVOID, ::PONEGOPCLPF, ::IADLOBEMNDI))((::PBYTE)hIl2Cpp + EDAOKGDJDAP_OPKGOPGJDBM_OFFSET))(this, PEADLADKAEK, ENICBHIGHCC);
	}
};
