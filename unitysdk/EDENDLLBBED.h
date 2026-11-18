#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LHHNKBDEMGO;
namespace MoleMole::Config { class DynamicFloat; }

#define EDENDLLBBED_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16BD2EF0)
#define EDENDLLBBED_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16BD31D0)
#define EDENDLLBBED_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16BD2F50)
#define EDENDLLBBED_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16BD3250)
#define EDENDLLBBED__CTOR_OFFSET UNITYSDK_OFFSET(0x16BD36F0)

inline static constexpr unsigned int EDENDLLBBED_TypeDefinitionIndex = 43022;

class EDENDLLBBED : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* PMLOGFLOLNJ; // 0x10
	::Il2CppArray<::LHHNKBDEMGO*>* PIDOLKBBHFN; // 0x18
	::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDENDLLBBED__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EDENDLLBBED_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EDENDLLBBED_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EDENDLLBBED_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EDENDLLBBED_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
