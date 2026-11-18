#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELEAAKFDPL.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/HCDCPDGBIMB.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FIENOGOJDPC_CCDAPPHOGIG_OFFSET UNITYSDK_OFFSET(0x15E64A90)
#define FIENOGOJDPC_DCNMDPOJKBJ_OFFSET UNITYSDK_OFFSET(0x15E64B10)
#define FIENOGOJDPC_DFILIFBBMLN_OFFSET UNITYSDK_OFFSET(0x15E64A80)
#define FIENOGOJDPC_DLBBDLJPPBO_OFFSET UNITYSDK_OFFSET(0x15E64AA0)
#define FIENOGOJDPC_HCPGALIGDFH_OFFSET UNITYSDK_OFFSET(0x15E64A70)
#define FIENOGOJDPC_JPJLHGHIOMA_OFFSET UNITYSDK_OFFSET(0x15E64CE0)
#define FIENOGOJDPC_JPMNBOHLDPP_OFFSET UNITYSDK_OFFSET(0x15E64DB0)
#define FIENOGOJDPC_LGLFOPDPLDI_OFFSET UNITYSDK_OFFSET(0x15E64D90)
#define FIENOGOJDPC_MOFEMHGDIKC_OFFSET UNITYSDK_OFFSET(0x15E64E70)
#define FIENOGOJDPC_NPHBLJDPFHH_OFFSET UNITYSDK_OFFSET(0x15E64AB0)
#define FIENOGOJDPC__CTOR_OFFSET UNITYSDK_OFFSET(0x15E64DA0)

inline static constexpr unsigned int FIENOGOJDPC_TypeDefinitionIndex = 88109;

class FIENOGOJDPC : public ::CELEAAKFDPL
{
public:
	::System::Boolean _GIHELOPAJNG_k__BackingField; // 0x2F8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIENOGOJDPC__CTOR_OFFSET))(this);
	}

	::System::Boolean HCPGALIGDFH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIENOGOJDPC_HCPGALIGDFH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* DFILIFBBMLN()
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIENOGOJDPC_DFILIFBBMLN_OFFSET))(this);
	}

	::System::Boolean CCDAPPHOGIG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIENOGOJDPC_CCDAPPHOGIG_OFFSET))(this);
	}

	::System::Void DLBBDLJPPBO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FIENOGOJDPC_DLBBDLJPPBO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single NPHBLJDPFHH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FIENOGOJDPC_NPHBLJDPFHH_OFFSET))(this);
	}

	::System::Boolean DCNMDPOJKBJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIENOGOJDPC_DCNMDPOJKBJ_OFFSET))(this);
	}

	::System::Boolean JPJLHGHIOMA(::MoleMole::ESystemSettingType JELHEKJMJNI, ::System::Boolean& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + FIENOGOJDPC_JPJLHGHIOMA_OFFSET))(this, JELHEKJMJNI, IGAAKDOIPNN);
	}

	::System::Boolean LGLFOPDPLDI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIENOGOJDPC_LGLFOPDPLDI_OFFSET))(this);
	}

	::System::Boolean JPMNBOHLDPP(::MoleMole::ESystemSettingType MIALFKCCCPI, ::System::Boolean& KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + FIENOGOJDPC_JPMNBOHLDPP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean MOFEMHGDIKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIENOGOJDPC_MOFEMHGDIKC_OFFSET))(this);
	}
};
