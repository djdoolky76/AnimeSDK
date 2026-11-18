#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CILGIKDHOCI.h"
#include "unitysdk/HCDCPDGBIMB.h"

class FCBNEBOPNIF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GCBGNAHGLNL_DFILIFBBMLN_OFFSET UNITYSDK_OFFSET(0x13246820)
#define GCBGNAHGLNL_FOLOCLNNPFM_OFFSET UNITYSDK_OFFSET(0x13246890)
#define GCBGNAHGLNL_IGMNDOMOMPP_OFFSET UNITYSDK_OFFSET(0x13246D20)
#define GCBGNAHGLNL_NPHBLJDPFHH_OFFSET UNITYSDK_OFFSET(0x13246830)
#define GCBGNAHGLNL__CTOR_OFFSET UNITYSDK_OFFSET(0x13246CC0)

inline static constexpr unsigned int GCBGNAHGLNL_TypeDefinitionIndex = 84575;

class GCBGNAHGLNL : public ::CILGIKDHOCI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGNAHGLNL__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* DFILIFBBMLN()
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGNAHGLNL_DFILIFBBMLN_OFFSET))(this);
	}

	::System::Single NPHBLJDPFHH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBGNAHGLNL_NPHBLJDPFHH_OFFSET))(this);
	}

	::System::Void FOLOCLNNPFM(::FCBNEBOPNIF* CENFDFIKBDC)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + GCBGNAHGLNL_FOLOCLNNPFM_OFFSET))(this, CENFDFIKBDC);
	}

	::System::Void IGMNDOMOMPP(::FCBNEBOPNIF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + GCBGNAHGLNL_IGMNDOMOMPP_OFFSET))(this, MIALFKCCCPI);
	}
};
