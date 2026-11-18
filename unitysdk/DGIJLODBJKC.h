#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIBGOLJCKAE.h"
#include "unitysdk/JHFPEBIPELG.h"
#include "unitysdk/MoleMole/Config/RuntimePolygonBound.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGIJLODBJKC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6DE300)
#define DGIJLODBJKC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6DE270)
#define DGIJLODBJKC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x6DE390)
#define DGIJLODBJKC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x6DE360)

inline static constexpr unsigned int DGIJLODBJKC_TypeDefinitionIndex = 40819;

struct alignas(8) DGIJLODBJKC
{
	::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* IGKDHNHBOAH; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* JAPAGIECONE; // 0x18
	::System::String* MPGCNNCNDBJ; // 0x20
	::System::Collections::Generic::List_1<::JHFPEBIPELG>* CAFBEKHEADO; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* PGJEEDHIFLK; // 0x30
	::IIBGOLJCKAE BIJGLMBBGFB; // 0x38
	::System::Boolean CHCBHCGLCIB; // 0x3C
	::System::Boolean BCIEJNJKHLB; // 0x3D
	::System::Boolean GPJABBFJCIL; // 0x3E

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DGIJLODBJKC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DGIJLODBJKC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DGIJLODBJKC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DGIJLODBJKC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
