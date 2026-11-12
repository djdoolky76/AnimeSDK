#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_RTIDS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE12F20)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RTIDs_TypeDefinitionIndex = 38704;

	class RTIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__MBReconstuctSceneColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x89D0);
		}

		static ::System::Int32* StaticGet__SkillRadialMaskBlur1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x89D4);
		}

		static ::System::Int32* StaticGet__FxaaInputTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x89D8);
		}

		static ::System::Int32* StaticGet__DOFHalfSceneColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x89DC);
		}

		static ::System::Int32* StaticGet__DirBlurTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x89E0);
		}

		static ::System::Int32* StaticGet__SkillRadialColorBlur1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x89E4);
		}

		static ::System::Int32* StaticGet__HalfSceneColorTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x89E8);
		}

		static ::System::Int32* StaticGet__FinalBuffer()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x89EC);
		}

		static ::System::Int32* StaticGet__ChromaticAberrationTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x89F0);
		}

		static ::System::Int32* StaticGet__RadialBlurTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x89F4);
		}

		static ::System::Int32* StaticGet__SkillRadialColorBlur0()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x89F8);
		}

		static ::System::Int32* StaticGet__SkillRadialMaskBlur0()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x89FC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RTIDS_CCTOR_OFFSET))();
		}

	};
}
