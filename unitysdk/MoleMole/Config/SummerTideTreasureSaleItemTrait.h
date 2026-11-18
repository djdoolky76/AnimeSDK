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

#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x165462D0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x16545BA0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16545CA0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16545B90)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16545F30)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16545D40)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x165461E0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x16545C90)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16545FC0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16545DC0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16546020)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x16545DF0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x165464A0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x165464B0)
#define MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x165464C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SummerTideTreasureSaleItemTrait_TypeDefinitionIndex = 53895;

	class SummerTideTreasureSaleItemTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::SummerTideTreasureSaleItemTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::SummerTideTreasureSaleItemTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::SummerTideTreasureSaleItemTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::SummerTideTreasureSaleItemTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SUMMERTIDETREASURESALEITEMTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
