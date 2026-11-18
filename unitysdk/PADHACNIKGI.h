#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace System { class EventArgs; }

#define PADHACNIKGI_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1A7DE260)
#define PADHACNIKGI_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x1A7DE1C0)
#define PADHACNIKGI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A7DE380)
#define PADHACNIKGI_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1A7DE100)
#define PADHACNIKGI_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x1A7DE2F0)
#define PADHACNIKGI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A7DDF10)
#define PADHACNIKGI_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x1A7DE410)
#define PADHACNIKGI_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x1A7DDFB0)
#define PADHACNIKGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DE250)

inline static constexpr unsigned int PADHACNIKGI_TypeDefinitionIndex = 76576;

class PADHACNIKGI : public ::NHPFMFABMEC
{
public:
	::System::Int32 FIKLJGFMMIP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADHACNIKGI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADHACNIKGI_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + PADHACNIKGI_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADHACNIKGI_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PADHACNIKGI_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADHACNIKGI_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + PADHACNIKGI_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADHACNIKGI_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PADHACNIKGI_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI);
	}
};
