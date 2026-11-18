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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_INNERSTORETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BA48E70)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_BUILDMODELCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BA48ED0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1BA482F0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA483F0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA482A0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA48940)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA48590)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BA48DC0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1BA483E0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_GET_FINALPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1BA48DB0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_GET_ISPREFABDEFINED_OFFSET UNITYSDK_OFFSET(0x1BA48D10)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA489A0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA48610)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1BA490F0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA48B80)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA48800)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA492D0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA492C0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA492E0)
#define MOLEMOLE_CONFIG_INNERSTORETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1BA492F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InnerStoreTrait_TypeDefinitionIndex = 41014;

	class InnerStoreTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		static ::System::Boolean* StaticGet_IsOpenGadgetDefaultAsyncLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InnerStoreTrait_TypeDefinitionIndex)->GetStaticField(0x131C0);
		}
		::System::String* PrefabPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT__CCTOR_OFFSET))();
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::InnerStoreTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::InnerStoreTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::InnerStoreTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::InnerStoreTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean get_IsPrefabDefined()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_GET_ISPREFABDEFINED_OFFSET))(this);
		}

		::System::String* get_FinalPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_GET_FINALPREFABPATH_OFFSET))(this);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void BuildModelComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_BUILDMODELCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INNERSTORETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
