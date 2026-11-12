#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class MonoPathLightControl; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define EBHMCKHPFEB_CBMHBPFCNMJ_OFFSET UNITYSDK_OFFSET(0x13AA6F10)
#define EBHMCKHPFEB_CTOR_OFFSET UNITYSDK_OFFSET(0x13AA9A90)
#define EBHMCKHPFEB_FOIBOJAKNLO_OFFSET UNITYSDK_OFFSET(0x13AA9480)
#define EBHMCKHPFEB_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0x13AA6D40)
#define EBHMCKHPFEB_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x13AA6CD0)
#define EBHMCKHPFEB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x13AA6830)
#define EBHMCKHPFEB_ODOONEMCBAB_OFFSET UNITYSDK_OFFSET(0x13AA7F60)

inline static constexpr unsigned int EBHMCKHPFEB_TypeDefinitionIndex = 72342;

	class EBHMCKHPFEB : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::MaterialPropertyBlock* IOCGPFBNHGJ; // 0x18
		::UnityEngine::Vector3 JBIJNCJEFIB; // 0x20
		::UnityEngine::Vector4 HDNFNONGHCP; // 0x2C
		::System::Single EEPGKELFPFL; // 0x3C
		::UnityEngine::Vector3 DCPMGDCGHFK; // 0x40
		::UnityEngine::Vector3 OEJLOADFCGB; // 0x4C
		::UnityEngine::Vector3 NILAGOHELML; // 0x58
		::UnityEngine::Vector3 ICNBBLAOJGH; // 0x64
		::System::Single HMNKOANNINJ; // 0x70
		::UnityEngine::Vector3 PDKDKJIEHPC; // 0x74
		::System::Single DEIMGIGLHLK; // 0x80
		::System::Single LKBKDNAMNEG; // 0x84
		::System::Single GHABAAOGBNO; // 0x88
		::System::Single GHCBGHCGBBJ; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHMCKHPFEB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + EBHMCKHPFEB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHMCKHPFEB_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void CBMHBPFCNMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHMCKHPFEB_CBMHBPFCNMJ_OFFSET))(this);
		}

		::System::Void ODOONEMCBAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHMCKHPFEB_ODOONEMCBAB_OFFSET))(this);
		}

		::System::Void FOIBOJAKNLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHMCKHPFEB_FOIBOJAKNLO_OFFSET))(this);
		}

		::RPG::Client::MonoPathLightControl* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoPathLightControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHMCKHPFEB_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
