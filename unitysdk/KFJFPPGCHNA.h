#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAPBKPHHBHL.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define KFJFPPGCHNA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177034F0)
#define KFJFPPGCHNA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17703770)
#define KFJFPPGCHNA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17703550)
#define KFJFPPGCHNA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x177037F0)
#define KFJFPPGCHNA__CTOR_OFFSET UNITYSDK_OFFSET(0x17703D40)

inline static constexpr unsigned int KFJFPPGCHNA_TypeDefinitionIndex = 76581;

class KFJFPPGCHNA : public ::System::Object
{
public:
	::System::Single HBOJLFKAOOH; // 0x10
	::IAPBKPHHBHL NEAAGGFEJON; // 0x14
	::System::Single PMLOGFLOLNJ; // 0x18
	::MoleMole::Config::BaseProperty AJGBNIEHDEE; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJFPPGCHNA__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KFJFPPGCHNA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KFJFPPGCHNA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KFJFPPGCHNA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KFJFPPGCHNA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
