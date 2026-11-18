#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLPJECICNDE.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define EJAGLDDBEJG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16147FD0)
#define EJAGLDDBEJG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16148280)
#define EJAGLDDBEJG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16148030)
#define EJAGLDDBEJG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16148300)
#define EJAGLDDBEJG__CTOR_OFFSET UNITYSDK_OFFSET(0x16148860)

inline static constexpr unsigned int EJAGLDDBEJG_TypeDefinitionIndex = 58979;

class EJAGLDDBEJG : public ::System::Object
{
public:
	::System::String* KDEFPBLCEHB; // 0x10
	::System::Object* KLBGAHPJAJO; // 0x18
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x20
	::BLPJECICNDE JEJABEHHBIJ; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAGLDDBEJG__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJAGLDDBEJG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EJAGLDDBEJG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EJAGLDDBEJG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EJAGLDDBEJG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
