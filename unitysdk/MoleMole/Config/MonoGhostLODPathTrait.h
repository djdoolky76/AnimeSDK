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

#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xFFE7F60)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFE8060)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFE7F10)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFE85B0)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFFE8200)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFFE8050)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFE8610)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFFE8280)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFE87F0)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFFE8470)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE8980)
#define MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFE8990)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonoGhostLODPathTrait_TypeDefinitionIndex = 92700;

	class MonoGhostLODPathTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* LODPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MonoGhostLODPathTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MonoGhostLODPathTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MonoGhostLODPathTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MonoGhostLODPathTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONOGHOSTLODPATHTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
