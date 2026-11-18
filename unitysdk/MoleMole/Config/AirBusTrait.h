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

#define MOLEMOLE_CONFIG_AIRBUSTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x11A56C10)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x11A55E10)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x11A55F10)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x11A55E00)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11A56660)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11A56190)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x11A56B80)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x11A55F00)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11A566C0)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x11A56210)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x11A56CB0)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11A569F0)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x11A56520)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A56E80)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x11A56E90)
#define MOLEMOLE_CONFIG_AIRBUSTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x11A56EA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AirBusTrait_TypeDefinitionIndex = 82860;

	class AirBusTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean ManualSetStation; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 ManualSetStationIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AirBusTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AirBusTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AirBusTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AirBusTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
