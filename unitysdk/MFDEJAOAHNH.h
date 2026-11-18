#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class FLBMMJOIJCP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MFDEJAOAHNH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13D22EC0)
#define MFDEJAOAHNH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13D22C80)
#define MFDEJAOAHNH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13D22F20)
#define MFDEJAOAHNH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13D22D00)
#define MFDEJAOAHNH__CTOR_OFFSET UNITYSDK_OFFSET(0x13D230D0)

inline static constexpr unsigned int MFDEJAOAHNH_TypeDefinitionIndex = 44625;

class MFDEJAOAHNH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FLBMMJOIJCP*>* OPKONMPIIEM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDEJAOAHNH__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MFDEJAOAHNH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFDEJAOAHNH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFDEJAOAHNH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MFDEJAOAHNH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
