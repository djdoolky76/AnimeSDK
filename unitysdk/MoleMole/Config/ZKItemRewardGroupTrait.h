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

#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1279EC30)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1279ED30)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1279EC20)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1279F6B0)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1279F090)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1279FD10)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1279ED20)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1279F710)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1279F110)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1279FB80)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1279F570)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1279FD60)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1279FD70)
#define MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1279FD80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZKItemRewardGroupTrait_TypeDefinitionIndex = 42566;

	class ZKItemRewardGroupTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 ZKRewardSetID; // 0x18
		::System::Int32 MinNum; // 0x1C
		::System::Int32 MaxNum; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZKItemRewardGroupTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZKItemRewardGroupTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZKItemRewardGroupTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZKItemRewardGroupTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKITEMREWARDGROUPTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
