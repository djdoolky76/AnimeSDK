#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HDOGFPCLFLM;

#define EEEMBLJLGKK_EPIHNEOACMJ_OFFSET UNITYSDK_OFFSET(0x16BDB1A0)
#define EEEMBLJLGKK_IGDOLHLHLKG_OFFSET UNITYSDK_OFFSET(0x16BDB1B0)
#define EEEMBLJLGKK_LKGODHMFKBM_OFFSET UNITYSDK_OFFSET(0x16BDB1D0)
#define EEEMBLJLGKK_OGNLDMBAODO_OFFSET UNITYSDK_OFFSET(0x16BDB1C0)
#define EEEMBLJLGKK__CTOR_OFFSET UNITYSDK_OFFSET(0x16BDB190)

inline static constexpr unsigned int EEEMBLJLGKK_TypeDefinitionIndex = 87206;

class EEEMBLJLGKK : public ::System::Object
{
public:
	::HDOGFPCLFLM* _BONABEOBLBJ_k__BackingField; // 0x10
	::System::Boolean _INHJBABPOPI_k__BackingField; // 0x18

	::System::Void _ctor(::HDOGFPCLFLM* JLBJNAJCFCE, ::System::Boolean LMGLKJMKFBK)
	{
		return ((::System::Void(*)(::PVOID, ::HDOGFPCLFLM*, ::System::Boolean))((::PBYTE)hIl2Cpp + EEEMBLJLGKK__CTOR_OFFSET))(this, JLBJNAJCFCE, LMGLKJMKFBK);
	}

	::System::Boolean EPIHNEOACMJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEEMBLJLGKK_EPIHNEOACMJ_OFFSET))(this);
	}

	::HDOGFPCLFLM* IGDOLHLHLKG()
	{
		return ((::HDOGFPCLFLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEEMBLJLGKK_IGDOLHLHLKG_OFFSET))(this);
	}

	::System::Void OGNLDMBAODO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEEMBLJLGKK_OGNLDMBAODO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LKGODHMFKBM(::HDOGFPCLFLM* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HDOGFPCLFLM*))((::PBYTE)hIl2Cpp + EEEMBLJLGKK_LKGODHMFKBM_OFFSET))(this, EGEGIMGMJHN);
	}
};
