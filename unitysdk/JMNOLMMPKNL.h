#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGBCJPEPGHP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define JMNOLMMPKNL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1874AA50)
#define JMNOLMMPKNL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1874AD50)
#define JMNOLMMPKNL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1874AAB0)
#define JMNOLMMPKNL_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x1874ACE0)
#define JMNOLMMPKNL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1874ADD0)
#define JMNOLMMPKNL__CTOR_OFFSET UNITYSDK_OFFSET(0x1874B330)

inline static constexpr unsigned int JMNOLMMPKNL_TypeDefinitionIndex = 46820;

class JMNOLMMPKNL : public ::System::Object
{
public:
	::System::String* MINILDIPHOG; // 0x10
	::System::String* LMDDCDBEKOO; // 0x18
	::GGBCJPEPGHP HFGIAOIPHJJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNOLMMPKNL__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JMNOLMMPKNL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNOLMMPKNL_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JMNOLMMPKNL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JMNOLMMPKNL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JMNOLMMPKNL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
