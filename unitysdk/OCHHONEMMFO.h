#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNLMGNFIOKO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicFloat; }

#define OCHHONEMMFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B773E00)
#define OCHHONEMMFO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B774030)
#define OCHHONEMMFO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B773E60)
#define OCHHONEMMFO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B7740B0)
#define OCHHONEMMFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7743D0)

inline static constexpr unsigned int OCHHONEMMFO_TypeDefinitionIndex = 73299;

class OCHHONEMMFO : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* LPLLFEIJKPO; // 0x10
	::LNLMGNFIOKO GEIMIPECEDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHHONEMMFO__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OCHHONEMMFO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OCHHONEMMFO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OCHHONEMMFO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OCHHONEMMFO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
