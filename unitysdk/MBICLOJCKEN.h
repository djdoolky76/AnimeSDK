#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LNODBDPJGFL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MBICLOJCKEN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD443AC0)
#define MBICLOJCKEN_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD443CF0)
#define MBICLOJCKEN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xD443B20)
#define MBICLOJCKEN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xD443D70)
#define MBICLOJCKEN__CTOR_OFFSET UNITYSDK_OFFSET(0xD443F50)

inline static constexpr unsigned int MBICLOJCKEN_TypeDefinitionIndex = 67647;

class MBICLOJCKEN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* JHMDJMNGMPM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBICLOJCKEN__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MBICLOJCKEN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MBICLOJCKEN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MBICLOJCKEN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MBICLOJCKEN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
