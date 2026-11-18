#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HLGHMFKACOB;
namespace System { class String; }

#define HOBAOAJAEKP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xEA005C0)
#define HOBAOAJAEKP_FROMFLX_OFFSET UNITYSDK_OFFSET(0xEA00040)
#define HOBAOAJAEKP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xEA00620)
#define HOBAOAJAEKP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xEA000C0)
#define HOBAOAJAEKP__CTOR_OFFSET UNITYSDK_OFFSET(0xEA00960)

inline static constexpr unsigned int HOBAOAJAEKP_TypeDefinitionIndex = 60730;

class HOBAOAJAEKP : public ::System::Object
{
public:
	::HLGHMFKACOB* CNKILLBPPMM; // 0x10
	::System::String* LKGFJFAMAMP; // 0x18
	::System::Int32 MPKAEBPNHHD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBAOAJAEKP__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HOBAOAJAEKP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HOBAOAJAEKP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HOBAOAJAEKP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HOBAOAJAEKP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
