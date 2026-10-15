#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_CBKPMHCOCMH_OFFSET UNITYSDK_OFFSET(0xD80FF40)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_CCTOR_OFFSET UNITYSDK_OFFSET(0xD810140)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_CTOR_OFFSET UNITYSDK_OFFSET(0xD8100F0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_GBAHDJFPPBC_OFFSET UNITYSDK_OFFSET(0xD80FFB0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xD80F7E0)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_IJICJDNHKHN_OFFSET UNITYSDK_OFFSET(0xD80F510)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0xD80F860)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0xD80F560)
#define RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_MGNJAGHDOFI_OFFSET UNITYSDK_OFFSET(0xD80FFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginVertexCollapse_TypeDefinitionIndex = 70016;

	class MonoEffectPluginVertexCollapse : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::UnityEngine::Color Color; // 0x170
		::UnityEngine::Texture2D* ColorRamp; // 0x180
		::System::Single HueShift; // 0x188
		::System::Single Saturation; // 0x18C
		::System::Single Brightness; // 0x190
		::System::Single Contrast; // 0x194
		::UnityEngine::Transform* CollapsePoint; // 0x198
		::UnityEngine::Vector3 CollapsePointOffset; // 0x1A0
		::System::Byte _padding0[0x4];
		::UnityEngine::Texture2D* CollapseNoise; // 0x1B0
		::UnityEngine::Vector2 CollapseNoiseTurbulence; // 0x1B8
		::System::Single CollapseNoiseIntensity; // 0x1C0
		::System::Single CollapseRatio; // 0x1C4
		::UnityEngine::Vector2 CollapseRatioRange; // 0x1C8
		::System::Single CollapseSpeed; // 0x1D0
		::System::Single CollapseTrace; // 0x1D4
		::System::Boolean CalculateBoundsCenter; // 0x1D8
		::System::Byte _padding1[0x7];
		::Il2CppArray<::UnityEngine::Renderer*>* DCKEKFGKLAI; // 0x1E0
		static ::System::Int32* StaticGet_EBMNHHLMBAO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginVertexCollapse")->GetStaticField(0x14C70);
		}

		static ::System::Int32* StaticGet_CKCDNANPOLH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginVertexCollapse")->GetStaticField(0x14C74);
		}

		static ::System::Int32* StaticGet_OJGJABCDGOM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginVertexCollapse")->GetStaticField(0x14C78);
		}

		static ::System::Int32* StaticGet_PLGMEIIGODB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginVertexCollapse")->GetStaticField(0x14C7C);
		}

		static ::System::Int32* StaticGet_CEFHFLAELPM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginVertexCollapse")->GetStaticField(0x14C80);
		}

		static ::System::Int32* StaticGet_MINBIGDKJLM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginVertexCollapse")->GetStaticField(0x14C84);
		}

		static ::System::Int32* StaticGet_HCHELLNOELG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginVertexCollapse")->GetStaticField(0x14C88);
		}

		static ::System::Int32* StaticGet_FFPFIACIHCO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginVertexCollapse")->GetStaticField(0x14C8C);
		}

		static ::System::Int32* StaticGet_APGBOCGHFEM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginVertexCollapse")->GetStaticField(0x14C90);
		}

		static ::System::Int32* StaticGet_IEHLNCMDNEK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginVertexCollapse")->GetStaticField(0x14C94);
		}

		static ::System::Int32* StaticGet_OJOIHDCPFDJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginVertexCollapse")->GetStaticField(0x14C98);
		}

		static ::System::Int32* StaticGet_POFIFNFHOJL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginVertexCollapse")->GetStaticField(0x14C9C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_CCTOR_OFFSET))();
		}

		::System::Void IJICJDNHKHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_IJICJDNHKHN_OFFSET))(this);
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_IFOEAAAKONL_OFFSET))(this);
		}

		::System::Void CBKPMHCOCMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_CBKPMHCOCMH_OFFSET))(this);
		}

		::System::Void KEPMMNEBKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_KEPMMNEBKCD_OFFSET))(this);
		}

		::System::Void MGNJAGHDOFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_MGNJAGHDOFI_OFFSET))(this);
		}

		::System::Void GBAHDJFPPBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_GBAHDJFPPBC_OFFSET))(this);
		}

		::System::Void IKOHLHDGFKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINVERTEXCOLLAPSE_IKOHLHDGFKH_OFFSET))(this);
		}

	};
}
