#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FICJADOJGMF;
class JNKPPLPLFOM;
namespace RPG::Client { class WolfBroGunPlayTargetActionConfig; }
namespace RPG::Client { class WolfBroGunPlayTarget_Group; }
namespace System { class Action; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_CTOR_OFFSET UNITYSDK_OFFSET(0xE476EB0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_GET_BOSSSCORE_OFFSET UNITYSDK_OFFSET(0xE476E90)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_GIEDGFFCBON_OFFSET UNITYSDK_OFFSET(0xE4765F0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_HLFAPFCOBGJ_OFFSET UNITYSDK_OFFSET(0xE4764D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_IJCCAJDIDGO_OFFSET UNITYSDK_OFFSET(0xE476CA0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_INIT_OFFSET UNITYSDK_OFFSET(0xE476530)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_IOBNGKJNDCP_OFFSET UNITYSDK_OFFSET(0xE4766D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ISBOOMABLE_OFFSET UNITYSDK_OFFSET(0xE4768C0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xE476810)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_JMFJILBEPBG_OFFSET UNITYSDK_OFFSET(0xE476D40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_KILL_OFFSET UNITYSDK_OFFSET(0xE476440)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_MDNCLDAFLLJ_OFFSET UNITYSDK_OFFSET(0xE476CF0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ONHIT_OFFSET UNITYSDK_OFFSET(0xE476950)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_SET_BOSSSCORE_OFFSET UNITYSDK_OFFSET(0xE476EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_Boss_TypeDefinitionIndex = 68723;

	class WolfBroGunPlayTarget_Boss : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* OnHits; // 0xD8
		::System::Single _BossScore_k__BackingField; // 0xE0
		::System::Byte _padding0[0x4];
		::System::Action* OnBossHit; // 0xE8
		::System::Int32 KLJBKJONKMO; // 0xF0
		::System::Int32 HPEGMPIDEKB; // 0xF4
		::System::Collections::Generic::List_1<::JNKPPLPLFOM*>* EDPBILGFCFN; // 0xF8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_CTOR_OFFSET))(this);
		}

		::System::Void Kill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_KILL_OFFSET))(this);
		}

		::System::Void Init(::FICJADOJGMF* a1, ::RPG::Client::WolfBroGunPlayTarget_Group* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FICJADOJGMF*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void GIEDGFFCBON(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_GIEDGFFCBON_OFFSET))(this, a1);
		}

		::System::Void IOBNGKJNDCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_IOBNGKJNDCP_OFFSET))(this);
		}

		::System::Boolean IsHittable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ISHITTABLE_OFFSET))(this);
		}

		::System::Boolean IsBoomable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ISBOOMABLE_OFFSET))(this);
		}

		::System::Boolean OnHit(::UnityEngine::Vector3 a1, ::System::Nullable* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_ONHIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IJCCAJDIDGO(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_IJCCAJDIDGO_OFFSET))(this, a1);
		}

		::System::Boolean MDNCLDAFLLJ(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_MDNCLDAFLLJ_OFFSET))(this, a1);
		}

		::System::Void HLFAPFCOBGJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_HLFAPFCOBGJ_OFFSET))(this, a1);
		}

		::System::Void JMFJILBEPBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_JMFJILBEPBG_OFFSET))(this);
		}

		::System::Single get_BossScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_GET_BOSSSCORE_OFFSET))(this);
		}

		::System::Void set_BossScore(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOSS_SET_BOSSSCORE_OFFSET))(this, a1);
		}

	};
}
