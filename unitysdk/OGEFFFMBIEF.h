#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class ICCGEAMLLAI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OGEFFFMBIEF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF18E210)
#define OGEFFFMBIEF_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF18DE80)
#define OGEFFFMBIEF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xF18E270)
#define OGEFFFMBIEF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xF18DF00)
#define OGEFFFMBIEF__CTOR_OFFSET UNITYSDK_OFFSET(0xF18E520)

inline static constexpr unsigned int OGEFFFMBIEF_TypeDefinitionIndex = 81447;

class OGEFFFMBIEF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::ICCGEAMLLAI*>* MAOFNPIINND; // 0x10
	::System::Int32 BELNJJKMMJP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEFFFMBIEF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OGEFFFMBIEF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGEFFFMBIEF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OGEFFFMBIEF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGEFFFMBIEF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
