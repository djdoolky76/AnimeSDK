#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace System { class String; }

#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ADDBOOLEAN_OFFSET UNITYSDK_OFFSET(0x131B98A0)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ADDINTEGER_OFFSET UNITYSDK_OFFSET(0x131B9830)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ADDTRIGGER_OFFSET UNITYSDK_OFFSET(0x131B97C0)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_PROCESSANIMATORPARAMCONTROL_OFFSET UNITYSDK_OFFSET(0x131B9910)
#define MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x131B9770)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int AnimatorButtonControl_TypeDefinitionIndex = 39030;

	class AnimatorButtonControl : public ::System::Object
	{
	public:
		::System::String* activeSkillName; // 0x10
		::MoleMole::Battle::AnimatorParamControl* animatorParamControl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void AddTrigger(::System::String* triggerName, ::System::Boolean isTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ADDTRIGGER_OFFSET))(this, triggerName, isTrigger);
		}

		::System::Void AddInteger(::System::String* name, ::System::Int32 integerValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ADDINTEGER_OFFSET))(this, name, integerValue);
		}

		::System::Void AddBoolean(::System::String* name, ::System::Boolean boolValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_ADDBOOLEAN_OFFSET))(this, name, boolValue);
		}

		::System::Void ProcessAnimatorParamControl(::NLNIIPDCABP* animatorComponent, ::System::Boolean anti)
		{
			return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_ANIMATORBUTTONCONTROL_PROCESSANIMATORPARAMCONTROL_OFFSET))(this, animatorComponent, anti);
		}
	};
}
