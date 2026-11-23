#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TA/SceneLightComponent/VLB/MinMaxRangeFloat.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BE96472A27DCD00F_AFBAF53D780B2E74__CCTOR_OFFSET UNITYSDK_OFFSET(0x28D9D70)

inline static constexpr unsigned int BE96472A27DCD00F_AFBAF53D780B2E74_TypeDefinitionIndex = 16422;

class BE96472A27DCD00F_AFBAF53D780B2E74 : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_FC73661648900610()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(BE96472A27DCD00F_AFBAF53D780B2E74_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::TA::SceneLightComponent::VLB::MinMaxRangeFloat* StaticGet_A5EFB1717B2BBD14()
	{
		return (::TA::SceneLightComponent::VLB::MinMaxRangeFloat*)Il2CppClass::FromTypeDefinitionIndex(BE96472A27DCD00F_AFBAF53D780B2E74_TypeDefinitionIndex)->GetStaticField(0xC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BE96472A27DCD00F_AFBAF53D780B2E74__CCTOR_OFFSET))();
	}
};
