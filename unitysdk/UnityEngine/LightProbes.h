#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class Action; }

#define UNITYENGINE_LIGHTPROBES_B1A06558FB1FBA58_OFFSET UNITYSDK_OFFSET(0x416E460)
#define UNITYENGINE_LIGHTPROBES_B4CEF5E463F4B277_OFFSET UNITYSDK_OFFSET(0x416E4B0)
#define UNITYENGINE_LIGHTPROBES_F3252DE53A4FF074_OFFSET UNITYSDK_OFFSET(0x416E500)

namespace UnityEngine
{
	inline static constexpr unsigned int LightProbes_TypeDefinitionIndex = 17563;

	class LightProbes : public ::UnityEngine::Object
	{
	public:
		static ::System::Action** StaticGet_AAFC12BCF00366C6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LightProbes_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet_AE36BBF6AA32BCEB()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LightProbes_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Action** StaticGet_E957D26A35E6D0C7()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LightProbes_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void F3252DE53A4FF074()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_F3252DE53A4FF074_OFFSET))();
		}

		static ::System::Void B1A06558FB1FBA58()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_B1A06558FB1FBA58_OFFSET))();
		}

		static ::System::Void B4CEF5E463F4B277()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_B4CEF5E463F4B277_OFFSET))();
		}
	};
}
