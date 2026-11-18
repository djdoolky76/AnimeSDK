#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicFloat; }

#define LLMHBIBONNB_BFDANFKFPDO_OFFSET UNITYSDK_OFFSET(0x14DBF3C0)
#define LLMHBIBONNB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14DBF110)
#define LLMHBIBONNB_NFAOKJPILBO_OFFSET UNITYSDK_OFFSET(0x14DBF9F0)
#define LLMHBIBONNB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14DBF490)
#define LLMHBIBONNB__CTOR_OFFSET UNITYSDK_OFFSET(0x14DBF100)

inline static constexpr unsigned int LLMHBIBONNB_TypeDefinitionIndex = 90537;

class LLMHBIBONNB : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* HAAEBCOBKFF; // 0x10
	::MoleMole::Config::DynamicFloat* GNHOCNHLCCA; // 0x18
	::MoleMole::Config::DynamicFloat* BFMMEICFNCD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLMHBIBONNB__CTOR_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LLMHBIBONNB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean BFDANFKFPDO(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LLMHBIBONNB_BFDANFKFPDO_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean NFAOKJPILBO(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LLMHBIBONNB_NFAOKJPILBO_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LLMHBIBONNB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
