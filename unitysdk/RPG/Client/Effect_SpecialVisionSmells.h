#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD5F8F0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_CHMCKCNPDIM_OFFSET UNITYSDK_OFFSET(0xCD60210)
#define RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_CTOR_OFFSET UNITYSDK_OFFSET(0xCD602E0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_FIEABFCLLDD_OFFSET UNITYSDK_OFFSET(0xCD5FF00)
#define RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_OCAIEKKKNHC_OFFSET UNITYSDK_OFFSET(0xCD5FD30)
#define RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCD5F9B0)
#define RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xCD5FA70)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_SpecialVisionSmells_TypeDefinitionIndex = 70556;

	class Effect_SpecialVisionSmells : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* OnScanEffectPath; // 0x18
		::Il2CppArray<::UnityEngine::GameObject*>* SpecialVisonSmells; // 0x20
		::System::Int32 BDGMFAMOPOO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void FIEABFCLLDD(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_FIEABFCLLDD_OFFSET))(this, a1, a2);
		}

		::System::Void CHMCKCNPDIM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_CHMCKCNPDIM_OFFSET))(this, a1);
		}

		::System::Void OCAIEKKKNHC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPECIALVISIONSMELLS_OCAIEKKKNHC_OFFSET))(this, a1);
		}

	};
}
