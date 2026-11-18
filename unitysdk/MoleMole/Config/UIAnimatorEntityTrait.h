#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_BUILDANIMATORCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B9406D0)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B9403F0)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_BUILDMODELCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B940450)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B93EA90)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B93EB90)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B93EA20)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B93F9E0)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B93F0B0)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B940340)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B93EB80)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_GET_FINALPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B940160)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_GET_ISPREFABDEFINED_OFFSET UNITYSDK_OFFSET(0x1B940020)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B93FA40)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B93F130)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x1B940C60)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1B940A60)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B93FE90)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B93F8A0)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B940E50)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B940E40)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B940E60)
#define MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B940E70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UIAnimatorEntityTrait_TypeDefinitionIndex = 62611;

	class UIAnimatorEntityTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		static ::System::Boolean* StaticGet_IsOpenGadgetDefaultAsyncLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIAnimatorEntityTrait_TypeDefinitionIndex)->GetStaticField(0x12260);
		}
		::System::String* PrefabPath; // 0x18
		::System::String* Layer; // 0x20
		::System::Boolean NeedAttachAccessoryInMono; // 0x28
		::System::Byte _padding0[0x3];
		::MoleMole::Config::EntityType EntityType; // 0x2C
		::System::Int32 TemplateId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT__CCTOR_OFFSET))();
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::UIAnimatorEntityTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::UIAnimatorEntityTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::UIAnimatorEntityTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::UIAnimatorEntityTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean get_IsPrefabDefined()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_GET_ISPREFABDEFINED_OFFSET))(this);
		}

		::Foundation::AssetPath get_FinalPrefabPath()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_GET_FINALPREFABPATH_OFFSET))(this);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void BuildModelComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_BUILDMODELCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void BuildAnimatorComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_BUILDANIMATORCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMATORENTITYTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
