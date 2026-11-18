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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x192B4330)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192B4430)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x192B42E0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192B5020)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192B4870)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x192B5780)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x192B4420)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192B5080)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192B48F0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192B55F0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x192B4EE0)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x192B5830)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192B5840)
#define MOLEMOLE_CONFIG_PATHGRAPHTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x192B5850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PathGraphTrait_TypeDefinitionIndex = 52058;

	class PathGraphTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 PathGraphID; // 0x18
		::System::Int32 StateID; // 0x1C
		::System::Boolean EnableAllSubGraph; // 0x20
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Int32>* EnabledSubGraph; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::PathGraphTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::PathGraphTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::PathGraphTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::PathGraphTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATHGRAPHTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
