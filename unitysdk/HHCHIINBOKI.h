#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LGINJIKKBJA;

#define HHCHIINBOKI_AHKIHLKGHHF_OFFSET UNITYSDK_OFFSET(0x14D2CCB0)
#define HHCHIINBOKI_AINKOMDFELI_OFFSET UNITYSDK_OFFSET(0x14D2CB30)
#define HHCHIINBOKI_BFOGFBPMMNN_OFFSET UNITYSDK_OFFSET(0x14D2CC50)
#define HHCHIINBOKI_BPIDHEMCPCK_OFFSET UNITYSDK_OFFSET(0x14D2C9B0)
#define HHCHIINBOKI_DGMBCBMOKJP_OFFSET UNITYSDK_OFFSET(0x14D2CBB0)
#define HHCHIINBOKI_KOACFDPMPNC_OFFSET UNITYSDK_OFFSET(0x14D2CC00)
#define HHCHIINBOKI_LDJMLGGGPFP_OFFSET UNITYSDK_OFFSET(0x14D2CCA0)
#define HHCHIINBOKI_LNGHGNNIFAO_OFFSET UNITYSDK_OFFSET(0x14D2CAE0)
#define HHCHIINBOKI__CTOR_OFFSET UNITYSDK_OFFSET(0x14D2C9A0)

inline static constexpr unsigned int HHCHIINBOKI_TypeDefinitionIndex = 54112;

class HHCHIINBOKI : public ::System::Object
{
public:
	::LGINJIKKBJA* ABIFIAALJAD; // 0x10
	::System::Boolean _GFILKMACFEB_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCHIINBOKI__CTOR_OFFSET))(this);
	}

	::System::Void BPIDHEMCPCK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCHIINBOKI_BPIDHEMCPCK_OFFSET))(this);
	}

	::System::Void LNGHGNNIFAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCHIINBOKI_LNGHGNNIFAO_OFFSET))(this);
	}

	::System::Void AINKOMDFELI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCHIINBOKI_AINKOMDFELI_OFFSET))(this);
	}

	::System::Void DGMBCBMOKJP(::LGINJIKKBJA* DNLDJKDCCEP)
	{
		return ((::System::Void(*)(::PVOID, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + HHCHIINBOKI_DGMBCBMOKJP_OFFSET))(this, DNLDJKDCCEP);
	}

	::System::Void KOACFDPMPNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCHIINBOKI_KOACFDPMPNC_OFFSET))(this);
	}

	::System::Void BFOGFBPMMNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCHIINBOKI_BFOGFBPMMNN_OFFSET))(this);
	}

	::System::Boolean LDJMLGGGPFP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCHIINBOKI_LDJMLGGGPFP_OFFSET))(this);
	}

	::System::Void AHKIHLKGHHF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HHCHIINBOKI_AHKIHLKGHHF_OFFSET))(this, EGEGIMGMJHN);
	}
};
