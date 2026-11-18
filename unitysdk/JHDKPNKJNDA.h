#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBMAPIGLNI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class CCIKICBGGLP;
class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHDKPNKJNDA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C360B80)
#define JHDKPNKJNDA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C360E90)
#define JHDKPNKJNDA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1C360BE0)
#define JHDKPNKJNDA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1C360F10)
#define JHDKPNKJNDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C361520)

inline static constexpr unsigned int JHDKPNKJNDA_TypeDefinitionIndex = 82106;

class JHDKPNKJNDA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::CCIKICBGGLP*>* EECPBDLGNAL; // 0x10
	::System::String* FIFHMLEIKMN; // 0x18
	::System::Single CJLKFOGFONE; // 0x20
	::AJBMAPIGLNI AMAFOLMKMBF; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDKPNKJNDA__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JHDKPNKJNDA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JHDKPNKJNDA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JHDKPNKJNDA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JHDKPNKJNDA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
