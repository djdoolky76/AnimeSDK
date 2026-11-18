#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define KEHFHMFPCFG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x157E2AF0)
#define KEHFHMFPCFG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x157E2750)
#define KEHFHMFPCFG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x157E2B50)
#define KEHFHMFPCFG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x157E27D0)
#define KEHFHMFPCFG__CTOR_OFFSET UNITYSDK_OFFSET(0x157E2DB0)

inline static constexpr unsigned int KEHFHMFPCFG_TypeDefinitionIndex = 80688;

class KEHFHMFPCFG : public ::System::Object
{
public:
	::System::Int32 HPDBGHLLHLD; // 0x10
	::System::UInt32 OFJDBJGBDPA; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHFHMFPCFG__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KEHFHMFPCFG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KEHFHMFPCFG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KEHFHMFPCFG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KEHFHMFPCFG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
