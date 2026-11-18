#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define OEOMJLDOMGE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C064F0)
#define OEOMJLDOMGE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16C068C0)
#define OEOMJLDOMGE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16C06550)
#define OEOMJLDOMGE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16C06940)
#define OEOMJLDOMGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C06F20)

inline static constexpr unsigned int OEOMJLDOMGE_TypeDefinitionIndex = 59388;

class OEOMJLDOMGE : public ::System::Object
{
public:
	::System::Single EBBBLHBPGDB; // 0x10
	::System::Int32 ICHOLLBBABE; // 0x14
	::System::Boolean HOBJECEEJPH; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single OBCEIDELPCJ; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOMJLDOMGE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OEOMJLDOMGE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OEOMJLDOMGE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OEOMJLDOMGE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OEOMJLDOMGE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
