#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class JKGHMPILFCF;
class OGBFDBGHLDD;

#define IHHGKCHBEGI_BFDANFKFPDO_OFFSET UNITYSDK_OFFSET(0xEBD86F0)
#define IHHGKCHBEGI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xEBD81C0)
#define IHHGKCHBEGI_NFAOKJPILBO_OFFSET UNITYSDK_OFFSET(0xEBD8640)
#define IHHGKCHBEGI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xEBD7A20)
#define IHHGKCHBEGI__CTOR_OFFSET UNITYSDK_OFFSET(0xEBD7A10)

inline static constexpr unsigned int IHHGKCHBEGI_TypeDefinitionIndex = 64194;

class IHHGKCHBEGI : public ::System::Object
{
public:
	::OGBFDBGHLDD* KNJBJPNHMOC; // 0x10
	::JKGHMPILFCF* FDNFADEBJAF; // 0x18
	::System::Single POKBELNKHAA; // 0x20
	::System::Int32 MNBNDLDGFEC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHGKCHBEGI__CTOR_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IHHGKCHBEGI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IHHGKCHBEGI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean NFAOKJPILBO(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IHHGKCHBEGI_NFAOKJPILBO_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean BFDANFKFPDO(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IHHGKCHBEGI_BFDANFKFPDO_OFFSET))(this, HHIJHDFHPOI);
	}
};
