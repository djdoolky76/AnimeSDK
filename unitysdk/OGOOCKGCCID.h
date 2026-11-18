#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define OGOOCKGCCID_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B789AB0)
#define OGOOCKGCCID_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B789710)
#define OGOOCKGCCID_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B789B10)
#define OGOOCKGCCID_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B789790)
#define OGOOCKGCCID__CTOR_OFFSET UNITYSDK_OFFSET(0x1B789CB0)

inline static constexpr unsigned int OGOOCKGCCID_TypeDefinitionIndex = 53612;

class OGOOCKGCCID : public ::System::Object
{
public:
	::System::UInt32 FCLLFKOJCDK; // 0x10
	::System::UInt32 JAJHPKNEOFD; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOOCKGCCID__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OGOOCKGCCID_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGOOCKGCCID_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OGOOCKGCCID_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGOOCKGCCID_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
