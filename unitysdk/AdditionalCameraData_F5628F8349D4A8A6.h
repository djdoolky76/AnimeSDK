#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class E891BA3236FD13E7; }
namespace UnityEngine { class Camera; }

#define ADDITIONALCAMERADATA_F5628F8349D4A8A6_F48CE6A0589DB7F3_OFFSET UNITYSDK_OFFSET(0x27FBDC0)
#define ADDITIONALCAMERADATA_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x27FBFA0)
#define ADDITIONALCAMERADATA_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AdditionalCameraData_F5628F8349D4A8A6_TypeDefinitionIndex = 16759;

class AdditionalCameraData_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::AdditionalCameraData_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::AdditionalCameraData_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(AdditionalCameraData_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::E891BA3236FD13E7<::UnityEngine::Camera*>** StaticGet_EB0986F4A705A2F5()
	{
		return (::System::E891BA3236FD13E7<::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(AdditionalCameraData_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADDITIONALCAMERADATA_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIONALCAMERADATA_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean F48CE6A0589DB7F3(::UnityEngine::Camera* A98EBC175E852459)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + ADDITIONALCAMERADATA_F5628F8349D4A8A6_F48CE6A0589DB7F3_OFFSET))(this, A98EBC175E852459);
	}
};
