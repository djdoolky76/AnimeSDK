#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class JIOLFCAGOFH_1;

#define GDKGGLCFDHD_DMOLIELPHPA_OFFSET UNITYSDK_OFFSET(0x116E39E0)
#define GDKGGLCFDHD_KOGHOGPOOEH_OFFSET UNITYSDK_OFFSET(0x116E39C0)
#define GDKGGLCFDHD_NGIGLEAHIFG_OFFSET UNITYSDK_OFFSET(0x116E39B0)
#define GDKGGLCFDHD_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x116E38F0)
#define GDKGGLCFDHD_PPAFGBILMME_OFFSET UNITYSDK_OFFSET(0x116E39D0)
#define GDKGGLCFDHD__CTOR_OFFSET UNITYSDK_OFFSET(0x116E39A0)

inline static constexpr unsigned int GDKGGLCFDHD_TypeDefinitionIndex = 87566;

class GDKGGLCFDHD : public ::JJEJBPGJPJN
{
public:
	::JIOLFCAGOFH_1<::System::Single>* _MOJIHAILMDL_k__BackingField; // 0x88
	::JIOLFCAGOFH_1<::System::Single>* _KGAJKJOLEFB_k__BackingField; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKGGLCFDHD__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKGGLCFDHD_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void NGIGLEAHIFG(::JIOLFCAGOFH_1<::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Single>*))((::PBYTE)hIl2Cpp + GDKGGLCFDHD_NGIGLEAHIFG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KOGHOGPOOEH(::JIOLFCAGOFH_1<::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Single>*))((::PBYTE)hIl2Cpp + GDKGGLCFDHD_KOGHOGPOOEH_OFFSET))(this, EGEGIMGMJHN);
	}

	::JIOLFCAGOFH_1<::System::Single>* PPAFGBILMME()
	{
		return ((::JIOLFCAGOFH_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKGGLCFDHD_PPAFGBILMME_OFFSET))(this);
	}

	::JIOLFCAGOFH_1<::System::Single>* DMOLIELPHPA()
	{
		return ((::JIOLFCAGOFH_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKGGLCFDHD_DMOLIELPHPA_OFFSET))(this);
	}
};
