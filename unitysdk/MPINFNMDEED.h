#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class NIIGJMGNGHK;

#define MPINFNMDEED_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1303ECB0)
#define MPINFNMDEED_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1303E8B0)
#define MPINFNMDEED_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1303ED10)
#define MPINFNMDEED_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1303E930)
#define MPINFNMDEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1303EFB0)

inline static constexpr unsigned int MPINFNMDEED_TypeDefinitionIndex = 55977;

class MPINFNMDEED : public ::System::Object
{
public:
	::NIIGJMGNGHK* MHEPDHDJJEE; // 0x10
	::System::Boolean FHEKNABJLCN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPINFNMDEED__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MPINFNMDEED_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MPINFNMDEED_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MPINFNMDEED_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MPINFNMDEED_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
