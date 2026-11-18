#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEHDOJLEONM.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define LNAIJNGBMPO_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x12597030)
#define LNAIJNGBMPO_HIPIJKDJCMJ_OFFSET UNITYSDK_OFFSET(0x12597000)
#define LNAIJNGBMPO_KAPEFPIKDGK_OFFSET UNITYSDK_OFFSET(0x12597020)
#define LNAIJNGBMPO_LAFDAPPOBGL_OFFSET UNITYSDK_OFFSET(0x12597010)
#define LNAIJNGBMPO__CTOR_OFFSET UNITYSDK_OFFSET(0x12597070)

inline static constexpr unsigned int LNAIJNGBMPO_TypeDefinitionIndex = 86218;

class LNAIJNGBMPO : public ::System::Object
{
public:
	::System::Nullable_1<::System::Boolean> FLGLBFCHOLI; // 0x10
	::System::UInt32 _HJNNNIIKNDP_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAIJNGBMPO__CTOR_OFFSET))(this);
	}

	::FEHDOJLEONM HIPIJKDJCMJ()
	{
		return ((::FEHDOJLEONM(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAIJNGBMPO_HIPIJKDJCMJ_OFFSET))(this);
	}

	::System::UInt32 LAFDAPPOBGL()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAIJNGBMPO_LAFDAPPOBGL_OFFSET))(this);
	}

	::System::Void KAPEFPIKDGK(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNAIJNGBMPO_KAPEFPIKDGK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Nullable_1<::System::Boolean> FCFOEJGPDNO()
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAIJNGBMPO_FCFOEJGPDNO_OFFSET))(this);
	}
};
