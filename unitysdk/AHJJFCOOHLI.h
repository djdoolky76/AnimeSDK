#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define AHJJFCOOHLI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17DD8100)
#define AHJJFCOOHLI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17DD7D60)
#define AHJJFCOOHLI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17DD8160)
#define AHJJFCOOHLI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17DD7DE0)
#define AHJJFCOOHLI__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD8300)

inline static constexpr unsigned int AHJJFCOOHLI_TypeDefinitionIndex = 42941;

class AHJJFCOOHLI : public ::System::Object
{
public:
	::System::UInt32 JAJHPKNEOFD; // 0x10
	::System::UInt32 IMDFIDPPOFE; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJJFCOOHLI__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AHJJFCOOHLI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AHJJFCOOHLI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AHJJFCOOHLI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AHJJFCOOHLI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
