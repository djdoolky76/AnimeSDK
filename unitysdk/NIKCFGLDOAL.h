#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define NIKCFGLDOAL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE1A1B10)
#define NIKCFGLDOAL_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE1A1AA0)
#define NIKCFGLDOAL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xE1A1B20)
#define NIKCFGLDOAL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xE1A1B00)
#define NIKCFGLDOAL__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A1B30)

inline static constexpr unsigned int NIKCFGLDOAL_TypeDefinitionIndex = 57318;

class NIKCFGLDOAL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKCFGLDOAL__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NIKCFGLDOAL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NIKCFGLDOAL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NIKCFGLDOAL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NIKCFGLDOAL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
