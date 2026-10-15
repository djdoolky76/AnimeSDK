#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class MOIOIIICKOI;
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace UnityEngine::EventSystems { class AxisEventData; }

#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0xD8253A0)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_ELMMLLDNNAO_OFFSET UNITYSDK_OFFSET(0xD825190)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_FDBDECPJEKF_OFFSET UNITYSDK_OFFSET(0xD825350)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_HPNHBGEOGPO_OFFSET UNITYSDK_OFFSET(0xD825280)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_JOACGNDEHOE_OFFSET UNITYSDK_OFFSET(0xD825230)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD824FA0)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_ONMOVE_OFFSET UNITYSDK_OFFSET(0xD825110)
#define RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_START_OFFSET UNITYSDK_OFFSET(0xD824E30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEraFlipperSearchLight_TypeDefinitionIndex = 68955;

	class MonoEraFlipperSearchLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single SwipeMinDistance; // 0x18
		::System::Byte _padding0[0x4];
		::MOIOIIICKOI* NFPKMFGMCIC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_ONMOVE_OFFSET))(this, a1);
		}

		::System::Void ELMMLLDNNAO(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_ELMMLLDNNAO_OFFSET))(this, a1);
		}

		::System::Void JOACGNDEHOE(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_JOACGNDEHOE_OFFSET))(this, a1);
		}

		::System::Void HPNHBGEOGPO(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_HPNHBGEOGPO_OFFSET))(this, a1);
		}

		::System::Void FDBDECPJEKF(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOERAFLIPPERSEARCHLIGHT_FDBDECPJEKF_OFFSET))(this, a1);
		}

	};
}
