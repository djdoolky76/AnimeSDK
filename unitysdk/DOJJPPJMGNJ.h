#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define DOJJPPJMGNJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFDCBF70)
#define DOJJPPJMGNJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFDCBBD0)
#define DOJJPPJMGNJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFDCBFD0)
#define DOJJPPJMGNJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFDCBC50)
#define DOJJPPJMGNJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFDCC170)

inline static constexpr unsigned int DOJJPPJMGNJ_TypeDefinitionIndex = 91220;

class DOJJPPJMGNJ : public ::System::Object
{
public:
	::System::UInt32 AGDCHKHKBKA; // 0x10
	::System::UInt32 AMCDAOJKFNF; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJJPPJMGNJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DOJJPPJMGNJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DOJJPPJMGNJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DOJJPPJMGNJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DOJJPPJMGNJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
