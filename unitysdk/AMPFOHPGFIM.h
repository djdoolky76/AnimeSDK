#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define AMPFOHPGFIM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x134E2BD0)
#define AMPFOHPGFIM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x134E2F40)
#define AMPFOHPGFIM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x134E2C30)
#define AMPFOHPGFIM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x134E2FC0)
#define AMPFOHPGFIM__CTOR_OFFSET UNITYSDK_OFFSET(0x134E3850)

inline static constexpr unsigned int AMPFOHPGFIM_TypeDefinitionIndex = 80373;

class AMPFOHPGFIM : public ::System::Object
{
public:
	::System::String* OHMNDFIHJDB; // 0x10
	::System::String* FFFHHLPPPAJ; // 0x18
	::System::String* JAMAGDDHJEC; // 0x20
	::MoleMole::Config::BaseProperty IFDLMNJCFDL; // 0x28
	::MoleMole::Config::BaseProperty DDFOJAPOALA; // 0x2C
	::MoleMole::Config::BaseProperty DEKDAOELDPF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPFOHPGFIM__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AMPFOHPGFIM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AMPFOHPGFIM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AMPFOHPGFIM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AMPFOHPGFIM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
