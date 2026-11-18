#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace MoleMole::Config { class ZKItemConsumeUnlockState; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19B2A180)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B2A280)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B2A110)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B2AEB0)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19B2A6C0)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19B2B520)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19B2A270)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B2AF10)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19B2A740)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B2B390)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19B2AD70)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2B5D0)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B2B5E0)
#define MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19B2B5F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZKItemConsumptionTrait_TypeDefinitionIndex = 78977;

	class ZKItemConsumptionTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 SubmitID; // 0x18
		::System::Int32 AlternativeSubmitID; // 0x1C
		::System::String* AttachPointName; // 0x20
		::MoleMole::Config::ZKItemConsumeUnlockState* UnlockState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZKItemConsumptionTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZKItemConsumptionTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZKItemConsumptionTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZKItemConsumptionTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMCONSUMPTIONTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
