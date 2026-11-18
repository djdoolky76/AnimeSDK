#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A04E8F0)
#define MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A04E9F0)
#define MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A04E8A0)
#define MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A04EF40)
#define MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A04EB90)
#define MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A04E9E0)
#define MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A04EFA0)
#define MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A04EC10)
#define MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A04F180)
#define MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A04EE00)
#define MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04F310)
#define MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A04F320)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovHunterMonsterTrait_TypeDefinitionIndex = 45573;

	class ZenkovHunterMonsterTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* RewardRollbackPoint; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovHunterMonsterTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovHunterMonsterTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovHunterMonsterTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovHunterMonsterTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVHUNTERMONSTERTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
