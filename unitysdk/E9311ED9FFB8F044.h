#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::Splines::CatmullRom { class Spline; }

#define E9311ED9FFB8F044_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x26D0680)
#define E9311ED9FFB8F044_A306622175CA85D4_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E9311ED9FFB8F044_AA67573C87992901_OFFSET UNITYSDK_OFFSET(0x26D08E0)
#define E9311ED9FFB8F044_BC290B54D7631914_OFFSET UNITYSDK_OFFSET(0x26D09A0)
#define E9311ED9FFB8F044_E6586E0EEA140DAF_OFFSET UNITYSDK_OFFSET(0x26D0820)
#define E9311ED9FFB8F044__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9311ED9FFB8F044_TypeDefinitionIndex = 6640;

class E9311ED9FFB8F044 : public ::System::Object
{
public:
	::ABC::Splines::CatmullRom::Spline* B9850AFF3DBCC0D9; // 0x10
	::UnityEngine::ACF10FE87B4C5617 AD102466DA36013D; // 0x18
	::UnityEngine::ACF10FE87B4C5617 A7056DCA37827CED; // 0x58

	::UnityEngine::Vector3 BC290B54D7631914(::UnityEngine::Vector3 A0556B8B541B6D55)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + E9311ED9FFB8F044_BC290B54D7631914_OFFSET))(this, A0556B8B541B6D55);
	}

	::UnityEngine::Vector3 AA67573C87992901(::UnityEngine::Vector3 EB211B01816ACA79)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + E9311ED9FFB8F044_AA67573C87992901_OFFSET))(this, EB211B01816ACA79);
	}

	::UnityEngine::Vector3 E6586E0EEA140DAF(::UnityEngine::Vector3 EB211B01816ACA79)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + E9311ED9FFB8F044_E6586E0EEA140DAF_OFFSET))(this, EB211B01816ACA79);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9311ED9FFB8F044__CTOR_OFFSET))(this);
	}

	::System::Void A1E97155B145443C(::ABC::Splines::CatmullRom::Spline* F03E0BDCBABB08A2, ::UnityEngine::Vector3 EB211B01816ACA79, ::UnityEngine::Quaternion A0556B8B541B6D55)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Splines::CatmullRom::Spline*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + E9311ED9FFB8F044_A1E97155B145443C_OFFSET))(this, F03E0BDCBABB08A2, EB211B01816ACA79, A0556B8B541B6D55);
	}

	::ABC::Splines::CatmullRom::Spline* A306622175CA85D4()
	{
		return ((::ABC::Splines::CatmullRom::Spline*(*)(::PVOID))((::PBYTE)hIl2Cpp + E9311ED9FFB8F044_A306622175CA85D4_OFFSET))(this);
	}
};
