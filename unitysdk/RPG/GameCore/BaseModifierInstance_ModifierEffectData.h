#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAPGFKLGCDH.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TriggerEffectParams; }
namespace System { class String; }

#define RPG_GAMECORE_BASEMODIFIERINSTANCE_MODIFIEREFFECTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF03B000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseModifierInstance_ModifierEffectData_TypeDefinitionIndex = 55595;

	class BaseModifierInstance_ModifierEffectData : public ::System::Object
	{
	public:
		::RPG::Client::TriggerEffectParams* EffectParam; // 0x10
		::System::String* UniqueName; // 0x18
		::EAPGFKLGCDH EffectInst; // 0x20
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flag; // 0x30
		::System::String* DynamicAttach; // 0x38
		::System::String* EffectPath; // 0x40
		::System::Int32 ReuseRefCount; // 0x48
		::RPG::MVector3 RotationOffset; // 0x4C
		::RPG::MVector3 PositionOffset; // 0x58
		::System::Boolean AutoHideInSkill; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_MODIFIEREFFECTDATA_CTOR_OFFSET))(this);
		}

	};
}
