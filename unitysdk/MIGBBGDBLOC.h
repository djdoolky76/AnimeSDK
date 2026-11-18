#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }

#define MIGBBGDBLOC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10757950)
#define MIGBBGDBLOC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10757D70)
#define MIGBBGDBLOC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x107579B0)
#define MIGBBGDBLOC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10757DF0)
#define MIGBBGDBLOC__CTOR_OFFSET UNITYSDK_OFFSET(0x10758820)

inline static constexpr unsigned int MIGBBGDBLOC_TypeDefinitionIndex = 52150;

class MIGBBGDBLOC : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* JCKEFMINCFA; // 0x10
	::MoleMole::Config::DynamicFloat* PKILJPBNHGG; // 0x18
	::MoleMole::Config::DynamicFloat* IENFLAEEEMI; // 0x20
	::MoleMole::Config::DynamicFloat* NPGIBIBFAHI; // 0x28
	::MoleMole::Config::DynamicFloat* IHFJNJLEGFF; // 0x30
	::MoleMole::Config::DynamicInt* OHFEBGBIHJB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGBBGDBLOC__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MIGBBGDBLOC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MIGBBGDBLOC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MIGBBGDBLOC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MIGBBGDBLOC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
