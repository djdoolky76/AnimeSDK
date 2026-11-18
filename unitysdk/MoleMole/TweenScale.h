#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_TWEENSCALE_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x1A0BD920)
#define MOLEMOLE_TWEENSCALE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A0BD780)
#define MOLEMOLE_TWEENSCALE_ILHJGOOPJHI_OFFSET UNITYSDK_OFFSET(0x1A0BD890)
#define MOLEMOLE_TWEENSCALE_PECPJKGEJKM_OFFSET UNITYSDK_OFFSET(0x1A0BD9F0)
#define MOLEMOLE_TWEENSCALE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A0BD7A0)
#define MOLEMOLE_TWEENSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BD9D0)

namespace MoleMole
{
	inline static constexpr unsigned int TweenScale_TypeDefinitionIndex = 80303;

	class TweenScale
	{
	public:
		::UnityEngine::Vector3 HHGILNNMNAK; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENSCALE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_value()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENSCALE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector3 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENSCALE_SET_VALUE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void DFJPMOOOLHM(::System::Single CKELPHPMECF, ::System::Boolean GNFAABJPKPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENSCALE_DFJPMOOOLHM_OFFSET))(this, CKELPHPMECF, GNFAABJPKPN);
		}

		::System::Void PECPJKGEJKM(::UnityEngine::Vector3 MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENSCALE_PECPJKGEJKM_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ILHJGOOPJHI(::UnityEngine::Vector3 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENSCALE_ILHJGOOPJHI_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
