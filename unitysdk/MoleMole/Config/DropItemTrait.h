#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class MJHDNMKGLBJ;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DROPITEMTRAIT_BUILDENTITY_OFFSET UNITYSDK_OFFSET(0x192AFDF0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x192AEF00)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192AF000)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x192AEEF0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192AF750)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192AF280)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x192AFCD0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x192AEFF0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_GET_BUILDENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x192AFCB0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_GET_ENABLETRAITFITTING_OFFSET UNITYSDK_OFFSET(0x192AFCC0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192AF7B0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192AF300)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192AFB20)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x192AF610)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x192B03D0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192B03E0)
#define MOLEMOLE_CONFIG_DROPITEMTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x192B03F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DropItemTrait_TypeDefinitionIndex = 72341;

	class DropItemTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 ItemID; // 0x18
		::System::Int32 OverridePickType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::DropItemTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::DropItemTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::DropItemTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::DropItemTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::MoleMole::Config::EntityType get_BuildEntityType()
		{
			return ((::MoleMole::Config::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_GET_BUILDENTITYTYPE_OFFSET))(this);
		}

		::System::Boolean get_EnableTraitFitting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_GET_ENABLETRAITFITTING_OFFSET))(this);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::MoleMole::EntityHandle BuildEntity(::Foundation::ViewObject::ViewObjectHandle handle, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>* extraComponents)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::MJHDNMKGLBJ*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT_BUILDENTITY_OFFSET))(this, handle, extraComponents);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DROPITEMTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
