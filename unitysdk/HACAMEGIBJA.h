#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyModifierExtraParamsType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define HACAMEGIBJA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13D79580)
#define HACAMEGIBJA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13D79880)
#define HACAMEGIBJA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13D795E0)
#define HACAMEGIBJA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13D79900)
#define HACAMEGIBJA__CTOR_OFFSET UNITYSDK_OFFSET(0x13D79F50)

inline static constexpr unsigned int HACAMEGIBJA_TypeDefinitionIndex = 54844;

class HACAMEGIBJA : public ::System::Object
{
public:
	::System::String* DCIPNHGBKEF; // 0x10
	::System::String* JIHCNIGJLCM; // 0x18
	::System::String* ALHLNGOMPFB; // 0x20
	::MoleMole::Config::MaterialPropertyModifierExtraParamsType HFGIAOIPHJJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACAMEGIBJA__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HACAMEGIBJA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HACAMEGIBJA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HACAMEGIBJA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HACAMEGIBJA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
