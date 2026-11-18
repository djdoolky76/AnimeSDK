#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/Wwise_SwitchGroup_Atkelem.h"
#include "unitysdk/MoleMole/Config/Wwise_SwitchGroup_Atkweapon.h"
#include "unitysdk/MoleMole/Config/Wwise_SwitchGroup_Imactlevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class ConfigEntityAttackEffectItem; }
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA2A9C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA29D50)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA2AA20)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA29DD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA2AE40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackEffect_TypeDefinitionIndex = 85137;

	class ConfigEntityAttackEffect : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>* CounterAttackEffects; // 0x10
		::MoleMole::Config::ConfigSoundActionGeneral* soundActionMp; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAttackEffectItem*>* AttackEffects; // 0x20
		::System::String* AudioPatternMp; // 0x28
		::System::String* GamepadRumbleKey; // 0x30
		::System::String* AudioPattern; // 0x38
		::MoleMole::Config::ConfigSoundActionGeneral* soundAction; // 0x40
		::MoleMole::Config::Wwise_SwitchGroup_Atkelem AtkElem; // 0x48
		::MoleMole::Config::Wwise_SwitchGroup_Imactlevel ImactLevel; // 0x4C
		::MoleMole::Config::Wwise_SwitchGroup_Atkweapon AtkWeapon; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKEFFECT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
