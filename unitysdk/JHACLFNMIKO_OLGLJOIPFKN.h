#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAAFCLHNIBE.h"
#include "unitysdk/System/Object.h"

class FPIHNCDEGEN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHACLFNMIKO_OLGLJOIPFKN_EIKEMJDKKPB_OFFSET UNITYSDK_OFFSET(0x18A14B50)
#define JHACLFNMIKO_OLGLJOIPFKN_HPNBBOMGKJF_OFFSET UNITYSDK_OFFSET(0x18A14B60)
#define JHACLFNMIKO_OLGLJOIPFKN_JCHDNEBJNMI_OFFSET UNITYSDK_OFFSET(0x18A14B70)
#define JHACLFNMIKO_OLGLJOIPFKN_LHMKIKEHGGO_OFFSET UNITYSDK_OFFSET(0x18A14B30)
#define JHACLFNMIKO_OLGLJOIPFKN_PNNKNDJILAA_OFFSET UNITYSDK_OFFSET(0x18A14B40)
#define JHACLFNMIKO_OLGLJOIPFKN_PODKFDCCFOC_OFFSET UNITYSDK_OFFSET(0x18A14B20)
#define JHACLFNMIKO_OLGLJOIPFKN__CTOR_OFFSET UNITYSDK_OFFSET(0x18A14A80)

inline static constexpr unsigned int JHACLFNMIKO_OLGLJOIPFKN_TypeDefinitionIndex = 54600;

class JHACLFNMIKO_OLGLJOIPFKN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* _ICEHGGHEPFI_k__BackingField; // 0x10
	::FPIHNCDEGEN* _AHFBGGPNBIN_k__BackingField; // 0x18
	::KAAFCLHNIBE _KINIAPEIMCH_k__BackingField; // 0x20

	::System::Void _ctor(::FPIHNCDEGEN* GFEHDJEOEIA)
	{
		return ((::System::Void(*)(::PVOID, ::FPIHNCDEGEN*))((::PBYTE)hIl2Cpp + JHACLFNMIKO_OLGLJOIPFKN__CTOR_OFFSET))(this, GFEHDJEOEIA);
	}

	::FPIHNCDEGEN* PODKFDCCFOC()
	{
		return ((::FPIHNCDEGEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHACLFNMIKO_OLGLJOIPFKN_PODKFDCCFOC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LHMKIKEHGGO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHACLFNMIKO_OLGLJOIPFKN_LHMKIKEHGGO_OFFSET))(this);
	}

	::KAAFCLHNIBE PNNKNDJILAA()
	{
		return ((::KAAFCLHNIBE(*)(::PVOID))((::PBYTE)hIl2Cpp + JHACLFNMIKO_OLGLJOIPFKN_PNNKNDJILAA_OFFSET))(this);
	}

	::System::Void EIKEMJDKKPB(::FPIHNCDEGEN* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FPIHNCDEGEN*))((::PBYTE)hIl2Cpp + JHACLFNMIKO_OLGLJOIPFKN_EIKEMJDKKPB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HPNBBOMGKJF(::System::Collections::Generic::List_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + JHACLFNMIKO_OLGLJOIPFKN_HPNBBOMGKJF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JCHDNEBJNMI(::KAAFCLHNIBE EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KAAFCLHNIBE))((::PBYTE)hIl2Cpp + JHACLFNMIKO_OLGLJOIPFKN_JCHDNEBJNMI_OFFSET))(this, EGEGIMGMJHN);
	}
};
