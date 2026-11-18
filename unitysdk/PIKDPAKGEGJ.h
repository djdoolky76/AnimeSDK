#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class NOOHEHLBIEK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIKDPAKGEGJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9E77D0)
#define PIKDPAKGEGJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B9E7420)
#define PIKDPAKGEGJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B9E7830)
#define PIKDPAKGEGJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B9E74A0)
#define PIKDPAKGEGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E7A40)

inline static constexpr unsigned int PIKDPAKGEGJ_TypeDefinitionIndex = 74978;

class PIKDPAKGEGJ : public ::System::Object
{
public:
	::System::String* OKLLBNDINPE; // 0x10
	::System::Collections::Generic::List_1<::NOOHEHLBIEK*>* IPIIJIIDAAO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKDPAKGEGJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PIKDPAKGEGJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PIKDPAKGEGJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PIKDPAKGEGJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PIKDPAKGEGJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
