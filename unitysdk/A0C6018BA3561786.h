#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PampelGames::RoadConstructor { class ComponentSettings; }

#define A0C6018BA3561786_A295CE2844F77D82_OFFSET UNITYSDK_OFFSET(0x3D6AD80)
#define A0C6018BA3561786_A9A279FB6F05750B_OFFSET UNITYSDK_OFFSET(0x3D6ACE0)
#define A0C6018BA3561786_BF98E4E213F0ABCF_OFFSET UNITYSDK_OFFSET(0x3D6AD00)
#define A0C6018BA3561786_EF3379F197A70ED3_OFFSET UNITYSDK_OFFSET(0x3D6ACA0)
#define A0C6018BA3561786__CCTOR_OFFSET UNITYSDK_OFFSET(0x3D6ADA0)

inline static constexpr unsigned int A0C6018BA3561786_TypeDefinitionIndex = 18778;

class A0C6018BA3561786 : public ::System::Object
{
public:
	static ::UnityEngine::E46B881AA2636190* StaticGet_EED55F86547D42AC()
	{
		return (::UnityEngine::E46B881AA2636190*)Il2CppClass::FromTypeDefinitionIndex(A0C6018BA3561786_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::UnityEngine::E46B881AA2636190* StaticGet_BAD7DE61D336CB68()
	{
		return (::UnityEngine::E46B881AA2636190*)Il2CppClass::FromTypeDefinitionIndex(A0C6018BA3561786_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::UnityEngine::E46B881AA2636190* StaticGet_E4DC71BFA07ED008()
	{
		return (::UnityEngine::E46B881AA2636190*)Il2CppClass::FromTypeDefinitionIndex(A0C6018BA3561786_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	static ::UnityEngine::E46B881AA2636190* StaticGet_E0C1B813A5549AFC()
	{
		return (::UnityEngine::E46B881AA2636190*)Il2CppClass::FromTypeDefinitionIndex(A0C6018BA3561786_TypeDefinitionIndex)->GetStaticField(0x30);
	}

	static ::System::Boolean A295CE2844F77D82(::System::Single AD1329E16AB80F43)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + A0C6018BA3561786_A295CE2844F77D82_OFFSET))(AD1329E16AB80F43);
	}

	static ::UnityEngine::Vector3 BF98E4E213F0ABCF(::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF)
	{
		return ((::UnityEngine::Vector3(*)(::PampelGames::RoadConstructor::ComponentSettings*))((::PBYTE)hIl2Cpp + A0C6018BA3561786_BF98E4E213F0ABCF_OFFSET))(B657584D50B81BBF);
	}

	static ::System::Boolean A9A279FB6F05750B(::System::Single AD1329E16AB80F43)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + A0C6018BA3561786_A9A279FB6F05750B_OFFSET))(AD1329E16AB80F43);
	}

	static ::System::Boolean EF3379F197A70ED3(::System::Single AD1329E16AB80F43)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + A0C6018BA3561786_EF3379F197A70ED3_OFFSET))(AD1329E16AB80F43);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A0C6018BA3561786__CCTOR_OFFSET))();
	}
};
