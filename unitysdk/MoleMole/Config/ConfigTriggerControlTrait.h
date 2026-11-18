#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTriggerCreationData.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6DB780)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6DB880)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6DB710)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6DBFF0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6DBA20)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C6DC500)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1C6DB870)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6DC050)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6DBAA0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6DC370)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6DBEB0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DC5F0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6DC600)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C6DC610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTriggerControlTrait_TypeDefinitionIndex = 86263;

	class ConfigTriggerControlTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ColliderConfig; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTriggerCreationData>* ColliderCreation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigTriggerControlTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigTriggerControlTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigTriggerControlTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigTriggerControlTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
