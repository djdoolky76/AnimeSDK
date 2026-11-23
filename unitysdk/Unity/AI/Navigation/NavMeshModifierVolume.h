#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x3F333A0)
#define UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_A4EB194B84E346B3_OFFSET UNITYSDK_OFFSET(0x24749E0)
#define UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_B1C968D267AFE6F1_OFFSET UNITYSDK_OFFSET(0x16D1B90)
#define UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_B43D67CC32451AB5_OFFSET UNITYSDK_OFFSET(0x181E4F0)
#define UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x3F33420)
#define UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_E0DB9048C4694F11_OFFSET UNITYSDK_OFFSET(0x3F33680)
#define UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_E79712C8F4B75D75_OFFSET UNITYSDK_OFFSET(0x23D82F0)
#define UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_EFF14C31C5C7E769_OFFSET UNITYSDK_OFFSET(0x1FDB190)
#define UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_F2774E30C40EFC9B_OFFSET UNITYSDK_OFFSET(0x3F332F0)
#define UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_FD4987BC3E5D912A_OFFSET UNITYSDK_OFFSET(0x1FDB160)
#define UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F334F0)
#define UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x3F33570)

namespace Unity::AI::Navigation
{
	inline static constexpr unsigned int NavMeshModifierVolume_TypeDefinitionIndex = 21413;

	class NavMeshModifierVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::Unity::AI::Navigation::NavMeshModifierVolume*>** StaticGet_B6174BD553789037()
		{
			return (::System::Collections::Generic::List_1<::Unity::AI::Navigation::NavMeshModifierVolume*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshModifierVolume_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::Vector3 m_Size; // 0x20
		::UnityEngine::Vector3 m_Center; // 0x2C
		::System::Int32 m_Area; // 0x38
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* m_AffectedAgents; // 0x40

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME__CCTOR_OFFSET))();
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void B43D67CC32451AB5(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_B43D67CC32451AB5_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean F2774E30C40EFC9B(::System::Int32 F05D4F1524F03CD5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_F2774E30C40EFC9B_OFFSET))(this, F05D4F1524F03CD5);
		}

		::System::Void EFF14C31C5C7E769(::UnityEngine::Vector3 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_EFF14C31C5C7E769_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Int32 B1C968D267AFE6F1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_B1C968D267AFE6F1_OFFSET))(this);
		}

		::UnityEngine::Vector3 A4EB194B84E346B3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_A4EB194B84E346B3_OFFSET))(this);
		}

		::UnityEngine::Vector3 FD4987BC3E5D912A()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_FD4987BC3E5D912A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME__CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::Unity::AI::Navigation::NavMeshModifierVolume*>* E0DB9048C4694F11()
		{
			return ((::System::Collections::Generic::List_1<::Unity::AI::Navigation::NavMeshModifierVolume*>*(*)())((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_E0DB9048C4694F11_OFFSET))();
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void E79712C8F4B75D75(::UnityEngine::Vector3 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHMODIFIERVOLUME_E79712C8F4B75D75_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
