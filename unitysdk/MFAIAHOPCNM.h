#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class NFCIDHJGOIB;

#define MFAIAHOPCNM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6F26F0)
#define MFAIAHOPCNM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6F2660)
#define MFAIAHOPCNM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x6F2750)
#define MFAIAHOPCNM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x6F2760)

inline static constexpr unsigned int MFAIAHOPCNM_TypeDefinitionIndex = 74040;

struct alignas(8) MFAIAHOPCNM
{
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x10
	::UnityEngine::Vector3 IFEFGIHOKOC; // 0x1C
	::NFCIDHJGOIB* OMMFLIHBBIH; // 0x28

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MFAIAHOPCNM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFAIAHOPCNM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MFAIAHOPCNM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MFAIAHOPCNM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
