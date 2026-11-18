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

#define MOLEMOLE_CONFIG_STORETRAITV2_CLONE_OFFSET UNITYSDK_OFFSET(0x1925FF10)
#define MOLEMOLE_CONFIG_STORETRAITV2_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19260010)
#define MOLEMOLE_CONFIG_STORETRAITV2_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1925FE80)
#define MOLEMOLE_CONFIG_STORETRAITV2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19261180)
#define MOLEMOLE_CONFIG_STORETRAITV2_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19260610)
#define MOLEMOLE_CONFIG_STORETRAITV2_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19261AA0)
#define MOLEMOLE_CONFIG_STORETRAITV2_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19260000)
#define MOLEMOLE_CONFIG_STORETRAITV2_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192611E0)
#define MOLEMOLE_CONFIG_STORETRAITV2_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19260690)
#define MOLEMOLE_CONFIG_STORETRAITV2_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19261910)
#define MOLEMOLE_CONFIG_STORETRAITV2_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19261040)
#define MOLEMOLE_CONFIG_STORETRAITV2__CTOR_OFFSET UNITYSDK_OFFSET(0x19261B60)
#define MOLEMOLE_CONFIG_STORETRAITV2___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19261B70)
#define MOLEMOLE_CONFIG_STORETRAITV2___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19261B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StoreTraitV2_TypeDefinitionIndex = 52017;

	class StoreTraitV2 : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 StoreID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* PlayerPosPoint; // 0x20
		::System::Int32 PlayerTeleportID; // 0x28
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* ActiveBackStageMemList; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* ExtraWhiteList; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* StoreIntParamList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAITV2__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAITV2_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAITV2_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAITV2_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAITV2_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAITV2_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAITV2_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::StoreTraitV2* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::StoreTraitV2*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAITV2_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAITV2_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAITV2_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::StoreTraitV2* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::StoreTraitV2*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAITV2_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAITV2_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAITV2___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAITV2___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
