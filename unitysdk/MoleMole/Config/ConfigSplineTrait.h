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

#define MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1924EA00)
#define MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1924EB00)
#define MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1924E990)
#define MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1924F2C0)
#define MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1924ED80)
#define MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1924F7C0)
#define MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1924EAF0)
#define MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1924F320)
#define MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1924EE00)
#define MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1924F630)
#define MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1924F180)
#define MOLEMOLE_CONFIG_CONFIGSPLINETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1924F8D0)
#define MOLEMOLE_CONFIG_CONFIGSPLINETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1924F8E0)
#define MOLEMOLE_CONFIG_CONFIGSPLINETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1924F8F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSplineTrait_TypeDefinitionIndex = 74039;

	class ConfigSplineTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* SplineName; // 0x18
		::System::String* MetaDataTag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigSplineTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigSplineTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigSplineTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigSplineTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPLINETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
