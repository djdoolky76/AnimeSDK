#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DDIKKPFBFJK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15362970)
#define DDIKKPFBFJK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x153625C0)
#define DDIKKPFBFJK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x153629D0)
#define DDIKKPFBFJK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15362640)
#define DDIKKPFBFJK__CTOR_OFFSET UNITYSDK_OFFSET(0x15362D30)

inline static constexpr unsigned int DDIKKPFBFJK_TypeDefinitionIndex = 74696;

class DDIKKPFBFJK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LFPLEFHOKGB; // 0x10
	::System::Int32 ECHMCKDFGLG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIKKPFBFJK__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DDIKKPFBFJK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDIKKPFBFJK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DDIKKPFBFJK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDIKKPFBFJK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
