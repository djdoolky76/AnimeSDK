#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SpecialVisionEntityType.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_CHMCKCNPDIM_OFFSET UNITYSDK_OFFSET(0xCD68450)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_CLLGNONHDGJ_OFFSET UNITYSDK_OFFSET(0xCD67630)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_CTOR_OFFSET UNITYSDK_OFFSET(0xCD686F0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_FIEABFCLLDD_OFFSET UNITYSDK_OFFSET(0xCD68000)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_HDBLFLMPNJB_OFFSET UNITYSDK_OFFSET(0xCD68520)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_IOFEDODPOBL_OFFSET UNITYSDK_OFFSET(0xCD674C0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ODNFKDJGGCD_OFFSET UNITYSDK_OFFSET(0xCD67990)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCD67A90)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD67580)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD67420)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xCD67B30)
#define RPG_CLIENT_EFFECT_SPECIALVISIONHINT_UPDATE_OFFSET UNITYSDK_OFFSET(0xCD67730)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_SpecialVisionHint_TypeDefinitionIndex = 70555;

	class Effect_SpecialVisionHint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::SpecialVisionEntityType EntityType; // 0x18
		::RPG::GameCore::SpecialVisionType VisionType; // 0x1C
		::Il2CppArray<::UnityEngine::GameObject*>* SpecialVisonSmells; // 0x20
		::System::Single ShowSmellPerformDelay; // 0x28
		::System::Boolean CheckIsVisionInUpdate; // 0x2C
		::System::Byte _padding0[0x3];
		::System::String* OnScanEffectPath; // 0x30
		::System::Boolean IsTriggerScanEffectOn; // 0x38
		::System::Boolean FOEPPBLPBEI; // 0x39
		::System::Byte _padding1[0x6];
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* LBPNKEIBNJP; // 0x40
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x48
		::RPG::GameCore::CharacterVisibleComponent* GNGGLGFPEOL; // 0x50
		::System::Int32 BDGMFAMOPOO; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void FIEABFCLLDD(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_FIEABFCLLDD_OFFSET))(this, a1, a2);
		}

		::System::Void CLLGNONHDGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_CLLGNONHDGJ_OFFSET))(this);
		}

		::System::Void CHMCKCNPDIM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_CHMCKCNPDIM_OFFSET))(this, a1);
		}

		::System::Void ODNFKDJGGCD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_ODNFKDJGGCD_OFFSET))(this, a1);
		}

		::System::Void HDBLFLMPNJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_HDBLFLMPNJB_OFFSET))(this);
		}

		::System::Void IOFEDODPOBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONHINT_IOFEDODPOBL_OFFSET))(this);
		}

	};
}
