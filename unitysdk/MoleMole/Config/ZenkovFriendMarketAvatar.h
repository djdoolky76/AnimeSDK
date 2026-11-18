#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x19267970)
#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_CLONE_OFFSET UNITYSDK_OFFSET(0x19266F00)
#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19267000)
#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19266EF0)
#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19267290)
#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192670A0)
#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19266FF0)
#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19267320)
#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19267120)
#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x19267A30)
#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19267380)
#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19267150)
#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_UPDATETRAITS_OFFSET UNITYSDK_OFFSET(0x19267540)
#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x192680E0)
#define MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192680F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovFriendMarketAvatar_TypeDefinitionIndex = 73851;

	class ZenkovFriendMarketAvatar : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovFriendMarketAvatar* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovFriendMarketAvatar*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovFriendMarketAvatar* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovFriendMarketAvatar*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void UpdateTraits(::EKHEOJOFLLA* context, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* traits)
		{
			return ((::System::Void(*)(::PVOID, ::EKHEOJOFLLA*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_UPDATETRAITS_OFFSET))(this, context, traits);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVFRIENDMARKETAVATAR___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
