#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B8AC5D0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8AC6D0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8AC5C0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8AD050)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8ACA30)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B8AD500)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B8AC6C0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8AD0B0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8ACAB0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1B8AD550)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8AD370)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8ACF10)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8AD6C0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8AD6D0)
#define MOLEMOLE_CONFIG_DIALALONGUPTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B8AD6E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DialAlongUpTrait_TypeDefinitionIndex = 58411;

	class DialAlongUpTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Single rotateSpeed; // 0x18
		::System::Single initialRotation; // 0x1C
		::System::Boolean useRigidbody; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::DialAlongUpTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::DialAlongUpTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::DialAlongUpTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::DialAlongUpTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entity);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIALALONGUPTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
