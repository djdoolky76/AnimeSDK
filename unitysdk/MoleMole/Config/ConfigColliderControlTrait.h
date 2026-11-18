#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigColliderRegisterData.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x16530B20)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16530C20)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16530AD0)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16531200)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16530DC0)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16531670)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x16530C10)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16531260)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16530E40)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16531450)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x165310C0)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_POSTBUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x165315E0)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16531710)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16531720)
#define MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16531730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigColliderControlTrait_TypeDefinitionIndex = 42858;

	class ConfigColliderControlTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigColliderRegisterData>* ColliderConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigColliderControlTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigColliderControlTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigColliderControlTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigColliderControlTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean PostBuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_POSTBUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOLLIDERCONTROLTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
