#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define HBIBNDIOKPG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F21290)
#define HBIBNDIOKPG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16F21070)
#define HBIBNDIOKPG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16F212F0)
#define HBIBNDIOKPG_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x16F21060)
#define HBIBNDIOKPG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16F210F0)
#define HBIBNDIOKPG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F21520)

inline static constexpr unsigned int HBIBNDIOKPG_TypeDefinitionIndex = 79177;

class HBIBNDIOKPG : public ::System::Object
{
public:
	::System::Int32 COMIBBNLGMK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIBNDIOKPG__CTOR_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIBNDIOKPG_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HBIBNDIOKPG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HBIBNDIOKPG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HBIBNDIOKPG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HBIBNDIOKPG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
