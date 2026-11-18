#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B44CB30)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B44B390)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B44B490)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B44B340)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B44C580)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B44BA90)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B44CA80)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B44B480)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B44C5E0)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B44BB10)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1B44CBB0)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B44C8F0)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B44C440)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44CDD0)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B44CDE0)
#define MOLEMOLE_CONFIG_HACKERDRONETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B44CDF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackerDroneTrait_TypeDefinitionIndex = 64862;

	class HackerDroneTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* BattleRegionKey; // 0x18
		::System::Single CeilingVerticalOffset; // 0x20
		::System::Single FloorVerticalOffset; // 0x24
		::System::Single WarningDistance; // 0x28
		::System::Single ClearWarningDistance; // 0x2C
		::System::Single OutOfRangeTimeoutDuration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::HackerDroneTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::HackerDroneTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::HackerDroneTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::HackerDroneTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERDRONETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
