#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LNODBDPJGFL;
namespace MoleMole::Config { class DynamicFloat; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CNMPDNJJHDP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13270040)
#define CNMPDNJJHDP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1326FAF0)
#define CNMPDNJJHDP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x132700A0)
#define CNMPDNJJHDP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1326FB70)
#define CNMPDNJJHDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1326FAE0)

inline static constexpr unsigned int CNMPDNJJHDP_TypeDefinitionIndex = 71139;

class CNMPDNJJHDP : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* JGNCDFNAIMI; // 0x10
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* ABFKHPGIBNI; // 0x18
	::System::Boolean AIFEJGALKDG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMPDNJJHDP__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CNMPDNJJHDP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CNMPDNJJHDP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CNMPDNJJHDP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CNMPDNJJHDP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
