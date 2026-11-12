#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UI_SHADERIDS_CCTOR_OFFSET UNITYSDK_OFFSET(0x207FC860)
#define UNITYENGINE_UI_SHADERIDS_CTOR_OFFSET UNITYSDK_OFFSET(0x207FC850)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ShaderIDs_TypeDefinitionIndex = 6870;

	class ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__ColorMask()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD7F0);
		}

		static ::System::Int32* StaticGet__SmoothMaskFillParams()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD7F4);
		}

		static ::System::Int32* StaticGet__SmoothMaskFillParams2()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD7F8);
		}

		static ::System::Int32* StaticGet__UseUIAlphaClip()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD7FC);
		}

		static ::System::Int32* StaticGet__SmoothMaskTexSlice0()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD800);
		}

		static ::System::Int32* StaticGet__SmoothMaskTransform()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD804);
		}

		static ::System::Int32* StaticGet__StencilComp()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD808);
		}

		static ::System::Int32* StaticGet__StencilOp()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD80C);
		}

		static ::System::Int32* StaticGet__SmoothMaskTexSlice1()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD810);
		}

		static ::System::Int32* StaticGet__SmoothMaskAlphaST()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD814);
		}

		static ::System::Int32* StaticGet__SmoothMaskTexture()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD818);
		}

		static ::System::Int32* StaticGet__StencilReadMask()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD81C);
		}

		static ::System::Int32* StaticGet__StencilWriteMask()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD820);
		}

		static ::System::Int32* StaticGet__SmoothMaskDiv1()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD824);
		}

		static ::System::Int32* StaticGet__SmoothMaskTexSlice()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD828);
		}

		static ::System::Int32* StaticGet__SmoothMaskDiv0()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD82C);
		}

		static ::System::Int32* StaticGet__SmoothMaskTextureST()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD830);
		}

		static ::System::Int32* StaticGet__SmoothMaskSoftRanges()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD834);
		}

		static ::System::Int32* StaticGet__Stencil()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD838);
		}

		static ::System::Int32* StaticGet__SmoothMaskType()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "ShaderIDs")->GetStaticField(0xD83C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADERIDS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SHADERIDS_CCTOR_OFFSET))();
		}

	};
}
