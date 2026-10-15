#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPEBLEKDAGI.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DLNCBOGAMFG;
class KDFFHMDFALG;
namespace EffectPlugin { class Effect_CustomFollowPlugin; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginPerformEventListener; }
namespace RPG::GameCore { class MapRotationCameraConfig; }
namespace RPG::GameCore { class PlayerEnergyConfig; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FNFAEAEOFAN_AKAMIKMOPMD_OFFSET UNITYSDK_OFFSET(0x1586D9E0)
#define FNFAEAEOFAN_BNEBBGLNGCA_OFFSET UNITYSDK_OFFSET(0x1586BFF0)
#define FNFAEAEOFAN_CGNFJINIMDN_OFFSET UNITYSDK_OFFSET(0x1586C1C0)
#define FNFAEAEOFAN_CHEOIBOJJGF_OFFSET UNITYSDK_OFFSET(0x1586D6D0)
#define FNFAEAEOFAN_CLOJJBLDOGJ_OFFSET UNITYSDK_OFFSET(0x1586D450)
#define FNFAEAEOFAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1586E530)
#define FNFAEAEOFAN_DCBHIAOPBPO_OFFSET UNITYSDK_OFFSET(0x1586C0F0)
#define FNFAEAEOFAN_DCDPOCOACJA_OFFSET UNITYSDK_OFFSET(0x1586DFA0)
#define FNFAEAEOFAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1586C2B0)
#define FNFAEAEOFAN_EOGHEJENFHA_OFFSET UNITYSDK_OFFSET(0x1586DA90)
#define FNFAEAEOFAN_FJKDMEOBHBA_OFFSET UNITYSDK_OFFSET(0x1586D380)
#define FNFAEAEOFAN_GOIKOCDNENH_OFFSET UNITYSDK_OFFSET(0x1586E450)
#define FNFAEAEOFAN_HDLGMDCOPLI_OFFSET UNITYSDK_OFFSET(0x1586BF90)
#define FNFAEAEOFAN_HJNFCIAFAMM_OFFSET UNITYSDK_OFFSET(0x1586CF60)
#define FNFAEAEOFAN_HNCNHDIOGON_OFFSET UNITYSDK_OFFSET(0x1586D150)
#define FNFAEAEOFAN_IAGBJEALMOM_OFFSET UNITYSDK_OFFSET(0x1586D670)
#define FNFAEAEOFAN_IENMFNOFEBH_OFFSET UNITYSDK_OFFSET(0x1586D610)
#define FNFAEAEOFAN_JJEPJBNNGJP_OFFSET UNITYSDK_OFFSET(0x1586C460)
#define FNFAEAEOFAN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1586C080)
#define FNFAEAEOFAN_JMLCCBCABKB_OFFSET UNITYSDK_OFFSET(0x1586D790)
#define FNFAEAEOFAN_KAEBEKKIBBJ_OFFSET UNITYSDK_OFFSET(0x1586DC70)
#define FNFAEAEOFAN_KFGIBMIDKHL_OFFSET UNITYSDK_OFFSET(0x1586D940)
#define FNFAEAEOFAN_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0x1586C9A0)
#define FNFAEAEOFAN_MKALMDJBKOJ_OFFSET UNITYSDK_OFFSET(0x1586C600)
#define FNFAEAEOFAN_NBJKKLOBPEM_OFFSET UNITYSDK_OFFSET(0x1586D990)
#define FNFAEAEOFAN_OKHMJEKJEMF_OFFSET UNITYSDK_OFFSET(0x1586CFD0)
#define FNFAEAEOFAN_PCPBCOPEIED_OFFSET UNITYSDK_OFFSET(0x1586D3E0)
#define FNFAEAEOFAN_PHIKFFJDKNH_OFFSET UNITYSDK_OFFSET(0x1586DA40)

	class FNFAEAEOFAN : public ::NPEBLEKDAGI
	{
	public:
		::RPG::GameCore::MapRotationCameraConfig* GGBGBANPMFG; // 0x10
		::DLNCBOGAMFG* BAMECAHHEKC; // 0x18
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x20
		::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0x28
		::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0x30
		::RPG::GameCore::PlayerEnergyConfig* LDNOGBHGKOH; // 0x38
		::System::Boolean OLILHCANLJD; // 0x40
		::System::Boolean BOGHIMFCFMK; // 0x41
		::System::Boolean IPMKNCEPIGC; // 0x42
		// static const ::System::String* AINADPEEOHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_CTOR_OFFSET))(this);
		}

		::System::Void HDLGMDCOPLI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_HDLGMDCOPLI_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DCBHIAOPBPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_DCBHIAOPBPO_OFFSET))(this);
		}

		::System::Void BNEBBGLNGCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_BNEBBGLNGCA_OFFSET))(this);
		}

		::System::Void CGNFJINIMDN(::KDFFHMDFALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFFHMDFALG*))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_CGNFJINIMDN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_DISPOSE_OFFSET))(this);
		}

		::System::Void JJEPJBNNGJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_JJEPJBNNGJP_OFFSET))(this);
		}

		::System::Void LKINOKFJPCL(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_LKINOKFJPCL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HJNFCIAFAMM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_HJNFCIAFAMM_OFFSET))(this, a1);
		}

		::System::Void FJKDMEOBHBA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_FJKDMEOBHBA_OFFSET))(this, a1);
		}

		::System::Void PCPBCOPEIED(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_PCPBCOPEIED_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* CLOJJBLDOGJ(::System::UInt32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_CLOJJBLDOGJ_OFFSET))(this, a1);
		}

		::System::Void IENMFNOFEBH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_IENMFNOFEBH_OFFSET))(this, a1);
		}

		::System::Void IAGBJEALMOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_IAGBJEALMOM_OFFSET))(this);
		}

		::System::Void MKALMDJBKOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_MKALMDJBKOJ_OFFSET))(this);
		}

		::System::Void JMLCCBCABKB(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_JMLCCBCABKB_OFFSET))(this, a1, a2);
		}

		::System::Void CHEOIBOJJGF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_CHEOIBOJJGF_OFFSET))(this, a1);
		}

		::System::Void KFGIBMIDKHL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_KFGIBMIDKHL_OFFSET))(this, a1);
		}

		::System::Void NBJKKLOBPEM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_NBJKKLOBPEM_OFFSET))(this, a1);
		}

		::System::Void AKAMIKMOPMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_AKAMIKMOPMD_OFFSET))(this, a1);
		}

		::System::Void PHIKFFJDKNH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_PHIKFFJDKNH_OFFSET))(this, a1);
		}

		::System::Void EOGHEJENFHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_EOGHEJENFHA_OFFSET))(this, a1);
		}

		::System::Void KAEBEKKIBBJ(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_KAEBEKKIBBJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DCDPOCOACJA(::RPG::Client::MonoEffect* a1, ::RPG::Client::MonoEffect* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::MonoEffect*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_DCDPOCOACJA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GOIKOCDNENH(::EffectPlugin::Effect_CustomFollowPlugin* a1, ::RPG::Client::MonoEffectPluginPerformEventListener* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EffectPlugin::Effect_CustomFollowPlugin*, ::RPG::Client::MonoEffectPluginPerformEventListener*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_GOIKOCDNENH_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::MapRotationCameraConfig* OKHMJEKJEMF()
		{
			return ((::RPG::GameCore::MapRotationCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_OKHMJEKJEMF_OFFSET))(this);
		}

		::System::Void HNCNHDIOGON(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::MapRotationCameraConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::MapRotationCameraConfig*))((::PBYTE)hIl2Cpp + FNFAEAEOFAN_HNCNHDIOGON_OFFSET))(this, a1, a2, a3);
		}

	};
