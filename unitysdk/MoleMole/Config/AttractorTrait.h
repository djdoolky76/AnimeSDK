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

#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x121B1020)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x121B1120)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x121B0FD0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x121B1670)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x121B12C0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x121B1B00)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x121B1110)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x121B16D0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x121B1340)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x121B1970)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x121B1530)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x121B1BA0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x121B1BB0)
#define MOLEMOLE_CONFIG_ATTRACTORTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x121B1BC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttractorTrait_TypeDefinitionIndex = 77788;

	class AttractorTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* attractorInstanceIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AttractorTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AttractorTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AttractorTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AttractorTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTRACTORTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
