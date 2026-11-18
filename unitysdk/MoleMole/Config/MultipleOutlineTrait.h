#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/MultipleOutlineConfig.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x190B6040)
#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x190B6140)
#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x190B5FF0)
#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B6720)
#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x190B62E0)
#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x190B6B00)
#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x190B6130)
#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B6780)
#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x190B6360)
#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x190B6B90)
#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190B6970)
#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x190B65E0)
#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x190B6FB0)
#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x190B6FC0)
#define MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x190B6FD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MultipleOutlineTrait_TypeDefinitionIndex = 53590;

	class MultipleOutlineTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::MultipleOutlineConfig>* OutlineConfigs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MultipleOutlineTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MultipleOutlineTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MultipleOutlineTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MultipleOutlineTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MULTIPLEOUTLINETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
