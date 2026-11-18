#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEHDOJLEONM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

#define GJPJHHLHCGA_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x10EFDC00)
#define GJPJHHLHCGA_HIPIJKDJCMJ_OFFSET UNITYSDK_OFFSET(0x10EFDBD0)
#define GJPJHHLHCGA_KAPEFPIKDGK_OFFSET UNITYSDK_OFFSET(0x10EFDBF0)
#define GJPJHHLHCGA_LAFDAPPOBGL_OFFSET UNITYSDK_OFFSET(0x10EFDBE0)
#define GJPJHHLHCGA__CTOR_OFFSET UNITYSDK_OFFSET(0x10EFDDC0)

inline static constexpr unsigned int GJPJHHLHCGA_TypeDefinitionIndex = 48099;

class GJPJHHLHCGA : public ::System::Object
{
public:
	::System::UInt32 _HJNNNIIKNDP_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPJHHLHCGA__CTOR_OFFSET))(this);
	}

	::FEHDOJLEONM HIPIJKDJCMJ()
	{
		return ((::FEHDOJLEONM(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPJHHLHCGA_HIPIJKDJCMJ_OFFSET))(this);
	}

	::System::UInt32 LAFDAPPOBGL()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPJHHLHCGA_LAFDAPPOBGL_OFFSET))(this);
	}

	::System::Void KAPEFPIKDGK(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJPJHHLHCGA_KAPEFPIKDGK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Nullable_1<::System::Boolean> FCFOEJGPDNO()
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPJHHLHCGA_FCFOEJGPDNO_OFFSET))(this);
	}
};
