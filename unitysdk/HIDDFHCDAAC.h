#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LNODBDPJGFL;
namespace MoleMole::Config { class DynamicFloat; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIDDFHCDAAC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16CF1F10)
#define HIDDFHCDAAC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16CF23A0)
#define HIDDFHCDAAC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16CF1F70)
#define HIDDFHCDAAC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16CF2420)
#define HIDDFHCDAAC__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF2CC0)

inline static constexpr unsigned int HIDDFHCDAAC_TypeDefinitionIndex = 55316;

class HIDDFHCDAAC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* EBKIIKDIGPF; // 0x10
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* GLDBBFHCPNN; // 0x18
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* LMAPHOOJEKG; // 0x20
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* MAIIPAONKJB; // 0x28
	::MoleMole::Config::DynamicFloat* LDNFJACFKAO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDDFHCDAAC__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HIDDFHCDAAC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HIDDFHCDAAC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HIDDFHCDAAC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HIDDFHCDAAC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
