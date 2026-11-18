#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDFBGLJPOGL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define FFPBJJNBCPK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x140F0BE0)
#define FFPBJJNBCPK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x140F0850)
#define FFPBJJNBCPK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x140F0C40)
#define FFPBJJNBCPK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x140F08D0)
#define FFPBJJNBCPK__CTOR_OFFSET UNITYSDK_OFFSET(0x140F0E10)

inline static constexpr unsigned int FFPBJJNBCPK_TypeDefinitionIndex = 70069;

class FFPBJJNBCPK : public ::System::Object
{
public:
	::System::String* OJIEDECHHAK; // 0x10
	::KDFBGLJPOGL MGBPCJKFPGN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPBJJNBCPK__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FFPBJJNBCPK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FFPBJJNBCPK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FFPBJJNBCPK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FFPBJJNBCPK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
