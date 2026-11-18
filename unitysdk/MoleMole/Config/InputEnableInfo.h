#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_INPUTENABLEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1B44CF30)
#define MOLEMOLE_CONFIG_INPUTENABLEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B44CFB0)
#define MOLEMOLE_CONFIG_INPUTENABLEINFO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B44D310)
#define MOLEMOLE_CONFIG_INPUTENABLEINFO_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B44D010)
#define MOLEMOLE_CONFIG_INPUTENABLEINFO_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B44D390)
#define MOLEMOLE_CONFIG_INPUTENABLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44CFA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InputEnableInfo_TypeDefinitionIndex = 51740;

	class InputEnableInfo : public ::System::Object
	{
	public:
		::System::Boolean KeepUI; // 0x10
		::System::Boolean Enabled; // 0x11
		::System::Byte _padding0[0x2];
		::MoleMole::Config::InputType InputType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INPUTENABLEINFO__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Config::InputEnableInfo* Clone(::MoleMole::Config::InputEnableInfo* inputEnableInfo)
		{
			return ((::MoleMole::Config::InputEnableInfo*(*)(::MoleMole::Config::InputEnableInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INPUTENABLEINFO_CLONE_OFFSET))(inputEnableInfo);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INPUTENABLEINFO_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INPUTENABLEINFO_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INPUTENABLEINFO_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INPUTENABLEINFO_INTERNALFROMFLX_OFFSET))(this, node);
		}
	};
}
