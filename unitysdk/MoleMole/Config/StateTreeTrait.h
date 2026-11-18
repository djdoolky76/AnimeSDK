#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EKHEOJOFLLA;
class FHPAJHLDJMC;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_STATETREETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B8B7860)
#define MOLEMOLE_CONFIG_STATETREETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B8B6CB0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8B6DB0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8B6CA0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8B7310)
#define MOLEMOLE_CONFIG_STATETREETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8B6E50)
#define MOLEMOLE_CONFIG_STATETREETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B8B7810)
#define MOLEMOLE_CONFIG_STATETREETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B8B6DA0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8B7370)
#define MOLEMOLE_CONFIG_STATETREETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8B6ED0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0x1B8B7EA0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1B8B7970)
#define MOLEMOLE_CONFIG_STATETREETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8B7680)
#define MOLEMOLE_CONFIG_STATETREETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8B71D0)
#define MOLEMOLE_CONFIG_STATETREETRAIT_STARTSTATETREE_OFFSET UNITYSDK_OFFSET(0x1B8B7B90)
#define MOLEMOLE_CONFIG_STATETREETRAIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8B80A0)
#define MOLEMOLE_CONFIG_STATETREETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B8090)
#define MOLEMOLE_CONFIG_STATETREETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8B8100)
#define MOLEMOLE_CONFIG_STATETREETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B8B8110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StateTreeTrait_TypeDefinitionIndex = 39688;

	class StateTreeTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		static ::System::Action_1<::MoleMole::Battle::Entity*>** StaticGet__entityRemoveDelegate()
		{
			return (::System::Action_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(StateTreeTrait_TypeDefinitionIndex)->GetStaticField(0x38890);
		}
		::Foundation::AssetPath AssetPath; // 0x18
		::System::Boolean AutoEnable; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT__CCTOR_OFFSET))();
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::StateTreeTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::StateTreeTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::StateTreeTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::StateTreeTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		static ::System::Void OnEntityRemove(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_ONENTITYREMOVE_OFFSET))(entity);
		}

		static ::System::Void StartStateTree(::MoleMole::Battle::Entity* entity, ::FHPAJHLDJMC* contextComponent)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::FHPAJHLDJMC*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT_STARTSTATETREE_OFFSET))(entity, contextComponent);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
