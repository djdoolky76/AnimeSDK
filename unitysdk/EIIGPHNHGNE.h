#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffectPluginRandomPosInRing; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace UnityEngine { class MonoBehaviour; }

#define EIIGPHNHGNE_ADDLMGNPCNI_OFFSET UNITYSDK_OFFSET(0x154C0E50)
#define EIIGPHNHGNE_BJMGPMDLOPO_OFFSET UNITYSDK_OFFSET(0x154C0360)
#define EIIGPHNHGNE_CTOR_OFFSET UNITYSDK_OFFSET(0x154C0FF0)
#define EIIGPHNHGNE_DBFBBBPAMID_OFFSET UNITYSDK_OFFSET(0x154C08F0)
#define EIIGPHNHGNE_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x154C03B0)
#define EIIGPHNHGNE_JDJHMBNIJLM_OFFSET UNITYSDK_OFFSET(0x154C0680)
#define EIIGPHNHGNE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x154C06D0)
#define EIIGPHNHGNE_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x154C0620)
#define EIIGPHNHGNE_KPDEJCPBMFN_OFFSET UNITYSDK_OFFSET(0x154C0420)
#define EIIGPHNHGNE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x154C01B0)
#define EIIGPHNHGNE_MCGHLAKFDKH_OFFSET UNITYSDK_OFFSET(0x154C0A40)

inline static constexpr unsigned int EIIGPHNHGNE_TypeDefinitionIndex = 69894;

	class EIIGPHNHGNE : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::GameCore::EntityPosAdaptionConfig* KKHALJLJLGA; // 0x18
		::System::Single IIBKAOOBCFJ; // 0x20
		::System::Single PGMIOKKLHIE; // 0x24
		::UnityEngine::Vector3 KFEJGBAKKEF; // 0x28
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
