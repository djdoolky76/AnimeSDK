#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define MOLEMOLE_TWEENQUATERNION_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x162FD110)
#define MOLEMOLE_TWEENQUATERNION_FKMOKFNLFOA_OFFSET UNITYSDK_OFFSET(0x162FD060)
#define MOLEMOLE_TWEENQUATERNION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x162FCFE0)
#define MOLEMOLE_TWEENQUATERNION_PECPJKGEJKM_OFFSET UNITYSDK_OFFSET(0x162FD220)
#define MOLEMOLE_TWEENQUATERNION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x162FCFF0)
#define MOLEMOLE_TWEENQUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x162FD210)

namespace MoleMole
{
	inline static constexpr unsigned int TweenQuaternion_TypeDefinitionIndex = 39945;

	class TweenQuaternion
	{
	public:
		::System::Boolean isLocal; // 0xA8
		::System::Byte _padding0[0x3];
		::UnityEngine::Quaternion HHGILNNMNAK; // 0xAC
		::UnityEngine::Quaternion IHEKJELGJKI; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENQUATERNION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_value()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENQUATERNION_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Quaternion EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENQUATERNION_SET_VALUE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void DFJPMOOOLHM(::System::Single CKELPHPMECF, ::System::Boolean GNFAABJPKPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENQUATERNION_DFJPMOOOLHM_OFFSET))(this, CKELPHPMECF, GNFAABJPKPN);
		}

		::System::Void FKMOKFNLFOA(::UnityEngine::Quaternion BFBELMDIAHI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENQUATERNION_FKMOKFNLFOA_OFFSET))(this, BFBELMDIAHI);
		}

		::System::Void PECPJKGEJKM(::UnityEngine::Quaternion MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENQUATERNION_PECPJKGEJKM_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
