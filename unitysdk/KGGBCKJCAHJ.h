#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KGGBCKJCAHJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15B8BA80)
#define KGGBCKJCAHJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15B8B830)
#define KGGBCKJCAHJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15B8BAE0)
#define KGGBCKJCAHJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15B8B8B0)
#define KGGBCKJCAHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8BD40)

inline static constexpr unsigned int KGGBCKJCAHJ_TypeDefinitionIndex = 74524;

class KGGBCKJCAHJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLLOLDOJONK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGBCKJCAHJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KGGBCKJCAHJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KGGBCKJCAHJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KGGBCKJCAHJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KGGBCKJCAHJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
