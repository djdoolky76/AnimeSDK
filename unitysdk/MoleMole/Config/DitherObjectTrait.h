#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x190ADD70)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x190AD4A0)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x190AD5A0)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x190AD450)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190AD9D0)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x190AD640)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x190AD590)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190ADA30)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x190AD6C0)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190ADBE0)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x190AD890)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x190ADDC0)
#define MOLEMOLE_CONFIG_DITHEROBJECTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x190ADE00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DitherObjectTrait_TypeDefinitionIndex = 91899;

	class DitherObjectTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* DitherConfigKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::DitherObjectTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::DitherObjectTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::DitherObjectTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::DitherObjectTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DITHEROBJECTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
