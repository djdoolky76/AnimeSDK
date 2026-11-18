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

#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xFFE5270)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFE5370)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFE5220)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFE57C0)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFFE5410)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFFE5360)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFE5820)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFFE5490)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFE5A00)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFFE5680)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE5B90)
#define MOLEMOLE_CONFIG_DEBUGINFOTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFE5BA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DebugInfoTrait_TypeDefinitionIndex = 85751;

	class DebugInfoTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* DebugInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::DebugInfoTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::DebugInfoTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::DebugInfoTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::DebugInfoTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DEBUGINFOTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
