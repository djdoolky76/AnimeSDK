#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x19262E20)
#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19262400)
#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19262500)
#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x192623B0)
#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19262A50)
#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192626A0)
#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x192624F0)
#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19262AB0)
#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19262720)
#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x19262F50)
#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x19262EA0)
#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19262C90)
#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19262910)
#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19262FF0)
#define MOLEMOLE_CONFIG_VOSEQUENCETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19263000)

namespace MoleMole::Config
{
	inline static constexpr unsigned int VOSequenceTrait_TypeDefinitionIndex = 60923;

	class VOSequenceTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* DefaultSequenceName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::VOSequenceTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::VOSequenceTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::VOSequenceTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::VOSequenceTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSEQUENCETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
