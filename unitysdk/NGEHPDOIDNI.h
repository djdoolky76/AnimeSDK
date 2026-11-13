#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginFrameCapture_CaptureCameraType.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFrameCapture; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class RenderTexture; }

#define NGEHPDOIDNI_AJAKNGPDHEN_OFFSET UNITYSDK_OFFSET(0x18E87B50)
#define NGEHPDOIDNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x18E88AA0)
#define NGEHPDOIDNI_CTOR_OFFSET UNITYSDK_OFFSET(0x18E88A90)
#define NGEHPDOIDNI_DEFBIDPDGLP_OFFSET UNITYSDK_OFFSET(0x18E889B0)
#define NGEHPDOIDNI_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x18E88740)
#define NGEHPDOIDNI_JKNAMDKMENL_OFFSET UNITYSDK_OFFSET(0x18E881F0)
#define NGEHPDOIDNI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x18E884B0)
#define NGEHPDOIDNI_KJDKCLOCCFN_OFFSET UNITYSDK_OFFSET(0x18E87DB0)
#define NGEHPDOIDNI_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x18E87D60)
#define NGEHPDOIDNI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x18E87CF0)
#define NGEHPDOIDNI_NKENHJHADAO_OFFSET UNITYSDK_OFFSET(0x18E88790)
#define NGEHPDOIDNI_ONPGJCHIKEO_OFFSET UNITYSDK_OFFSET(0x18E88A40)
#define NGEHPDOIDNI_PJMGFNNIKBC_OFFSET UNITYSDK_OFFSET(0x18E88510)
#define NGEHPDOIDNI_PNCMFCNINEM_OFFSET UNITYSDK_OFFSET(0x18E88460)
#define NGEHPDOIDNI_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0x18E881A0)

inline static constexpr unsigned int NGEHPDOIDNI_TypeDefinitionIndex = 72036;

	class NGEHPDOIDNI : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Boolean NGLHFGMFJLP; // 0x18
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_LFDEADJEJPD()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "NGEHPDOIDNI")->GetStaticField(0x370A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGEHPDOIDNI_CCTOR_OFFSET))();
		}

		static ::System::Int32 AJAKNGPDHEN(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_AJAKNGPDHEN_OFFSET))(a1);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void PNCMFCNINEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_PNCMFCNINEM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		static ::UnityEngine::RenderTexture* PJMGFNNIKBC(::RPG::Client::MonoEffectPluginFrameCapture_CaptureCameraType a1, ::RPG::CustomRP::FrameCapture_CaptureFeature a2)
		{
			return ((::UnityEngine::RenderTexture*(*)(::RPG::Client::MonoEffectPluginFrameCapture_CaptureCameraType, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_PJMGFNNIKBC_OFFSET))(a1, a2);
		}

		::System::Void KJDKCLOCCFN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_KJDKCLOCCFN_OFFSET))(this, a1);
		}

		::System::Void DEFBIDPDGLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_DEFBIDPDGLP_OFFSET))(this);
		}

		::System::Void JKNAMDKMENL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_JKNAMDKMENL_OFFSET))(this);
		}

		::System::Void NKENHJHADAO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_NKENHJHADAO_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginFrameCapture* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginFrameCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_HPNDIIPEFLJ_OFFSET))(this);
		}

		::RPG::Client::MonoEffect* ONPGJCHIKEO()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_ONPGJCHIKEO_OFFSET))(this);
		}

	};
