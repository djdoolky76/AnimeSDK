#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NLAGJLKPALA_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x17299DF0)
#define NLAGJLKPALA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17299D80)
#define NLAGJLKPALA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17299C40)
#define NLAGJLKPALA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1729A150)
#define NLAGJLKPALA__CTOR_OFFSET UNITYSDK_OFFSET(0x1729A050)

inline static constexpr unsigned int NLAGJLKPALA_TypeDefinitionIndex = 85593;

class NLAGJLKPALA : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* LAFJDOMBEPG; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGJLKPALA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGJLKPALA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NLAGJLKPALA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NLAGJLKPALA_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGJLKPALA_GDEOPIBNOIN_OFFSET))(this);
	}
};
