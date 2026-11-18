#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HIDDFHCDAAC;
class LNODBDPJGFL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKBLJOBEHME_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14256650)
#define BKBLJOBEHME_FROMFLX_OFFSET UNITYSDK_OFFSET(0x142569D0)
#define BKBLJOBEHME_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x142566B0)
#define BKBLJOBEHME_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14256A50)
#define BKBLJOBEHME__CTOR_OFFSET UNITYSDK_OFFSET(0x14257100)

inline static constexpr unsigned int BKBLJOBEHME_TypeDefinitionIndex = 90450;

class BKBLJOBEHME : public ::System::Object
{
public:
	::System::String* NJOKBNEOLNE; // 0x10
	::System::String* EKKCPEADKHM; // 0x18
	::System::Collections::Generic::List_1<::HIDDFHCDAAC*>* GDFBNPNMNFG; // 0x20
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* PMLEKCKACAN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBLJOBEHME__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BKBLJOBEHME_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BKBLJOBEHME_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BKBLJOBEHME_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BKBLJOBEHME_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
