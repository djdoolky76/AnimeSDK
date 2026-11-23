#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E490AAC5C1685E29/AEBA3854B935C18C.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class E891BA3236FD13E7; }
namespace Unity::AI::Navigation { class NavMeshModifier; }
namespace Unity::AI::Navigation { class NavMeshModifierVolume; }

#define UNITY_AI_NAVIGATION_NAVMESHSURFACE_F5628F8349D4A8A6_A3545588F3E203E2_OFFSET UNITYSDK_OFFSET(0x3F372A0)
#define UNITY_AI_NAVIGATION_NAVMESHSURFACE_F5628F8349D4A8A6_ABDBFE7EA3B6F4BC_OFFSET UNITYSDK_OFFSET(0x3F37380)
#define UNITY_AI_NAVIGATION_NAVMESHSURFACE_F5628F8349D4A8A6_EF6F81F4D08F9B67_OFFSET UNITYSDK_OFFSET(0x3F37270)
#define UNITY_AI_NAVIGATION_NAVMESHSURFACE_F5628F8349D4A8A6_F666A77F3D0F4C79_OFFSET UNITYSDK_OFFSET(0x3F37270)
#define UNITY_AI_NAVIGATION_NAVMESHSURFACE_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F37460)
#define UNITY_AI_NAVIGATION_NAVMESHSURFACE_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace Unity::AI::Navigation
{
	inline static constexpr unsigned int NavMeshSurface_F5628F8349D4A8A6_TypeDefinitionIndex = 21409;

	class NavMeshSurface_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::Unity::AI::Navigation::NavMeshSurface_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::Unity::AI::Navigation::NavMeshSurface_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::E891BA3236FD13E7<::Unity::AI::Navigation::NavMeshModifierVolume*>** StaticGet_E8C8E678219153D1()
		{
			return (::System::E891BA3236FD13E7<::Unity::AI::Navigation::NavMeshModifierVolume*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::E891BA3236FD13E7<::Unity::AI::Navigation::NavMeshModifier*>** StaticGet_F81A6EDAB3E54E9C()
		{
			return (::System::E891BA3236FD13E7<::Unity::AI::Navigation::NavMeshModifier*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::E891BA3236FD13E7<::E490AAC5C1685E29::AEBA3854B935C18C>** StaticGet_AB33E38375348B8A()
		{
			return (::System::E891BA3236FD13E7<::E490AAC5C1685E29::AEBA3854B935C18C>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::System::E891BA3236FD13E7<::E490AAC5C1685E29::AEBA3854B935C18C>** StaticGet_B04F6A2F7E38EA46()
		{
			return (::System::E891BA3236FD13E7<::E490AAC5C1685E29::AEBA3854B935C18C>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHSURFACE_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHSURFACE_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean F666A77F3D0F4C79(::Unity::AI::Navigation::NavMeshModifierVolume* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::AI::Navigation::NavMeshModifierVolume*))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHSURFACE_F5628F8349D4A8A6_F666A77F3D0F4C79_OFFSET))(this, BB8C609F76620E45);
		}

		::System::Boolean EF6F81F4D08F9B67(::Unity::AI::Navigation::NavMeshModifier* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::AI::Navigation::NavMeshModifier*))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHSURFACE_F5628F8349D4A8A6_EF6F81F4D08F9B67_OFFSET))(this, BB8C609F76620E45);
		}

		::System::Boolean A3545588F3E203E2(::E490AAC5C1685E29::AEBA3854B935C18C BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::E490AAC5C1685E29::AEBA3854B935C18C))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHSURFACE_F5628F8349D4A8A6_A3545588F3E203E2_OFFSET))(this, BB8C609F76620E45);
		}

		::System::Boolean ABDBFE7EA3B6F4BC(::E490AAC5C1685E29::AEBA3854B935C18C BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::E490AAC5C1685E29::AEBA3854B935C18C))((::PBYTE)hIl2Cpp + UNITY_AI_NAVIGATION_NAVMESHSURFACE_F5628F8349D4A8A6_ABDBFE7EA3B6F4BC_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
