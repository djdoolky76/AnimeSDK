#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicFloat; }

#define PAMFLCKHJPA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A7DF840)
#define PAMFLCKHJPA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A7DFB10)
#define PAMFLCKHJPA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A7DF8A0)
#define PAMFLCKHJPA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A7DFB90)
#define PAMFLCKHJPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E0090)

inline static constexpr unsigned int PAMFLCKHJPA_TypeDefinitionIndex = 64121;

class PAMFLCKHJPA : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* NIJDIFDIALO; // 0x10
	::MoleMole::Config::DynamicFloat* IHLPLKEHKDP; // 0x18
	::MoleMole::Config::DynamicFloat* GJFIPHFKPPB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMFLCKHJPA__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PAMFLCKHJPA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PAMFLCKHJPA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PAMFLCKHJPA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PAMFLCKHJPA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
