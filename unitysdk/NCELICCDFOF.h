#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class String; }

#define NCELICCDFOF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B629B0)
#define NCELICCDFOF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16B62430)
#define NCELICCDFOF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16B62A10)
#define NCELICCDFOF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16B624B0)
#define NCELICCDFOF__CTOR_OFFSET UNITYSDK_OFFSET(0x16B62C80)

inline static constexpr unsigned int NCELICCDFOF_TypeDefinitionIndex = 67208;

class NCELICCDFOF : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* ODAMAMPFFOA; // 0x10
	::System::String* MGEDBKBHJPM; // 0x18
	::MoleMole::Config::DynamicFloat* CGMNBICLFEI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCELICCDFOF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NCELICCDFOF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NCELICCDFOF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NCELICCDFOF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NCELICCDFOF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
