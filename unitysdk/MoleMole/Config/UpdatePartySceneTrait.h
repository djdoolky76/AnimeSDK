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

#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x19262310)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19261CD0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19261DD0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19261CC0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19262060)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19261E70)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19261DC0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192620F0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19261EF0)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19262150)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19261F20)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19262390)
#define MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192623A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UpdatePartySceneTrait_TypeDefinitionIndex = 75711;

	class UpdatePartySceneTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::UpdatePartySceneTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::UpdatePartySceneTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::UpdatePartySceneTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::UpdatePartySceneTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UPDATEPARTYSCENETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
