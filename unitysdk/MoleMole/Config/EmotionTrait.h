#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_EMOTIONTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x192B0AE0)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x192B04A0)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192B05A0)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x192B0490)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192B0830)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192B0640)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_GETEMOTIONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x192B0E10)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x192B0590)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_GETNPCID_OFFSET UNITYSDK_OFFSET(0x192B0D10)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192B08C0)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192B06C0)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x192B0B60)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192B0920)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x192B06F0)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x192B0F00)
#define MOLEMOLE_CONFIG_EMOTIONTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192B0F10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EmotionTrait_TypeDefinitionIndex = 87547;

	class EmotionTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::EmotionTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::EmotionTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::EmotionTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::EmotionTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		static ::System::Int32 GetNpcID(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Int32(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_GETNPCID_OFFSET))(entityHandle);
		}

		static ::Foundation::AssetPath GetEmotionConfigPath(::System::Int32 npcID)
		{
			return ((::Foundation::AssetPath(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT_GETEMOTIONCONFIGPATH_OFFSET))(npcID);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EMOTIONTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
