#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x19286CA0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19285CC0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19285DC0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19285CB0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19286700)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19286120)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19286BE0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19285DB0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19286760)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192861A0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19286A50)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x192865C0)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19286F20)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19286F30)
#define MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19286F40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AirBusAttachTrait_TypeDefinitionIndex = 58966;

	class AirBusAttachTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 TargetBusConfigId; // 0x18
		::UnityEngine::Vector3 OffsetPos; // 0x1C
		::UnityEngine::Vector3 OffsetRot; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AirBusAttachTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AirBusAttachTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AirBusAttachTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AirBusAttachTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRBUSATTACHTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
