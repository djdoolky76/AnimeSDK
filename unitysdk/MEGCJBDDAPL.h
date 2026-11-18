#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LHHNKBDEMGO;
class LNODBDPJGFL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEGCJBDDAPL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1852B850)
#define MEGCJBDDAPL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1852BDC0)
#define MEGCJBDDAPL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1852B8B0)
#define MEGCJBDDAPL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1852BE40)
#define MEGCJBDDAPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1852C630)

inline static constexpr unsigned int MEGCJBDDAPL_TypeDefinitionIndex = 59965;

class MEGCJBDDAPL : public ::System::Object
{
public:
	::Il2CppArray<::LHHNKBDEMGO*>* PIDOLKBBHFN; // 0x10
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* HDDKMBEPAEA; // 0x18
	::System::Int32 MHOHLBDLGGL; // 0x20
	::System::Boolean BJGJKIEDLON; // 0x24
	::System::Boolean JBCOJIEBHDH; // 0x25

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGCJBDDAPL__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MEGCJBDDAPL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MEGCJBDDAPL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MEGCJBDDAPL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MEGCJBDDAPL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
