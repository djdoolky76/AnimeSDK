#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAPDAOIGPPA.h"
#include "unitysdk/MEBGCKEHHIN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class String; }

#define ADCLLHCLMOH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14345050)
#define ADCLLHCLMOH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x143448E0)
#define ADCLLHCLMOH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x143450B0)
#define ADCLLHCLMOH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14344960)
#define ADCLLHCLMOH__CTOR_OFFSET UNITYSDK_OFFSET(0x14345370)

inline static constexpr unsigned int ADCLLHCLMOH_TypeDefinitionIndex = 65451;

class ADCLLHCLMOH : public ::System::Object
{
public:
	::System::String* DCJCHGOGLMF; // 0x10
	::MoleMole::Config::ConfigDynamicValue* NFFHMICOLHL; // 0x18
	::DAPDAOIGPPA NOOLOILNGPL; // 0x20
	::DAPDAOIGPPA PGDKBJFNLOG; // 0x24
	::MEBGCKEHHIN CKIFIBGCCOK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCLLHCLMOH__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ADCLLHCLMOH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ADCLLHCLMOH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ADCLLHCLMOH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ADCLLHCLMOH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
