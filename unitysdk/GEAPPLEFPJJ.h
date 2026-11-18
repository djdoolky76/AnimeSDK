#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPEOMEJBKHE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define GEAPPLEFPJJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10EE7180)
#define GEAPPLEFPJJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10EE6D60)
#define GEAPPLEFPJJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10EE71E0)
#define GEAPPLEFPJJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10EE6DE0)
#define GEAPPLEFPJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE73F0)

inline static constexpr unsigned int GEAPPLEFPJJ_TypeDefinitionIndex = 72421;

class GEAPPLEFPJJ : public ::System::Object
{
public:
	::System::String* HAMIDAGPIFG; // 0x10
	::JPEOMEJBKHE JMINOGAOFIL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAPPLEFPJJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GEAPPLEFPJJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GEAPPLEFPJJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GEAPPLEFPJJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GEAPPLEFPJJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
