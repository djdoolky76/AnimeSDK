#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_TWEENFOV_CNBEDIGHDFJ_OFFSET UNITYSDK_OFFSET(0x1C0E6AB0)
#define MOLEMOLE_TWEENFOV_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x1C0E6CA0)
#define MOLEMOLE_TWEENFOV_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C0E6A20)
#define MOLEMOLE_TWEENFOV_PECPJKGEJKM_OFFSET UNITYSDK_OFFSET(0x1C0E6DB0)
#define MOLEMOLE_TWEENFOV_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C0E6A30)
#define MOLEMOLE_TWEENFOV__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E6D90)

namespace MoleMole
{
	inline static constexpr unsigned int TweenFov_TypeDefinitionIndex = 50049;

	class TweenFov
	{
	public:
		::System::Single HHGILNNMNAK; // 0x88
		::System::Byte _padding0[0x4];
		::UnityEngine::Camera* JCIDOFAKHKH; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENFOV__CTOR_OFFSET))(this);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENFOV_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENFOV_SET_VALUE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void DFJPMOOOLHM(::System::Single CKELPHPMECF, ::System::Boolean GNFAABJPKPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENFOV_DFJPMOOOLHM_OFFSET))(this, CKELPHPMECF, GNFAABJPKPN);
		}

		::System::Void PECPJKGEJKM(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENFOV_PECPJKGEJKM_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Camera* CNBEDIGHDFJ()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENFOV_CNBEDIGHDFJ_OFFSET))(this);
		}
	};
}
