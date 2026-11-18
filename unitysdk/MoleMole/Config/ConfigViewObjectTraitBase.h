#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_CLONE_OFFSET UNITYSDK_OFFSET(0x19B219A0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B039D0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B03720)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B04460)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19B21AB0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19B04E40)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19B21AA0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B21C00)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19B03DB0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B21EB0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19B21B30)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B04DD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectTraitBase_TypeDefinitionIndex = 83385;

	class ConfigViewObjectTraitBase : public ::System::Object
	{
	public:
		::System::Boolean Export2Server; // 0x10
		::System::Boolean isDisable; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigViewObjectTraitBase* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigViewObjectTraitBase* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTTRAITBASE_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}
	};
}
