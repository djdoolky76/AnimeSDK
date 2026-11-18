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

#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xFFEC730)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFEC830)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFEC720)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFED1B0)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFFECB90)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xFFED7E0)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFFEC820)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFED210)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFFECC10)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFED650)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFFED070)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFFED890)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFED8A0)
#define MOLEMOLE_CONFIG_SHOWHINTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xFFED8B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShowHintTrait_TypeDefinitionIndex = 59969;

	class ShowHintTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 ShowHintConfigID; // 0x18
		::System::Boolean OverrideObscureState; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 ObscureStateOverride; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ShowHintTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ShowHintTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ShowHintTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ShowHintTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWHINTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
