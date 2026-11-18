#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LMAKNBFDMBE;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define NOGKGLJAEDB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x115B0020)
#define NOGKGLJAEDB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x115AFF40)
#define NOGKGLJAEDB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x115B04D0)
#define NOGKGLJAEDB_JLANAIKIENH_OFFSET UNITYSDK_OFFSET(0x115B0240)
#define NOGKGLJAEDB__CTOR_OFFSET UNITYSDK_OFFSET(0x115B03E0)

inline static constexpr unsigned int NOGKGLJAEDB_TypeDefinitionIndex = 69797;

class NOGKGLJAEDB : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* BECGFIIHHAP; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* BFKNKHJEJHA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGKGLJAEDB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGKGLJAEDB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NOGKGLJAEDB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JLANAIKIENH(::System::String* IPOABPNFPHJ, ::LMAKNBFDMBE* JFGMHJOCHGB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::LMAKNBFDMBE*))((::PBYTE)hIl2Cpp + NOGKGLJAEDB_JLANAIKIENH_OFFSET))(this, IPOABPNFPHJ, JFGMHJOCHGB);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGKGLJAEDB_GDEOPIBNOIN_OFFSET))(this);
	}
};
