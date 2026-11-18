#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJNGDKHLLEG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class MKJBJJHAENF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABHIJPINAMB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17C933B0)
#define ABHIJPINAMB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17C92FF0)
#define ABHIJPINAMB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17C93410)
#define ABHIJPINAMB_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x17C92F80)
#define ABHIJPINAMB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17C93070)
#define ABHIJPINAMB__CTOR_OFFSET UNITYSDK_OFFSET(0x17C93620)

inline static constexpr unsigned int ABHIJPINAMB_TypeDefinitionIndex = 59486;

class ABHIJPINAMB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MKJBJJHAENF*>* KGGDCBDKLIG; // 0x10
	::HJNGDKHLLEG JECBCHOCNJB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHIJPINAMB__CTOR_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABHIJPINAMB_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ABHIJPINAMB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABHIJPINAMB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABHIJPINAMB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ABHIJPINAMB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
