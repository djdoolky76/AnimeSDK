#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNOCANIDOMJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFF906C0)
#define BNOCANIDOMJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFF90310)
#define BNOCANIDOMJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFF90720)
#define BNOCANIDOMJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFF90390)
#define BNOCANIDOMJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFF90A80)

inline static constexpr unsigned int BNOCANIDOMJ_TypeDefinitionIndex = 43712;

class BNOCANIDOMJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* EBJDDJGJFAI; // 0x10
	::System::Int32 BELNJJKMMJP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNOCANIDOMJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BNOCANIDOMJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BNOCANIDOMJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BNOCANIDOMJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BNOCANIDOMJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
