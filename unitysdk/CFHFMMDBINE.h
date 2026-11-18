#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define CFHFMMDBINE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x128ECB60)
#define CFHFMMDBINE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x128EC690)
#define CFHFMMDBINE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x128ECBC0)
#define CFHFMMDBINE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x128EC710)
#define CFHFMMDBINE__CTOR_OFFSET UNITYSDK_OFFSET(0x128ECDA0)

inline static constexpr unsigned int CFHFMMDBINE_TypeDefinitionIndex = 93102;

class CFHFMMDBINE : public ::System::Object
{
public:
	::UnityEngine::Vector3 BDIEDFPGFHF; // 0x10
	::System::Single JHJLMNHDGDN; // 0x1C
	::System::UInt32 INCGAHLKDOJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHFMMDBINE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CFHFMMDBINE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CFHFMMDBINE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CFHFMMDBINE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CFHFMMDBINE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
