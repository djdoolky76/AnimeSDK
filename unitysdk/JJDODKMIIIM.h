#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJAKEJOECLF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define JJDODKMIIIM_BFDANFKFPDO_OFFSET UNITYSDK_OFFSET(0x1945E9C0)
#define JJDODKMIIIM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1945E250)
#define JJDODKMIIIM_NFAOKJPILBO_OFFSET UNITYSDK_OFFSET(0x1945E910)
#define JJDODKMIIIM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1945E470)
#define JJDODKMIIIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1945E240)

inline static constexpr unsigned int JJDODKMIIIM_TypeDefinitionIndex = 76066;

class JJDODKMIIIM : public ::System::Object
{
public:
	::System::Single OPODLOACMMJ; // 0x10
	::LJAKEJOECLF INEHMAIDFAL; // 0x14
	::System::Single BIOGBPMINKI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJDODKMIIIM__CTOR_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JJDODKMIIIM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JJDODKMIIIM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean NFAOKJPILBO(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JJDODKMIIIM_NFAOKJPILBO_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean BFDANFKFPDO(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JJDODKMIIIM_BFDANFKFPDO_OFFSET))(this, HHIJHDFHPOI);
	}
};
