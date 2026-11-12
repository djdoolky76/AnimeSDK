#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RVO/RVOAgentParam.h"
#include "unitysdk/RVO/Vector2.h"
namespace RVO { class RVOManager; }

#define RVO_RVOAGENT_APPLY_OFFSET UNITYSDK_OFFSET(0xB6F2C80)
#define RVO_RVOAGENT_CTOR_OFFSET UNITYSDK_OFFSET(0xB6F2880)
#define RVO_RVOAGENT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xB6F3950)
#define RVO_RVOAGENT_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xB6F30F0)
#define RVO_RVOAGENT_GET_MAXNEIGHBORS_OFFSET UNITYSDK_OFFSET(0xB6F49D0)
#define RVO_RVOAGENT_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0xB6F4450)
#define RVO_RVOAGENT_GET_NEIGHBORDIST_OFFSET UNITYSDK_OFFSET(0xB6F4710)
#define RVO_RVOAGENT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xB6F3100)
#define RVO_RVOAGENT_GET_PREFVELOCITY_OFFSET UNITYSDK_OFFSET(0xB6F3660)
#define RVO_RVOAGENT_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xB6F3C10)
#define RVO_RVOAGENT_GET_TIMEHORIZONOBST_OFFSET UNITYSDK_OFFSET(0xB6F4190)
#define RVO_RVOAGENT_GET_TIMEHORIZON_OFFSET UNITYSDK_OFFSET(0xB6F3ED0)
#define RVO_RVOAGENT_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xB6F33B0)
#define RVO_RVOAGENT_ONALLOC_OFFSET UNITYSDK_OFFSET(0xB6F2C70)
#define RVO_RVOAGENT_ONRELEASE_OFFSET UNITYSDK_OFFSET(0xB6F2E40)
#define RVO_RVOAGENT_PERTURB_OFFSET UNITYSDK_OFFSET(0xB6F4C80)
#define RVO_RVOAGENT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xB6F2F20)
#define RVO_RVOAGENT_SET_MAXNEIGHBORS_OFFSET UNITYSDK_OFFSET(0xB6F30A0)
#define RVO_RVOAGENT_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0xB6F2F60)
#define RVO_RVOAGENT_SET_NEIGHBORDIST_OFFSET UNITYSDK_OFFSET(0xB6F3060)
#define RVO_RVOAGENT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xB6F2EA0)
#define RVO_RVOAGENT_SET_PREFVELOCITY_OFFSET UNITYSDK_OFFSET(0xB6F37D0)
#define RVO_RVOAGENT_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0xB6F2FA0)
#define RVO_RVOAGENT_SET_TIMEHORIZONOBST_OFFSET UNITYSDK_OFFSET(0xB6F3020)
#define RVO_RVOAGENT_SET_TIMEHORIZON_OFFSET UNITYSDK_OFFSET(0xB6F2FE0)
#define RVO_RVOAGENT_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xB6F2EE0)
#define RVO_RVOAGENT_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6F30E0)

namespace RVO
{
	inline static constexpr unsigned int RVOAgent_TypeDefinitionIndex = 47067;

	class RVOAgent : public ::System::Object
	{
	public:
		::RVO::RVOManager* _manager; // 0x10
		::System::Int32 _ID; // 0x18
		::System::Void _ctor(::RVO::RVOManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOManager*))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_CTOR_OFFSET))(this, a1);
		}

		::System::Void OnAlloc(::RVO::RVOAgentParam a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOAgentParam))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_ONALLOC_OFFSET))(this, a1);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_ONRELEASE_OFFSET))(this);
		}

		::System::Void Apply(::RVO::RVOAgentParam a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOAgentParam))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_APPLY_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_ISDISPOSED_OFFSET))(this);
		}

		::RVO::Vector2 get_Position()
		{
			return ((::RVO::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::RVO::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_POSITION_OFFSET))(this, a1);
		}

		::RVO::Vector2 get_Velocity()
		{
			return ((::RVO::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_Velocity(::RVO::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_VELOCITY_OFFSET))(this, a1);
		}

		::RVO::Vector2 get_PrefVelocity()
		{
			return ((::RVO::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_PREFVELOCITY_OFFSET))(this);
		}

		::System::Void set_PrefVelocity(::RVO::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::Vector2))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_PREFVELOCITY_OFFSET))(this, a1);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_HEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_RADIUS_OFFSET))(this, a1);
		}

		::System::Single get_TimeHorizon()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_TIMEHORIZON_OFFSET))(this);
		}

		::System::Void set_TimeHorizon(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_TIMEHORIZON_OFFSET))(this, a1);
		}

		::System::Single get_TimeHorizonObst()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_TIMEHORIZONOBST_OFFSET))(this);
		}

		::System::Void set_TimeHorizonObst(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_TIMEHORIZONOBST_OFFSET))(this, a1);
		}

		::System::Single get_MaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_MAXSPEED_OFFSET))(this);
		}

		::System::Void set_MaxSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_MAXSPEED_OFFSET))(this, a1);
		}

		::System::Single get_NeighborDist()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_NEIGHBORDIST_OFFSET))(this);
		}

		::System::Void set_NeighborDist(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_NEIGHBORDIST_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxNeighbors()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_GET_MAXNEIGHBORS_OFFSET))(this);
		}

		::System::Void set_MaxNeighbors(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_SET_MAXNEIGHBORS_OFFSET))(this, a1);
		}

		::System::Void Perturb()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOAGENT_PERTURB_OFFSET))(this);
		}

	};
}
