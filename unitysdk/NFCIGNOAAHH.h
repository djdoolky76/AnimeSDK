#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicFloat; }

#define NFCIGNOAAHH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE736180)
#define NFCIGNOAAHH_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE7363E0)
#define NFCIGNOAAHH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xE7361E0)
#define NFCIGNOAAHH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xE736460)
#define NFCIGNOAAHH__CTOR_OFFSET UNITYSDK_OFFSET(0xE7367D0)

inline static constexpr unsigned int NFCIGNOAAHH_TypeDefinitionIndex = 87312;

class NFCIGNOAAHH : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* KBBJGIMEGFI; // 0x10
	::MoleMole::Config::DynamicFloat* MAJOIJBEFIM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCIGNOAAHH__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NFCIGNOAAHH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NFCIGNOAAHH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NFCIGNOAAHH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NFCIGNOAAHH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
