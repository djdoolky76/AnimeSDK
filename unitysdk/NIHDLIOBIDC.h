#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NIHDLIOBIDC_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x12896440)
#define NIHDLIOBIDC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x128963D0)
#define NIHDLIOBIDC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12896170)
#define NIHDLIOBIDC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12896950)
#define NIHDLIOBIDC__CTOR_OFFSET UNITYSDK_OFFSET(0x12896790)

inline static constexpr unsigned int NIHDLIOBIDC_TypeDefinitionIndex = 77507;

class NIHDLIOBIDC : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* GPJOOJKCAFE; // 0x20
	::KCMIFNGABDC_1<::System::String*>* BJKJPDICKLN; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* NCJLCLJLACN; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* BGDAKEIHKJN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHDLIOBIDC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHDLIOBIDC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NIHDLIOBIDC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NIHDLIOBIDC_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHDLIOBIDC_GDEOPIBNOIN_OFFSET))(this);
	}
};
