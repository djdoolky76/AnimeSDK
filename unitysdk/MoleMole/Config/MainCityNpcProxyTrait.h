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

#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19B24B20)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B24C20)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B24B10)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B25150)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19B24DC0)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19B255B0)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19B24C10)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B251B0)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19B24E40)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B25420)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19B25010)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B25650)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B25660)
#define MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19B25670)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MainCityNpcProxyTrait_TypeDefinitionIndex = 66278;

	class MainCityNpcProxyTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 TagID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MainCityNpcProxyTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MainCityNpcProxyTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MainCityNpcProxyTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MainCityNpcProxyTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAINCITYNPCPROXYTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
