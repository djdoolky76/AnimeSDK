#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B91F920)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B91F2C0)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B91F980)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B91F340)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B91FCC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHitInhalationEffect_TypeDefinitionIndex = 84938;

	class ConfigHitInhalationEffect : public ::System::Object
	{
	public:
		::System::Single MaxInhalationDistance; // 0x10
		::System::Single TargetHeight; // 0x14
		::System::Boolean UseInhalation; // 0x18
		::System::Boolean ApplyAttackerFaceDir; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}
	};
}
