#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define FAFPHCPMMOF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14AB5F20)
#define FAFPHCPMMOF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14AB6170)
#define FAFPHCPMMOF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14AB5F80)
#define FAFPHCPMMOF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14AB61F0)
#define FAFPHCPMMOF__CTOR_OFFSET UNITYSDK_OFFSET(0x14AB6550)

inline static constexpr unsigned int FAFPHCPMMOF_TypeDefinitionIndex = 46577;

class FAFPHCPMMOF : public ::System::Object
{
public:
	::System::String* NLMDCHJBIJD; // 0x10
	::System::String* BLBCIPNMIIM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFPHCPMMOF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FAFPHCPMMOF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FAFPHCPMMOF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FAFPHCPMMOF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FAFPHCPMMOF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
