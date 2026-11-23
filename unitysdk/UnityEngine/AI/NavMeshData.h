#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_AI_NAVMESHDATA_A77F4D6665DD5795_OFFSET UNITYSDK_OFFSET(0x40EAEB0)
#define UNITYENGINE_AI_NAVMESHDATA_AC93ACF8B6A95703_OFFSET UNITYSDK_OFFSET(0x40EAE10)
#define UNITYENGINE_AI_NAVMESHDATA_EB411732C99E3152_OFFSET UNITYSDK_OFFSET(0x40EAC90)
#define UNITYENGINE_AI_NAVMESHDATA_F252F28CCCB270B2_OFFSET UNITYSDK_OFFSET(0x40EADC0)
#define UNITYENGINE_AI_NAVMESHDATA_F60390F5A01BEAEF_OFFSET UNITYSDK_OFFSET(0x40EAE60)
#define UNITYENGINE_AI_NAVMESHDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x40EAD40)
#define UNITYENGINE_AI_NAVMESHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x40EACD0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshData_TypeDefinitionIndex = 21265;

	class NavMeshData : public ::UnityEngine::Object
	{
	public:
		::System::Void F252F28CCCB270B2(::UnityEngine::Vector3& E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_F252F28CCCB270B2_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void A77F4D6665DD5795(::UnityEngine::Quaternion E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_A77F4D6665DD5795_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void EB411732C99E3152(::UnityEngine::AI::NavMeshData* A30DA2C4CBED7CA6, ::System::Int32 F05D4F1524F03CD5)
		{
			return ((::System::Void(*)(::UnityEngine::AI::NavMeshData*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_EB411732C99E3152_OFFSET))(A30DA2C4CBED7CA6, F05D4F1524F03CD5);
		}

		::System::Void AC93ACF8B6A95703(::UnityEngine::Vector3 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_AC93ACF8B6A95703_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA__CTOR_OFFSET))(this);
		}

		::System::Void F60390F5A01BEAEF(::UnityEngine::Quaternion& E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA_F60390F5A01BEAEF_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor_1(::System::Int32 F05D4F1524F03CD5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHDATA__CTOR_1_OFFSET))(this, F05D4F1524F03CD5);
		}
	};
}
