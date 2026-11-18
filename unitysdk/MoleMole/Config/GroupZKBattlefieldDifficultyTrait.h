#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0430B0)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A0431B0)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A0430A0)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A0436E0)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A043350)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A043B40)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_GETFLOORDIFFICULTYTAGID_OFFSET UNITYSDK_OFFSET(0x1A043EE0)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A0431A0)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A043740)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A0433D0)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A0439B0)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A0435A0)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A044020)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A044030)
#define MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A044040)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GroupZKBattlefieldDifficultyTrait_TypeDefinitionIndex = 44712;

	class GroupZKBattlefieldDifficultyTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 ZKLevelTagID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::GroupZKBattlefieldDifficultyTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::GroupZKBattlefieldDifficultyTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::GroupZKBattlefieldDifficultyTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::GroupZKBattlefieldDifficultyTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		static ::System::Int32 GetFloorDifficultyTagID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT_GETFLOORDIFFICULTYTAGID_OFFSET))();
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPZKBATTLEFIELDDIFFICULTYTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
