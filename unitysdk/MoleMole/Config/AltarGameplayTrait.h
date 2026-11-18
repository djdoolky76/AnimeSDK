#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOBIJAEPFIF.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x131C8410)
#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x131C8510)
#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x131C8400)
#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x131C8F20)
#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x131C8870)
#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x131C94C0)
#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x131C8500)
#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x131C8F80)
#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x131C88F0)
#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x131C9330)
#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x131C8DE0)
#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_REJECT_OFFSET UNITYSDK_OFFSET(0x131C98D0)
#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x131C9910)
#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x131C9920)
#define MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x131C9930)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AltarGameplayTrait_TypeDefinitionIndex = 49670;

	class AltarGameplayTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::BOBIJAEPFIF Role; // 0x18
		::System::Int32 OwnerGroup; // 0x1C
		::System::Int32 OwnerVOConfigID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AltarGameplayTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AltarGameplayTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AltarGameplayTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AltarGameplayTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		static ::System::Boolean Reject(::System::String* message)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT_REJECT_OFFSET))(message);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ALTARGAMEPLAYTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
