#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPHDRMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C87DB40)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapHDRManager_TypeDefinitionIndex = 27243;

	class NapHDRManager : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_HDRSplitLine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6210);
		}
		static ::System::Boolean* StaticGet_HDRPipelineOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6211);
		}
		static ::System::Single* StaticGet_SceneMaxLuminanceScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6214);
		}
		static ::System::Single* StaticGet_AvatarMaxLuminanceScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6218);
		}
		static ::System::Single* StaticGet_SceneMaxLuminanceScaleFadeRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x621C);
		}
		static ::System::Single* StaticGet_HueShiftLerpThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6220);
		}
		static ::System::Single* StaticGet_HDRSplitRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6224);
		}
		static ::System::Single* StaticGet_AvatarMaxLuminanceScaleFadeRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x6228);
		}
		static ::System::Single* StaticGet_HueShiftLerpRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapHDRManager_TypeDefinitionIndex)->GetStaticField(0x622C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPHDRMANAGER__CCTOR_OFFSET))();
		}
	};
}
