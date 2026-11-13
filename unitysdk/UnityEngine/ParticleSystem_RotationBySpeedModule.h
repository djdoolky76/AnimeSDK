#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x20845DC0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3F93F70)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x20846070)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x3F94160)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x20846010)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x3F94140)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20845E70)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F94000)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x20845E30)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x3F93F90)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20845F20)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F94090)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x20845EE0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x3F94020)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20845FD0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F94120)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x20845F90)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x3F940B0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x20845DE0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3F93F80)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_RANGE_INJECTED_OFFSET UNITYSDK_OFFSET(0x208460A0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_RANGE_OFFSET UNITYSDK_OFFSET(0x3F94190)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x20846030)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x3F94150)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20845E90)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F94010)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x20845E50)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x3F93FD0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20845F40)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F940A0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x20845F00)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x3F94060)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x20845FF0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F94130)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x20845FB0)
#define UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x3F940F0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_RotationBySpeedModule_TypeDefinitionIndex = 5246;

	struct alignas(8) ParticleSystem_RotationBySpeedModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10
		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_X_OFFSET))(this, a1);
		}

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_XMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Y_OFFSET))(this, a1);
		}

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_YMULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Z_OFFSET))(this);
		}

		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Z_OFFSET))(this, a1);
		}

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ZMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_SEPARATEAXES_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_range()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_RANGE_OFFSET))(this);
		}

		::System::Void set_range(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_RANGE_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_X_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Y_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_Z_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_range_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_GET_RANGE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_range_Injected(::UnityEngine::ParticleSystem_RotationBySpeedModule a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_RotationBySpeedModule, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ROTATIONBYSPEEDMODULE_SET_RANGE_INJECTED_OFFSET))(a1, a2);
		}
		*/

	};
}
