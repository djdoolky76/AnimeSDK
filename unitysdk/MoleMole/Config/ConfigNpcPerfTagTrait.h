#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLMGOICPDIH.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xFFD8B30)
#define MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFD8C30)
#define MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFD8B20)
#define MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFD9130)
#define MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFFD8DD0)
#define MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xFFD94D0)
#define MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFFD8C20)
#define MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFD9190)
#define MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFFD8E50)
#define MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFD9340)
#define MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFFD8FF0)
#define MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFFD9570)
#define MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFD9580)
#define MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xFFD9590)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigNpcPerfTagTrait_TypeDefinitionIndex = 59695;

	class ConfigNpcPerfTagTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::DLMGOICPDIH Priority; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigNpcPerfTagTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigNpcPerfTagTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigNpcPerfTagTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigNpcPerfTagTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCPERFTAGTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
