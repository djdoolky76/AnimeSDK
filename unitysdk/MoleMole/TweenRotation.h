#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_TWEENROTATION_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x189755D0)
#define MOLEMOLE_TWEENROTATION_FKMOKFNLFOA_OFFSET UNITYSDK_OFFSET(0x18975490)
#define MOLEMOLE_TWEENROTATION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x189753E0)
#define MOLEMOLE_TWEENROTATION_PECPJKGEJKM_OFFSET UNITYSDK_OFFSET(0x189756E0)
#define MOLEMOLE_TWEENROTATION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18975400)
#define MOLEMOLE_TWEENROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x189756D0)

namespace MoleMole
{
	inline static constexpr unsigned int TweenRotation_TypeDefinitionIndex = 64221;

	class TweenRotation
	{
	public:
		::System::Boolean isLocal; // 0xA0
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 HHGILNNMNAK; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENROTATION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_value()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENROTATION_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector3 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENROTATION_SET_VALUE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void DFJPMOOOLHM(::System::Single CKELPHPMECF, ::System::Boolean GNFAABJPKPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENROTATION_DFJPMOOOLHM_OFFSET))(this, CKELPHPMECF, GNFAABJPKPN);
		}

		::System::Void PECPJKGEJKM(::UnityEngine::Vector3 MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENROTATION_PECPJKGEJKM_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void FKMOKFNLFOA(::UnityEngine::Vector3 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENROTATION_FKMOKFNLFOA_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
