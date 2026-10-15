#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FICJADOJGMF;
class KFELGAIGHAP;
namespace RPG::Client { class WolfBroGunProjectile; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HENPLPFIHBK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C5ED50)
#define HENPLPFIHBK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C5E530)
#define HENPLPFIHBK_EPHFABNKFGJ_OFFSET UNITYSDK_OFFSET(0x15C5EA30)
#define HENPLPFIHBK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15C5E6B0)
#define HENPLPFIHBK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15C5E4D0)
#define HENPLPFIHBK_OHDPLAMAMHF_OFFSET UNITYSDK_OFFSET(0x15C5ECB0)
#define HENPLPFIHBK_PLOGFHDCFJB_OFFSET UNITYSDK_OFFSET(0x15C5ED40)

	class HENPLPFIHBK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::WolfBroGunProjectile*>* HBCINACLEFE; // 0x10
		::FICJADOJGMF* LGEGKIKIPOB; // 0x18
		::UnityEngine::Transform* EKODGCDDPNI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENPLPFIHBK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::FICJADOJGMF* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FICJADOJGMF*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HENPLPFIHBK_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENPLPFIHBK_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HENPLPFIHBK_JLANKNHFKCN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EPHFABNKFGJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::Client::WolfBroGunProjectile* a3, ::KFELGAIGHAP* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::Client::WolfBroGunProjectile*, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + HENPLPFIHBK_EPHFABNKFGJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::WolfBroGunProjectile* OHDPLAMAMHF(::RPG::Client::WolfBroGunProjectile* a1)
		{
			return ((::RPG::Client::WolfBroGunProjectile*(*)(::PVOID, ::RPG::Client::WolfBroGunProjectile*))((::PBYTE)hIl2Cpp + HENPLPFIHBK_OHDPLAMAMHF_OFFSET))(this, a1);
		}

		::FICJADOJGMF* PLOGFHDCFJB()
		{
			return ((::FICJADOJGMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENPLPFIHBK_PLOGFHDCFJB_OFFSET))(this);
		}

	};
