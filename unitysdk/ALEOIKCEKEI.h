#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPBHPONJIAA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define ALEOIKCEKEI_EDGAIHHKCOI_OFFSET UNITYSDK_OFFSET(0x12D05530)
#define ALEOIKCEKEI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12D05190)
#define ALEOIKCEKEI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12D04DF0)
#define ALEOIKCEKEI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12D051F0)
#define ALEOIKCEKEI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12D04E70)
#define ALEOIKCEKEI__CTOR_OFFSET UNITYSDK_OFFSET(0x12D05520)

inline static constexpr unsigned int ALEOIKCEKEI_TypeDefinitionIndex = 85953;

class ALEOIKCEKEI : public ::System::Object
{
public:
	::System::Int32 FOPOENJINMH; // 0x10
	::System::Int32 FDINABGOEGI; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEOIKCEKEI__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ALEOIKCEKEI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ALEOIKCEKEI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::JPBHPONJIAA EDGAIHHKCOI()
	{
		return ((::JPBHPONJIAA(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEOIKCEKEI_EDGAIHHKCOI_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ALEOIKCEKEI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ALEOIKCEKEI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
