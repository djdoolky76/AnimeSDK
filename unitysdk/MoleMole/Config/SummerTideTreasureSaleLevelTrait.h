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

#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BA4D820)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1BA4C600)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA4C700)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA4C5F0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA4D080)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA4CA60)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BA4D6E0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1BA4C6F0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA4D0E0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA4CAE0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA4D550)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA4CF40)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4DA10)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA4DA20)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BA4DA30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SummerTideTreasureSaleLevelTrait_TypeDefinitionIndex = 84539;

	class SummerTideTreasureSaleLevelTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 ItemVOConfigId; // 0x18
		::System::Int32 OrderVOConfigId; // 0x1C
		::System::Int32 OrderNumInTurn; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::SummerTideTreasureSaleLevelTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::SummerTideTreasureSaleLevelTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::SummerTideTreasureSaleLevelTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::SummerTideTreasureSaleLevelTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALELEVELTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
