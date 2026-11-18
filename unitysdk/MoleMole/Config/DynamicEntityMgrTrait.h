#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x165425F0)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x165426F0)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x165425A0)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16542C40)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16542890)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x165426E0)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16542CA0)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16542910)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16542F40)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x16542B00)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x165430D0)
#define MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x165430E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DynamicEntityMgrTrait_TypeDefinitionIndex = 41610;

	class DynamicEntityMgrTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* TagList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::DynamicEntityMgrTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::DynamicEntityMgrTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::DynamicEntityMgrTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::DynamicEntityMgrTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DYNAMICENTITYMGRTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
