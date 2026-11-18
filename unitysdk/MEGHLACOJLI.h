#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define MEGHLACOJLI_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x177B1FF0)
#define MEGHLACOJLI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x177B1F80)
#define MEGHLACOJLI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x177B1BB0)
#define MEGHLACOJLI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x177B26C0)
#define MEGHLACOJLI__CTOR_OFFSET UNITYSDK_OFFSET(0x177B23D0)

inline static constexpr unsigned int MEGHLACOJLI_TypeDefinitionIndex = 59788;

class MEGHLACOJLI : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* FNJHLDEDLEJ; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* GPJOOJKCAFE; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* NCJLCLJLACN; // 0x28
	::KCMIFNGABDC_1<::System::String*>* JKNKGMEFBPJ; // 0x30
	::KCMIFNGABDC_1<::System::String*>* BJKJPDICKLN; // 0x38
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x40
	::CPABOPKIGAL* MMFNFINOFPN; // 0x48
	::KCMIFNGABDC_1<::System::Boolean>* ADLFODKDJIB; // 0x50
	::KCMIFNGABDC_1<::System::Int32>* BGDAKEIHKJN; // 0x58
	::CPABOPKIGAL* PLEJMLIFFHG; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGHLACOJLI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGHLACOJLI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MEGHLACOJLI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGHLACOJLI_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MEGHLACOJLI_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
