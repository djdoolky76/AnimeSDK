#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define BLALPFFGLCF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14EE3FF0)
#define BLALPFFGLCF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14EE3E40)
#define BLALPFFGLCF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14EE4380)
#define BLALPFFGLCF_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x14EE4410)
#define BLALPFFGLCF_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x14EE3CF0)
#define BLALPFFGLCF__CTOR_OFFSET UNITYSDK_OFFSET(0x14EE4220)

inline static constexpr unsigned int BLALPFFGLCF_TypeDefinitionIndex = 68012;

class BLALPFFGLCF : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Single>* FILAMFLMBHK; // 0x18
	::KCMIFNGABDC_1<::System::Single>* OOFCONDMLOI; // 0x20
	::KCMIFNGABDC_1<::System::String*>* PKEDJBBLPEN; // 0x28
	::KCMIFNGABDC_1<::System::Single>* BNPIAOEJJGF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLALPFFGLCF__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + BLALPFFGLCF_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLALPFFGLCF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BLALPFFGLCF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLALPFFGLCF_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + BLALPFFGLCF_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
