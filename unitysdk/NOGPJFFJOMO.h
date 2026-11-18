#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define NOGPJFFJOMO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13773760)
#define NOGPJFFJOMO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13773270)
#define NOGPJFFJOMO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x137737C0)
#define NOGPJFFJOMO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x137732F0)
#define NOGPJFFJOMO__CTOR_OFFSET UNITYSDK_OFFSET(0x13773BB0)

inline static constexpr unsigned int NOGPJFFJOMO_TypeDefinitionIndex = 54063;

class NOGPJFFJOMO : public ::System::Object
{
public:
	::System::Int32 HOMFGOGJNAN; // 0x10
	::System::Int32 AMCDAOJKFNF; // 0x14
	::System::Boolean NNFEDMLCDOD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGPJFFJOMO__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NOGPJFFJOMO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NOGPJFFJOMO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NOGPJFFJOMO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NOGPJFFJOMO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
