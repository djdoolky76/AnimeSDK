#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/OMADHHOMDJC.h"

class FKNIEPCILLG;

#define OMFJMGPMDCK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFD928E0)
#define OMFJMGPMDCK_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFD92780)
#define OMFJMGPMDCK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFD929B0)
#define OMFJMGPMDCK_PBALIOGFFFL_OFFSET UNITYSDK_OFFSET(0xFD92730)
#define OMFJMGPMDCK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFD92880)
#define OMFJMGPMDCK__CTOR_OFFSET UNITYSDK_OFFSET(0xFD92A00)

inline static constexpr unsigned int OMFJMGPMDCK_TypeDefinitionIndex = 80849;

class OMFJMGPMDCK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFJMGPMDCK__CTOR_OFFSET))(this);
	}

	::System::Boolean PBALIOGFFFL(::OMADHHOMDJC& AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMADHHOMDJC&))((::PBYTE)hIl2Cpp + OMFJMGPMDCK_PBALIOGFFFL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OMFJMGPMDCK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OMFJMGPMDCK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OMFJMGPMDCK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OMFJMGPMDCK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
