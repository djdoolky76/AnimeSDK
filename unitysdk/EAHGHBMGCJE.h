#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class COKLGCPKGIE;

#define EAHGHBMGCJE_CTOR_OFFSET UNITYSDK_OFFSET(0x12673AE0)
#define EAHGHBMGCJE_GET_ALERTSPEED_OFFSET UNITYSDK_OFFSET(0x12673A60)
#define EAHGHBMGCJE_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x126739C0)
#define EAHGHBMGCJE_GET_RAYENDPOINT_OFFSET UNITYSDK_OFFSET(0x12673A30)
#define EAHGHBMGCJE_GET_RAYSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x12673A00)
#define EAHGHBMGCJE_GET_VISION_OFFSET UNITYSDK_OFFSET(0x126739E0)
#define EAHGHBMGCJE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x12673A80)
#define EAHGHBMGCJE_SET_ALERTSPEED_OFFSET UNITYSDK_OFFSET(0x12673A70)
#define EAHGHBMGCJE_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x126739D0)
#define EAHGHBMGCJE_SET_RAYENDPOINT_OFFSET UNITYSDK_OFFSET(0x12673A50)
#define EAHGHBMGCJE_SET_RAYSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x12673A20)
#define EAHGHBMGCJE_SET_VISION_OFFSET UNITYSDK_OFFSET(0x126739F0)

inline static constexpr unsigned int EAHGHBMGCJE_TypeDefinitionIndex = 56973;

	class EAHGHBMGCJE : public ::System::Object
	{
	public:
		::COKLGCPKGIE* _vision_k__BackingField; // 0x10
		::UnityEngine::Vector3 _rayEndPoint_k__BackingField; // 0x18
		::System::Single _alertSpeed_k__BackingField; // 0x24
		::UnityEngine::Vector3 _rayStartPoint_k__BackingField; // 0x28
		::System::Single _distance_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHGHBMGCJE_CTOR_OFFSET))(this);
		}

		::System::Single get_distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHGHBMGCJE_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_distance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAHGHBMGCJE_SET_DISTANCE_OFFSET))(this, a1);
		}

		::COKLGCPKGIE* get_vision()
		{
			return ((::COKLGCPKGIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHGHBMGCJE_GET_VISION_OFFSET))(this);
		}

		::System::Void set_vision(::COKLGCPKGIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COKLGCPKGIE*))((::PBYTE)hIl2Cpp + EAHGHBMGCJE_SET_VISION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_rayStartPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHGHBMGCJE_GET_RAYSTARTPOINT_OFFSET))(this);
		}

		::System::Void set_rayStartPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EAHGHBMGCJE_SET_RAYSTARTPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_rayEndPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHGHBMGCJE_GET_RAYENDPOINT_OFFSET))(this);
		}

		::System::Void set_rayEndPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EAHGHBMGCJE_SET_RAYENDPOINT_OFFSET))(this, a1);
		}

		::System::Single get_alertSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHGHBMGCJE_GET_ALERTSPEED_OFFSET))(this);
		}

		::System::Void set_alertSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAHGHBMGCJE_SET_ALERTSPEED_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHGHBMGCJE_KHGIKBFDLFB_OFFSET))(this);
		}

	};
