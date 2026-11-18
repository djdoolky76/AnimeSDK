#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x118E5040)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x118E48F0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x118E49F0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x118E48E0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x118E4C80)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x118E4A90)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x118E4F30)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x118E49E0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x118E4D10)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x118E4B10)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x118E4D70)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x118E4B40)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x118E5230)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x118E5240)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x118E5250)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SummerTideTreasureSaleOrderTrait_TypeDefinitionIndex = 48577;

	class SummerTideTreasureSaleOrderTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::SummerTideTreasureSaleOrderTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::SummerTideTreasureSaleOrderTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::SummerTideTreasureSaleOrderTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::SummerTideTreasureSaleOrderTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEORDERTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
