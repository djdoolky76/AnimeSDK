#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FICJADOJGMF;
class JNKPPLPLFOM;
namespace RPG::Client { class WolfBroGunPlayTargetActionConfig; }
namespace RPG::Client { class WolfBroGunPlayTarget_Group; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_CTOR_OFFSET UNITYSDK_OFFSET(0xE478880)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_GIEDGFFCBON_OFFSET UNITYSDK_OFFSET(0xE478240)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_INIT_OFFSET UNITYSDK_OFFSET(0xE478180)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ISBOOMABLE_OFFSET UNITYSDK_OFFSET(0xE4783D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xE478320)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ONHIT_OFFSET UNITYSDK_OFFSET(0xE478460)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ONLOSSHP_OFFSET UNITYSDK_OFFSET(0xE478840)

namespace RPG::Client
{
	class WolfBroGunPlayTarget_HP : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::System::UInt32 HP; // 0xD8
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* OnHits; // 0xE0
		::System::Int32 KLJBKJONKMO; // 0xE8
		::System::Int32 HPEGMPIDEKB; // 0xEC
		::System::Collections::Generic::List_1<::JNKPPLPLFOM*>* EDPBILGFCFN; // 0xF0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_CTOR_OFFSET))(this);
		}

		::System::Void Init(::FICJADOJGMF* a1, ::RPG::Client::WolfBroGunPlayTarget_Group* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FICJADOJGMF*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void GIEDGFFCBON(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_GIEDGFFCBON_OFFSET))(this, a1);
		}

		::System::Boolean IsHittable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ISHITTABLE_OFFSET))(this);
		}

		::System::Boolean IsBoomable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ISBOOMABLE_OFFSET))(this);
		}

		::System::Boolean OnHit(::UnityEngine::Vector3 a1, ::System::Nullable* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ONHIT_OFFSET))(this, a1, a2);
		}

		::System::Void OnLossHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HP_ONLOSSHP_OFFSET))(this);
		}

	};
}
