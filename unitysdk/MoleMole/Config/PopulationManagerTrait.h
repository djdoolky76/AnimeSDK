#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xFAD5EC0)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFAD5FC0)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFAD5EB0)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFAD6250)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFAD6060)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xFAD6500)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFAD5FB0)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFAD62E0)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFAD60E0)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFAD6340)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFAD6110)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFAD6590)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFAD65A0)
#define MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xFAD65B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PopulationManagerTrait_TypeDefinitionIndex = 42392;

	class PopulationManagerTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::PopulationManagerTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::PopulationManagerTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::PopulationManagerTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::PopulationManagerTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POPULATIONMANAGERTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
