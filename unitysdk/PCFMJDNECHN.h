#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFAIAHOPCNM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define PCFMJDNECHN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18460770)
#define PCFMJDNECHN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18460360)
#define PCFMJDNECHN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x184607D0)
#define PCFMJDNECHN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x184603E0)
#define PCFMJDNECHN__CTOR_OFFSET UNITYSDK_OFFSET(0x184609D0)

inline static constexpr unsigned int PCFMJDNECHN_TypeDefinitionIndex = 56467;

class PCFMJDNECHN : public ::System::Object
{
public:
	::MFAIAHOPCNM JMINOGAOFIL; // 0x10
	::System::String* HAMIDAGPIFG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFMJDNECHN__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PCFMJDNECHN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PCFMJDNECHN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PCFMJDNECHN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PCFMJDNECHN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
