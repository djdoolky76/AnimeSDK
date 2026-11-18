#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A04BCA0)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A04BDA0)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A04BC50)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A04C750)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A04C100)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A04CD80)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A04BD90)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A04C7B0)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A04C180)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A04CBF0)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A04C610)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x1A04CE30)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04CF50)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A04CF60)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A04CF70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneTransformationVOTrait_TypeDefinitionIndex = 64280;

	class SceneTransformationVOTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean IsOverrideBackStage; // 0x18
		::System::Boolean DefaultBackStage; // 0x19
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::List_1<::System::String*>* AttachTags; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::SceneTransformationVOTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::SceneTransformationVOTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::SceneTransformationVOTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::SceneTransformationVOTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONVOTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
