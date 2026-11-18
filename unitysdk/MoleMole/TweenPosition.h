#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_TWEENPOSITION_ACALKPGHILE_OFFSET UNITYSDK_OFFSET(0x19D01B90)
#define MOLEMOLE_TWEENPOSITION_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x19D01C20)
#define MOLEMOLE_TWEENPOSITION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19D01A80)
#define MOLEMOLE_TWEENPOSITION_PECPJKGEJKM_OFFSET UNITYSDK_OFFSET(0x19D01CF0)
#define MOLEMOLE_TWEENPOSITION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19D01AA0)
#define MOLEMOLE_TWEENPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x19D01CD0)

namespace MoleMole
{
	inline static constexpr unsigned int TweenPosition_TypeDefinitionIndex = 89684;

	class TweenPosition
	{
	public:
		::UnityEngine::Vector3 HHGILNNMNAK; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENPOSITION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_value()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENPOSITION_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector3 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENPOSITION_SET_VALUE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void DFJPMOOOLHM(::System::Single CKELPHPMECF, ::System::Boolean GNFAABJPKPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENPOSITION_DFJPMOOOLHM_OFFSET))(this, CKELPHPMECF, GNFAABJPKPN);
		}

		::System::Void ACALKPGHILE(::UnityEngine::Vector3 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENPOSITION_ACALKPGHILE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void PECPJKGEJKM(::UnityEngine::Vector3 MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENPOSITION_PECPJKGEJKM_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
