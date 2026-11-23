#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace ABC::CustomRenderPipeline { class LensFlareElement; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define ABC_CUSTOMRENDERPIPELINE_LENSFLAREPLUGIN_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x27BD670)
#define ABC_CUSTOMRENDERPIPELINE_LENSFLAREPLUGIN_B6E6940D295633BD_OFFSET UNITYSDK_OFFSET(0x27BDB70)
#define ABC_CUSTOMRENDERPIPELINE_LENSFLAREPLUGIN_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x27BD860)
#define ABC_CUSTOMRENDERPIPELINE_LENSFLAREPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x27BDF50)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int LensFlarePlugin_TypeDefinitionIndex = 16638;

	class LensFlarePlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Priority; // 0x20
		::System::Single DepthBias; // 0x24
		::System::Single SampleRadius; // 0x28
		::System::Single ColorThreshold; // 0x2C
		::UnityEngine::E46B881AA2636190 FlareColor; // 0x30
		::System::Single TotalSizeScale; // 0x40
		::System::Single TotalAlphaScale; // 0x44
		::System::Single TotalOffsetScale; // 0x48
		::System::Single TotalAspect; // 0x4C
		::System::Single TotalRotationOffset; // 0x50
		::System::Single MinSizeWhenFade; // 0x54
		::UnityEngine::Texture2D* FlareLineTex; // 0x58
		::System::Single FlareLineLength; // 0x60
		::System::Single FlareLineWidth; // 0x64
		::System::Single FlareLineCurve; // 0x68
		::System::Single FlareLineIntensity; // 0x6C
		::UnityEngine::RenderTexture* BE21ABA39473816A; // 0x70
		::System::Collections::Generic::List_1<::ABC::CustomRenderPipeline::LensFlareElement*>* LensFlareElements; // 0x78

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LENSFLAREPLUGIN_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LENSFLAREPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void B6E6940D295633BD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LENSFLAREPLUGIN_B6E6940D295633BD_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LENSFLAREPLUGIN_BF13C91AD80643D2_OFFSET))(this);
		}
	};
}
