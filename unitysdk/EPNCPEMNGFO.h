#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLPJECICNDE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define EPNCPEMNGFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1616B540)
#define EPNCPEMNGFO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1616B740)
#define EPNCPEMNGFO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1616B5A0)
#define EPNCPEMNGFO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1616B7C0)
#define EPNCPEMNGFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1616BA80)

inline static constexpr unsigned int EPNCPEMNGFO_TypeDefinitionIndex = 67271;

class EPNCPEMNGFO : public ::System::Object
{
public:
	::System::Object* GPIOJBLKFAJ; // 0x10
	::BLPJECICNDE KGJGBAJEAPJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNCPEMNGFO__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EPNCPEMNGFO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EPNCPEMNGFO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EPNCPEMNGFO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EPNCPEMNGFO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
