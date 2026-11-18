#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGKOFMFKNNO.h"

#define EGJGEPFAKCI_FMABPPLAAOA_OFFSET UNITYSDK_OFFSET(0x10638690)
#define EGJGEPFAKCI_IEILPCBGCEP_OFFSET UNITYSDK_OFFSET(0x10638680)
#define EGJGEPFAKCI_JCECHGAAKCG_OFFSET UNITYSDK_OFFSET(0x106386A0)
#define EGJGEPFAKCI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x106386B0)
#define EGJGEPFAKCI_MAOIIBGHOJI_OFFSET UNITYSDK_OFFSET(0x10638670)
#define EGJGEPFAKCI__CTOR_OFFSET UNITYSDK_OFFSET(0x10638660)

inline static constexpr unsigned int EGJGEPFAKCI_TypeDefinitionIndex = 71272;

class EGJGEPFAKCI : public ::IGKOFMFKNNO
{
public:
	::System::Int32 _BFNABPKBFBN_k__BackingField; // 0x10
	::System::Int32 _CCJGEFICEID_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJGEPFAKCI__CTOR_OFFSET))(this);
	}

	::System::Int32 MAOIIBGHOJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJGEPFAKCI_MAOIIBGHOJI_OFFSET))(this);
	}

	::System::Int32 IEILPCBGCEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJGEPFAKCI_IEILPCBGCEP_OFFSET))(this);
	}

	::System::Void FMABPPLAAOA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGJGEPFAKCI_FMABPPLAAOA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JCECHGAAKCG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGJGEPFAKCI_JCECHGAAKCG_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::EGJGEPFAKCI* JFDOOELFAOA()
	{
		return ((::EGJGEPFAKCI*(*)())((::PBYTE)hIl2Cpp + EGJGEPFAKCI_JFDOOELFAOA_OFFSET))();
	}
};
