#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMBOICFOIAK.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/NCJODCNKFEH.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace MoleMole::Config { class ZKRewardStateEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x16546AE0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16546BE0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16546A70)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16547E90)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x165472C0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x165488F0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x16546BD0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16547EF0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16547340)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x16548A60)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x165484A0)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x16547D50)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT_UPDATETRAITS_OFFSET UNITYSDK_OFFSET(0x16548630)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16548D80)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x16548D90)
#define MOLEMOLE_CONFIG_ZKREWARDTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x16548DA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZKRewardTrait_TypeDefinitionIndex = 50841;

	class ZKRewardTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		static ::System::Boolean* StaticGet_HideDropTextureSheet()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ZKRewardTrait_TypeDefinitionIndex)->GetStaticField(0xCBB0);
		}
		::BMBOICFOIAK ZKRewardType; // 0x18
		::System::Int32 RewardID; // 0x1C
		::System::Collections::Generic::List_1<::MoleMole::Config::ZKRewardStateEntry*>* StateRewards; // 0x20
		::System::Boolean IsMemberDrop; // 0x28
		::System::Byte _padding0[0x3];
		::NCJODCNKFEH DropTimeType; // 0x2C
		::System::Int32 DropVOID; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* ItemAttachPoint; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZKRewardTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZKRewardTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZKRewardTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZKRewardTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void UpdateTraits(::EKHEOJOFLLA* context, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* traits)
		{
			return ((::System::Void(*)(::PVOID, ::EKHEOJOFLLA*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_UPDATETRAITS_OFFSET))(this, context, traits);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZKREWARDTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
