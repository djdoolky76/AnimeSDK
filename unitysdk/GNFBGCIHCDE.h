#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LMAKNBFDMBE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define GNFBGCIHCDE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17ADA530)
#define GNFBGCIHCDE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17ADA450)
#define GNFBGCIHCDE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17ADA9B0)
#define GNFBGCIHCDE_LPHEMMDPCMO_OFFSET UNITYSDK_OFFSET(0x17ADA720)
#define GNFBGCIHCDE__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADA8C0)

inline static constexpr unsigned int GNFBGCIHCDE_TypeDefinitionIndex = 44312;

class GNFBGCIHCDE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* BECGFIIHHAP; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* JECKEINHCJN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFBGCIHCDE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFBGCIHCDE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GNFBGCIHCDE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFBGCIHCDE_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void LPHEMMDPCMO(::System::String* IPOABPNFPHJ, ::LMAKNBFDMBE* EEDGEAKBCAP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::LMAKNBFDMBE*))((::PBYTE)hIl2Cpp + GNFBGCIHCDE_LPHEMMDPCMO_OFFSET))(this, IPOABPNFPHJ, EEDGEAKBCAP);
	}
};
