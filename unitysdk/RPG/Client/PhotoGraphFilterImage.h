#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/RawImage.h"
namespace RPG::Client { class PhotoGraphFilterConfig; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x18D6AB00)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x18D6B4A0)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x18D6B410)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x18D6B300)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x18D6B390)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x18D6AC20)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_INITWITHFILTERCONFIG_OFFSET UNITYSDK_OFFSET(0x18D6B090)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18D6AB90)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_RESETFILTER_OFFSET UNITYSDK_OFFSET(0x18D6ACD0)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETFILTERALPHA_OFFSET UNITYSDK_OFFSET(0x18D6AFD0)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETFILTERLUT_OFFSET UNITYSDK_OFFSET(0x18D6AF10)
#define RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x18D6AC80)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphFilterImage_TypeDefinitionIndex = 71402;

	class PhotoGraphFilterImage : public ::UnityEngine::UI::RawImage
	{
	public:
		::System::Boolean IsChangedAfterSave; // 0x108
		::System::Byte _padding0[0x7];
		::UnityEngine::Material* _MaterialInstance; // 0x110
		static ::System::Int32* StaticGet__ShaderID_Lightness()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PhotoGraphFilterImage")->GetStaticField(0x9230);
		}

		static ::System::Int32* StaticGet__ShaderID_Hue()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PhotoGraphFilterImage")->GetStaticField(0x9234);
		}

		static ::System::Int32* StaticGet__ShaderID_Brightness()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PhotoGraphFilterImage")->GetStaticField(0x9238);
		}

		static ::System::Int32* StaticGet__ShaderID_LightnessColorize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PhotoGraphFilterImage")->GetStaticField(0x923C);
		}

		static ::System::Int32* StaticGet__ShaderID_LUT()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PhotoGraphFilterImage")->GetStaticField(0x9240);
		}

		static ::System::Int32* StaticGet__ShaderID_Saturation()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PhotoGraphFilterImage")->GetStaticField(0x9244);
		}

		static ::System::Int32* StaticGet__ShaderID_Contrast()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PhotoGraphFilterImage")->GetStaticField(0x9248);
		}

		static ::System::Int32* StaticGet__ShaderID_SaturationColorize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PhotoGraphFilterImage")->GetStaticField(0x924C);
		}

		static ::System::Int32* StaticGet__ShaderID_ColorizeEnable()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PhotoGraphFilterImage")->GetStaticField(0x9250);
		}

		static ::System::Int32* StaticGet__ShaderID_LUTEnable()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PhotoGraphFilterImage")->GetStaticField(0x9254);
		}

		static ::System::Int32* StaticGet__ShaderID_FilterIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PhotoGraphFilterImage")->GetStaticField(0x9258);
		}

		static ::System::Int32* StaticGet__ShaderID_HueColorize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "PhotoGraphFilterImage")->GetStaticField(0x925C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void SetTexture(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETTEXTURE_OFFSET))(this, a1);
		}

		::System::Void ResetFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_RESETFILTER_OFFSET))(this);
		}

		::System::Void InitWithFilterConfig(::RPG::Client::PhotoGraphFilterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphFilterConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_INITWITHFILTERCONFIG_OFFSET))(this, a1);
		}

		::System::Void SetFilterLUT(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETFILTERLUT_OFFSET))(this, a1);
		}

		::System::Void SetFilterAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_SETFILTERALPHA_OFFSET))(this, a1);
		}

		::UnityEngine::RenderTexture* GetTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GETTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHFILTERIMAGE_GET_MAINTEXTURE_OFFSET))(this);
		}

	};
}
