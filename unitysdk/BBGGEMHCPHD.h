#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoLoopedRotaion; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define BBGGEMHCPHD_CTOR_OFFSET UNITYSDK_OFFSET(0x15E894C0)
#define BBGGEMHCPHD_DOOGHKLOJIO_OFFSET UNITYSDK_OFFSET(0x15E88850)
#define BBGGEMHCPHD_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0x15E88800)
#define BBGGEMHCPHD_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x15E887B0)
#define BBGGEMHCPHD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15E88470)

inline static constexpr unsigned int BBGGEMHCPHD_TypeDefinitionIndex = 70374;

	class BBGGEMHCPHD : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::GameObject* JPCMHJPCJLP; // 0x18
		::RPG::Client::MonoLoopedRotaion* HMHMGLCEALK; // 0x20
		::System::Single LAFPNEPFKLG; // 0x28
		::System::Single JKFCIKKAJCC; // 0x2C
		::System::Single PGMIOKKLHIE; // 0x30
		::UnityEngine::Vector3 HPCHCEFOKJB; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGGEMHCPHD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + BBGGEMHCPHD_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGGEMHCPHD_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void DOOGHKLOJIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGGEMHCPHD_DOOGHKLOJIO_OFFSET))(this);
		}

		::RPG::Client::MonoLoopedRotaion* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoLoopedRotaion*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGGEMHCPHD_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
