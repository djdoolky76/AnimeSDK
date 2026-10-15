#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginMapImmediatelyFrameCapture; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MonoBehaviour; }

#define KENHNMCFOGL_AJAKNGPDHEN_OFFSET UNITYSDK_OFFSET(0xB37F210)
#define KENHNMCFOGL_CCTOR_OFFSET UNITYSDK_OFFSET(0xB37FE40)
#define KENHNMCFOGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB37FE30)
#define KENHNMCFOGL_DOMDCBDFCGO_OFFSET UNITYSDK_OFFSET(0xB37F4A0)
#define KENHNMCFOGL_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB37FD40)
#define KENHNMCFOGL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB37FCD0)
#define KENHNMCFOGL_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xB37F450)
#define KENHNMCFOGL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB37F3E0)
#define KENHNMCFOGL_LGFJONOLCEH_OFFSET UNITYSDK_OFFSET(0xB37FA10)
#define KENHNMCFOGL_ONPGJCHIKEO_OFFSET UNITYSDK_OFFSET(0xB37FDB0)
#define KENHNMCFOGL_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xB37F9C0)

	class KENHNMCFOGL : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Boolean DEBHLAMIOAE; // 0x18
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_LFDEADJEJPD()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "KENHNMCFOGL")->GetStaticField(0x3F450);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KENHNMCFOGL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KENHNMCFOGL_CCTOR_OFFSET))();
		}

		static ::System::Int32 AJAKNGPDHEN(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + KENHNMCFOGL_AJAKNGPDHEN_OFFSET))(a1);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + KENHNMCFOGL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KENHNMCFOGL_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KENHNMCFOGL_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KENHNMCFOGL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DOMDCBDFCGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KENHNMCFOGL_DOMDCBDFCGO_OFFSET))(this);
		}

		::System::Void LGFJONOLCEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KENHNMCFOGL_LGFJONOLCEH_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginMapImmediatelyFrameCapture* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginMapImmediatelyFrameCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENHNMCFOGL_HPNDIIPEFLJ_OFFSET))(this);
		}

		::RPG::Client::MonoEffect* ONPGJCHIKEO()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENHNMCFOGL_ONPGJCHIKEO_OFFSET))(this);
		}

	};
