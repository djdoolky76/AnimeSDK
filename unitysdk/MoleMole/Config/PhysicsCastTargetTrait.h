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

#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B8B5BE0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8B5CE0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8B5BD0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8B5F70)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8B5D80)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B8B6220)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B8B5CD0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8B6000)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8B5E00)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8B6060)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8B5E30)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B62B0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8B62C0)
#define MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B8B62D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PhysicsCastTargetTrait_TypeDefinitionIndex = 69866;

	class PhysicsCastTargetTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::PhysicsCastTargetTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::PhysicsCastTargetTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::PhysicsCastTargetTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::PhysicsCastTargetTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PHYSICSCASTTARGETTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
