#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DGBDKOMIIGF_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1207B8C0)
#define DGBDKOMIIGF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1207B850)
#define DGBDKOMIIGF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1207B710)
#define DGBDKOMIIGF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1207BC30)
#define DGBDKOMIIGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1207BB30)

inline static constexpr unsigned int DGBDKOMIIGF_TypeDefinitionIndex = 66789;

class DGBDKOMIIGF : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* LAFJDOMBEPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBDKOMIIGF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBDKOMIIGF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DGBDKOMIIGF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBDKOMIIGF_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DGBDKOMIIGF_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
