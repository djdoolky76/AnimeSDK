#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LJPMBKEGOLI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHMCGJNCBLI_JGLHOECIBOP_OFFSET UNITYSDK_OFFSET(0x1518A4E0)
#define LHMCGJNCBLI_LBFOAOODGCL_OFFSET UNITYSDK_OFFSET(0x1518A4D0)
#define LHMCGJNCBLI_NGHAPLEOBPN_OFFSET UNITYSDK_OFFSET(0x1518A6A0)
#define LHMCGJNCBLI_PBNOKINKFKA_OFFSET UNITYSDK_OFFSET(0x1518A880)
#define LHMCGJNCBLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1518A4C0)

inline static constexpr unsigned int LHMCGJNCBLI_TypeDefinitionIndex = 76734;

class LHMCGJNCBLI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LJPMBKEGOLI*>* _GGBJGMNPFJJ_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMCGJNCBLI__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::LJPMBKEGOLI*>* LBFOAOODGCL()
	{
		return ((::System::Collections::Generic::List_1<::LJPMBKEGOLI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMCGJNCBLI_LBFOAOODGCL_OFFSET))(this);
	}

	::System::Void JGLHOECIBOP(::System::UInt32 OMDKMGLNMMC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHMCGJNCBLI_JGLHOECIBOP_OFFSET))(this, OMDKMGLNMMC);
	}

	::System::Void NGHAPLEOBPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMCGJNCBLI_NGHAPLEOBPN_OFFSET))(this);
	}

	::System::Void PBNOKINKFKA(::System::Collections::Generic::List_1<::LJPMBKEGOLI*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LJPMBKEGOLI*>*))((::PBYTE)hIl2Cpp + LHMCGJNCBLI_PBNOKINKFKA_OFFSET))(this, EGEGIMGMJHN);
	}
};
