#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ELMBMDNGPIH;
class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMCAKJPBNHB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14DF3600)
#define MMCAKJPBNHB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14DF3250)
#define MMCAKJPBNHB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14DF3660)
#define MMCAKJPBNHB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14DF32D0)
#define MMCAKJPBNHB__CTOR_OFFSET UNITYSDK_OFFSET(0x14DF3870)

inline static constexpr unsigned int MMCAKJPBNHB_TypeDefinitionIndex = 73756;

class MMCAKJPBNHB : public ::System::Object
{
public:
	::System::String* OOONELGGOKM; // 0x10
	::System::Collections::Generic::List_1<::ELMBMDNGPIH*>* KDCBBBFMCNO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCAKJPBNHB__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MMCAKJPBNHB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MMCAKJPBNHB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MMCAKJPBNHB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MMCAKJPBNHB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
