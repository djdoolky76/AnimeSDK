#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFrameCapture; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MonoBehaviour; }

#define NGEHPDOIDNI_AJAKNGPDHEN_OFFSET UNITYSDK_OFFSET(0xBBA37B0)
#define NGEHPDOIDNI_CCTOR_OFFSET UNITYSDK_OFFSET(0xBBA4580)
#define NGEHPDOIDNI_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA4570)
#define NGEHPDOIDNI_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xBBA4480)
#define NGEHPDOIDNI_JKNAMDKMENL_OFFSET UNITYSDK_OFFSET(0xBBA4120)
#define NGEHPDOIDNI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBBA4420)
#define NGEHPDOIDNI_KJDKCLOCCFN_OFFSET UNITYSDK_OFFSET(0xBBA3A40)
#define NGEHPDOIDNI_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xBBA39F0)
#define NGEHPDOIDNI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBBA3980)
#define NGEHPDOIDNI_ONPGJCHIKEO_OFFSET UNITYSDK_OFFSET(0xBBA44F0)
#define NGEHPDOIDNI_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xBBA40D0)

	class NGEHPDOIDNI : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Boolean NGLHFGMFJLP; // 0x18
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_LFDEADJEJPD()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "NGEHPDOIDNI")->GetStaticField(0x361A0);
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

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KJDKCLOCCFN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_KJDKCLOCCFN_OFFSET))(this, a1);
		}

		::System::Void JKNAMDKMENL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEHPDOIDNI_JKNAMDKMENL_OFFSET))(this);
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
