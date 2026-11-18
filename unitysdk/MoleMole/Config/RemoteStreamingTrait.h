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

#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x12797BD0)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x12797CD0)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12797BC0)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12798650)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12798030)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12798C70)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x12797CC0)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x127986B0)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x127980B0)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12798AE0)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x12798510)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x12798D10)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x12798D20)
#define MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12798D30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RemoteStreamingTrait_TypeDefinitionIndex = 67637;

	class RemoteStreamingTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean IsAutoStreaming; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 GroupID; // 0x1C
		::System::Int32 ConfigID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::RemoteStreamingTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::RemoteStreamingTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::RemoteStreamingTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::RemoteStreamingTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_REMOTESTREAMINGTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
