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

#define MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19257DB0)
#define MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19257EB0)
#define MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19257D60)
#define MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19258630)
#define MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19258130)
#define MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19258BC0)
#define MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19257EA0)
#define MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19258690)
#define MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192581B0)
#define MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19258A30)
#define MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x192584F0)
#define MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19258C60)
#define MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19258C70)
#define MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19258C80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GroupLimitedLevelAdjustTrait_TypeDefinitionIndex = 86376;

	class GroupLimitedLevelAdjustTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 LevelAdjustID; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* ApplySuites; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::GroupLimitedLevelAdjustTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::GroupLimitedLevelAdjustTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::GroupLimitedLevelAdjustTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::GroupLimitedLevelAdjustTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GROUPLIMITEDLEVELADJUSTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
