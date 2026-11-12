#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffectPluginRandomPosInRing; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace UnityEngine { class MonoBehaviour; }

#define EIIGPHNHGNE_ADDLMGNPCNI_OFFSET UNITYSDK_OFFSET(0x1640D580)
#define EIIGPHNHGNE_BJMGPMDLOPO_OFFSET UNITYSDK_OFFSET(0x1640CA90)
#define EIIGPHNHGNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1640D720)
#define EIIGPHNHGNE_DBFBBBPAMID_OFFSET UNITYSDK_OFFSET(0x1640D020)
#define EIIGPHNHGNE_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x1640CAE0)
#define EIIGPHNHGNE_JDJHMBNIJLM_OFFSET UNITYSDK_OFFSET(0x1640CDB0)
#define EIIGPHNHGNE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1640CE00)
#define EIIGPHNHGNE_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x1640CD50)
#define EIIGPHNHGNE_KPDEJCPBMFN_OFFSET UNITYSDK_OFFSET(0x1640CB50)
#define EIIGPHNHGNE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1640C8E0)
#define EIIGPHNHGNE_MCGHLAKFDKH_OFFSET UNITYSDK_OFFSET(0x1640D170)

inline static constexpr unsigned int EIIGPHNHGNE_TypeDefinitionIndex = 71853;

	class EIIGPHNHGNE : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::GameCore::EntityPosAdaptionConfig* KKHALJLJLGA; // 0x18
		::UnityEngine::Vector3 KFEJGBAKKEF; // 0x20
		::System::Single IIBKAOOBCFJ; // 0x2C
		::System::Single PGMIOKKLHIE; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIGPHNHGNE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + EIIGPHNHGNE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIGPHNHGNE_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void JDJHMBNIJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIGPHNHGNE_JDJHMBNIJLM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIIGPHNHGNE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DBFBBBPAMID(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIIGPHNHGNE_DBFBBBPAMID_OFFSET))(this, a1);
		}

		::System::Void KPDEJCPBMFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIGPHNHGNE_KPDEJCPBMFN_OFFSET))(this);
		}

		::System::Void MCGHLAKFDKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIGPHNHGNE_MCGHLAKFDKH_OFFSET))(this);
		}

		::System::Void BJMGPMDLOPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIGPHNHGNE_BJMGPMDLOPO_OFFSET))(this);
		}

		::UnityEngine::Vector3 ADDLMGNPCNI()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIGPHNHGNE_ADDLMGNPCNI_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginRandomPosInRing* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginRandomPosInRing*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIGPHNHGNE_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
