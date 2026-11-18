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
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class PerceptionSenseConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B44ED00)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B44E280)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B44E380)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B44E230)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B44E8D0)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B44E520)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B44ECB0)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B44E370)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B44E930)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B44E5A0)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x1B44F1F0)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1B44ED90)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B44EB20)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B44E790)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B44F4A0)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44F490)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B44F500)
#define MOLEMOLE_CONFIG_PERCEPTIONTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B44F510)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PerceptionTrait_TypeDefinitionIndex = 92930;

	class PerceptionTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		static ::System::Action_1<::MoleMole::Battle::Entity*>** StaticGet__entityRemoveDelegate()
		{
			return (::System::Action_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(PerceptionTrait_TypeDefinitionIndex)->GetStaticField(0x486E0);
		}
		::System::Collections::Generic::List_1<::MoleMole::Config::PerceptionSenseConfig*>* SenseList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT__CCTOR_OFFSET))();
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::PerceptionTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::PerceptionTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::PerceptionTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::PerceptionTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		static ::System::Void OnEntityRemove(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT_ONENTITYREMOVE_OFFSET))(entity);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERCEPTIONTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
