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

#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B935B70)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B935C70)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B935B20)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9361C0)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B935E10)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B936590)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B935C60)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B936220)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B935E90)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B936400)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B936080)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x1B936640)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B936690)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B9366A0)
#define MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B9366B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int OverrideGuidePosTrait_TypeDefinitionIndex = 60999;

	class OverrideGuidePosTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* OverrideGuidePointName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::OverrideGuidePosTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::OverrideGuidePosTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::OverrideGuidePosTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::OverrideGuidePosTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OVERRIDEGUIDEPOSTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
