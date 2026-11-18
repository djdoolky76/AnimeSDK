#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define FKCJJLPNAAC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xBB49F90)
#define FKCJJLPNAAC_FROMFLX_OFFSET UNITYSDK_OFFSET(0xBB4A250)
#define FKCJJLPNAAC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xBB49FF0)
#define FKCJJLPNAAC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xBB4A2D0)
#define FKCJJLPNAAC__CTOR_OFFSET UNITYSDK_OFFSET(0xBB4A5F0)

inline static constexpr unsigned int FKCJJLPNAAC_TypeDefinitionIndex = 91174;

class FKCJJLPNAAC : public ::System::Object
{
public:
	::System::Int32 CAIHBEJLDAK; // 0x10
	::System::Single KAKHPAOBAJL; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCJJLPNAAC__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FKCJJLPNAAC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FKCJJLPNAAC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FKCJJLPNAAC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FKCJJLPNAAC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
