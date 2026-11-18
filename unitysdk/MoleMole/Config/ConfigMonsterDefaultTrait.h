#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/MonsterTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19245070)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19245170)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19245020)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19246970)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19245A80)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19247150)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19245160)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192469D0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19245B00)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x192471F0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x19247250)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19246FC0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19246830)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x192477E0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192477F0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19247800)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterDefaultTrait_TypeDefinitionIndex = 69125;

	class ConfigMonsterDefaultTrait : public ::MoleMole::Config::MonsterTraitBase
	{
	public:
		::System::Int32 AIConfigId; // 0x18
		::MoleMole::Config::CampType Camp; // 0x1C
		::System::Boolean TowardsPlayer; // 0x20
		::System::Boolean MuteAI; // 0x21
		::System::Boolean MuteHUD; // 0x22
		::System::Byte _padding0[0x1];
		::System::Single ModelSize; // 0x24
		::System::String* ShowName; // 0x28
		::System::Boolean SkipBorn; // 0x30
		::System::Boolean InitEntityDisable; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMonsterDefaultTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMonsterDefaultTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMonsterDefaultTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMonsterDefaultTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERDEFAULTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
