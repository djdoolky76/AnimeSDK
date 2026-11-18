#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LHHNKBDEMGO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJMBAOOHHMH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12FF77A0)
#define MJMBAOOHHMH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12FF79D0)
#define MJMBAOOHHMH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12FF7800)
#define MJMBAOOHHMH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12FF7A50)
#define MJMBAOOHHMH__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF7C30)

inline static constexpr unsigned int MJMBAOOHHMH_TypeDefinitionIndex = 76574;

class MJMBAOOHHMH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LHHNKBDEMGO*>* PIDOLKBBHFN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMBAOOHHMH__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MJMBAOOHHMH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MJMBAOOHHMH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MJMBAOOHHMH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MJMBAOOHHMH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
