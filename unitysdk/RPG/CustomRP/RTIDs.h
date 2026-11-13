#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_RTIDS_CCTOR_OFFSET UNITYSDK_OFFSET(0x199047D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RTIDs_TypeDefinitionIndex = 38704;

	class RTIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__SkillRadialColorBlur0()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x84C0);
		}

		static ::System::Int32* StaticGet__DirBlurTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x84C4);
		}

		static ::System::Int32* StaticGet__RadialBlurTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x84C8);
		}

		static ::System::Int32* StaticGet__HalfSceneColorTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x84CC);
		}

		static ::System::Int32* StaticGet__SkillRadialMaskBlur0()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x84D0);
		}

		static ::System::Int32* StaticGet__FinalBuffer()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x84D4);
		}

		static ::System::Int32* StaticGet__SkillRadialMaskBlur1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x84D8);
		}

		static ::System::Int32* StaticGet__FxaaInputTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x84DC);
		}

		static ::System::Int32* StaticGet__DOFHalfSceneColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x84E0);
		}

		static ::System::Int32* StaticGet__SkillRadialColorBlur1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x84E4);
		}

		static ::System::Int32* StaticGet__ChromaticAberrationTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x84E8);
		}

		static ::System::Int32* StaticGet__MBReconstuctSceneColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RTIDs")->GetStaticField(0x84EC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RTIDS_CCTOR_OFFSET))();
		}

	};
}
