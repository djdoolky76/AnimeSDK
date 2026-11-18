#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJIMOJCHIOA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define BOHMJANLLMM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18540E70)
#define BOHMJANLLMM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x185409A0)
#define BOHMJANLLMM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x185888B0)
#define BOHMJANLLMM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18588520)
#define BOHMJANLLMM__CTOR_OFFSET UNITYSDK_OFFSET(0x18540990)

inline static constexpr unsigned int BOHMJANLLMM_TypeDefinitionIndex = 92060;

class BOHMJANLLMM : public ::System::Object
{
public:
	::GJIMOJCHIOA EPNDCMGHMLC; // 0x10
	::System::Int32 INCGAHLKDOJ; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHMJANLLMM__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BOHMJANLLMM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BOHMJANLLMM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BOHMJANLLMM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BOHMJANLLMM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
