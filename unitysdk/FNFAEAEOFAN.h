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

#define FNFAEAEOFAN_AKAMIKMOPMD_OFFSET UNITYSDK_OFFSET(0x15861C60)
#define FNFAEAEOFAN_BNEBBGLNGCA_OFFSET UNITYSDK_OFFSET(0x15860260)
#define FNFAEAEOFAN_CGNFJINIMDN_OFFSET UNITYSDK_OFFSET(0x15860430)
#define FNFAEAEOFAN_CHEOIBOJJGF_OFFSET UNITYSDK_OFFSET(0x15861950)
#define FNFAEAEOFAN_CLOJJBLDOGJ_OFFSET UNITYSDK_OFFSET(0x158616D0)
#define FNFAEAEOFAN_CTOR_OFFSET UNITYSDK_OFFSET(0x158627B0)
#define FNFAEAEOFAN_DCBHIAOPBPO_OFFSET UNITYSDK_OFFSET(0x15860360)
#define FNFAEAEOFAN_DCDPOCOACJA_OFFSET UNITYSDK_OFFSET(0x15862220)
#define FNFAEAEOFAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15860520)
#define FNFAEAEOFAN_EOGHEJENFHA_OFFSET UNITYSDK_OFFSET(0x15861D10)
#define FNFAEAEOFAN_FJKDMEOBHBA_OFFSET UNITYSDK_OFFSET(0x15861600)
#define FNFAEAEOFAN_GOIKOCDNENH_OFFSET UNITYSDK_OFFSET(0x158626D0)
#define FNFAEAEOFAN_HDLGMDCOPLI_OFFSET UNITYSDK_OFFSET(0x15860200)
#define FNFAEAEOFAN_HJNFCIAFAMM_OFFSET UNITYSDK_OFFSET(0x158611E0)
#define FNFAEAEOFAN_HNCNHDIOGON_OFFSET UNITYSDK_OFFSET(0x158613D0)
#define FNFAEAEOFAN_IAGBJEALMOM_OFFSET UNITYSDK_OFFSET(0x158618F0)
#define FNFAEAEOFAN_IENMFNOFEBH_OFFSET UNITYSDK_OFFSET(0x15861890)
#define FNFAEAEOFAN_JJEPJBNNGJP_OFFSET UNITYSDK_OFFSET(0x158606D0)
#define FNFAEAEOFAN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x158602F0)
#define FNFAEAEOFAN_JMLCCBCABKB_OFFSET UNITYSDK_OFFSET(0x15861A10)
#define FNFAEAEOFAN_KAEBEKKIBBJ_OFFSET UNITYSDK_OFFSET(0x15861EF0)
#define FNFAEAEOFAN_KFGIBMIDKHL_OFFSET UNITYSDK_OFFSET(0x15861BC0)
#define FNFAEAEOFAN_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0x15860C20)
#define FNFAEAEOFAN_MKALMDJBKOJ_OFFSET UNITYSDK_OFFSET(0x15860870)
#define FNFAEAEOFAN_NBJKKLOBPEM_OFFSET UNITYSDK_OFFSET(0x15861C10)
#define FNFAEAEOFAN_OKHMJEKJEMF_OFFSET UNITYSDK_OFFSET(0x15861250)
#define FNFAEAEOFAN_PCPBCOPEIED_OFFSET UNITYSDK_OFFSET(0x15861660)
#define FNFAEAEOFAN_PHIKFFJDKNH_OFFSET UNITYSDK_OFFSET(0x15861CC0)

inline static constexpr unsigned int FNFAEAEOFAN_TypeDefinitionIndex = 60609;

	class FNFAEAEOFAN : public ::NPEBLEKDAGI
	{
	public:
		::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0x10
		::RPG::GameCore::MapRotationCameraConfig* GGBGBANPMFG; // 0x18
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x20
		::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0x28
		::DLNCBOGAMFG* BAMECAHHEKC; // 0x30
		::RPG::GameCore::PlayerEnergyConfig* LDNOGBHGKOH; // 0x38
		::System::Boolean BOGHIMFCFMK; // 0x40
		::System::Boolean IPMKNCEPIGC; // 0x41
		::System::Boolean OLILHCANLJD; // 0x42
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
