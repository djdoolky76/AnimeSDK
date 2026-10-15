#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Line.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class BezierCurve; }

#define RPG_CLIENT_ELECTRICCHAINV2_CURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xCD738A0)
#define RPG_CLIENT_ELECTRICCHAINV2_CURVE_LOICGIBKHMM_OFFSET UNITYSDK_OFFSET(0xCD734E0)
#define RPG_CLIENT_ELECTRICCHAINV2_CURVE_PMPNGLKHFMJ_OFFSET UNITYSDK_OFFSET(0xCD73820)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Curve_TypeDefinitionIndex = 73602;

	class Curve : public ::RPG::Client::ElectricChainV2::Line
	{
	public:
		::RPG::Client::BezierCurve* curve; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_CURVE_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 LOICGIBKHMM(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_CURVE_LOICGIBKHMM_OFFSET))(this, a1);
		}

		::System::Single PMPNGLKHFMJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_CURVE_PMPNGLKHFMJ_OFFSET))(this);
		}

	};
}
