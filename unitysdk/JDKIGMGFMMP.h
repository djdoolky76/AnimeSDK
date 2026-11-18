#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }

#define JDKIGMGFMMP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13833900)
#define JDKIGMGFMMP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13833DA0)
#define JDKIGMGFMMP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13833960)
#define JDKIGMGFMMP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13833E20)
#define JDKIGMGFMMP__CTOR_OFFSET UNITYSDK_OFFSET(0x13834CE0)

inline static constexpr unsigned int JDKIGMGFMMP_TypeDefinitionIndex = 86635;

class JDKIGMGFMMP : public ::System::Object
{
public:
	::BHEKACANAMA* ECLBBDAJELN; // 0x10
	::MoleMole::Config::DynamicFloat* IDBLDKJOCNF; // 0x18
	::BHEKACANAMA* GICCKFCOHOA; // 0x20
	::MoleMole::Config::DynamicFloat* APAJGCJCNFK; // 0x28
	::MoleMole::Config::DynamicString* KIHGNGKBADE; // 0x30
	::BHEKACANAMA* FJFOJEPJGPA; // 0x38
	::BHEKACANAMA* GECIBAKNBCA; // 0x40
	::BHEKACANAMA* CBIECLNPAJP; // 0x48
	::MoleMole::Config::AbilityTargetting JCDHCBLEEII; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKIGMGFMMP__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JDKIGMGFMMP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JDKIGMGFMMP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JDKIGMGFMMP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JDKIGMGFMMP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
