#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJHKEAFOAF.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define FAODJJNBPFG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17134A10)
#define FAODJJNBPFG_CJKMFLMGEDA_OFFSET UNITYSDK_OFFSET(0x17134C00)
#define FAODJJNBPFG_HKDKLOJKOIC_OFFSET UNITYSDK_OFFSET(0x171348E0)
#define FAODJJNBPFG_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x17134C80)
#define FAODJJNBPFG_MFMNPBOHNMI_OFFSET UNITYSDK_OFFSET(0x17134B80)
#define FAODJJNBPFG_PKCGNAPAHKO_OFFSET UNITYSDK_OFFSET(0x17134990)
#define FAODJJNBPFG__CTOR_OFFSET UNITYSDK_OFFSET(0x171348D0)

inline static constexpr unsigned int FAODJJNBPFG_TypeDefinitionIndex = 42514;

class FAODJJNBPFG : public ::System::Object
{
public:
	::LLJHKEAFOAF HACJFKBLODH; // 0x10
	::System::Action_1<::System::Int32>* FIOBPNOGCNB; // 0x20
	::System::Int32 AKGGKGEPJLP; // 0x28
	::System::Int32 FAINKMBMLNE; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAODJJNBPFG__CTOR_OFFSET))(this);
	}

	::System::Void HKDKLOJKOIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAODJJNBPFG_HKDKLOJKOIC_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 FAINKMBMLNE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAODJJNBPFG_BBOMJDBNHIC_OFFSET))(this, FAINKMBMLNE);
	}

	::System::Void MFMNPBOHNMI(::System::Action_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FAODJJNBPFG_MFMNPBOHNMI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CJKMFLMGEDA(::System::Action_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FAODJJNBPFG_CJKMFLMGEDA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PKCGNAPAHKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAODJJNBPFG_PKCGNAPAHKO_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAODJJNBPFG_LJMIPGJJELP_OFFSET))(this);
	}
};
