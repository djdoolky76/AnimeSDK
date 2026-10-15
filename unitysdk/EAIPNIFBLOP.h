#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginAutoHide; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MonoBehaviour; }

#define EAIPNIFBLOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1267C060)
#define EAIPNIFBLOP_DGKKHOBIKNN_OFFSET UNITYSDK_OFFSET(0x1267B840)
#define EAIPNIFBLOP_DOAFDKCOJKE_OFFSET UNITYSDK_OFFSET(0x1267B3F0)
#define EAIPNIFBLOP_ELNOPPEHGHJ_OFFSET UNITYSDK_OFFSET(0x1267BE00)
#define EAIPNIFBLOP_GCKBCJFOLMA_OFFSET UNITYSDK_OFFSET(0x1267B640)
#define EAIPNIFBLOP_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x1267B4B0)
#define EAIPNIFBLOP_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x1267B6C0)
#define EAIPNIFBLOP_IDMLHNNHLAG_OFFSET UNITYSDK_OFFSET(0x1267BBF0)
#define EAIPNIFBLOP_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x1267B350)
#define EAIPNIFBLOP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1267B2E0)
#define EAIPNIFBLOP_NMKLAHOJBOC_OFFSET UNITYSDK_OFFSET(0x1267BA90)
#define EAIPNIFBLOP_PGANMMFEBCF_OFFSET UNITYSDK_OFFSET(0x1267B730)
#define EAIPNIFBLOP_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0x1267B460)

inline static constexpr unsigned int EAIPNIFBLOP_TypeDefinitionIndex = 69860;

	class EAIPNIFBLOP : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Camera* DMBMOHJLNEN; // 0x18
		::System::Boolean MPECKIIKDGD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIPNIFBLOP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + EAIPNIFBLOP_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIPNIFBLOP_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIPNIFBLOP_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAIPNIFBLOP_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Boolean GCKBCJFOLMA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIPNIFBLOP_GCKBCJFOLMA_OFFSET))(this);
		}

		::System::Boolean PGANMMFEBCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIPNIFBLOP_PGANMMFEBCF_OFFSET))(this);
		}

		::System::Boolean DGKKHOBIKNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIPNIFBLOP_DGKKHOBIKNN_OFFSET))(this);
		}

		::System::Boolean NMKLAHOJBOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIPNIFBLOP_NMKLAHOJBOC_OFFSET))(this);
		}

		::System::Boolean IDMLHNNHLAG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIPNIFBLOP_IDMLHNNHLAG_OFFSET))(this);
		}

		::System::Boolean ELNOPPEHGHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIPNIFBLOP_ELNOPPEHGHJ_OFFSET))(this);
		}

		::System::Void DOAFDKCOJKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIPNIFBLOP_DOAFDKCOJKE_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginAutoHide* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginAutoHide*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIPNIFBLOP_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
