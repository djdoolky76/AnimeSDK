#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define FALCFLKDHJB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11AB3260)
#define FALCFLKDHJB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11AB28B0)
#define FALCFLKDHJB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11AB32C0)
#define FALCFLKDHJB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11AB2930)
#define FALCFLKDHJB__CTOR_OFFSET UNITYSDK_OFFSET(0x11AB38F0)

inline static constexpr unsigned int FALCFLKDHJB_TypeDefinitionIndex = 65788;

class FALCFLKDHJB : public ::System::Object
{
public:
	::System::String* DNHBENEOLNI; // 0x10
	::System::Int32 IDIBAPNBHMG; // 0x18
	::System::Boolean MPFEADBFIPP; // 0x1C
	::System::Boolean IEHMHHMKPPD; // 0x1D
	::System::Byte _padding0[0x2];
	::System::Int32 GDFAJCNNBMP; // 0x20
	::System::Int32 FOOKFDFAIAM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FALCFLKDHJB__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FALCFLKDHJB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FALCFLKDHJB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FALCFLKDHJB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FALCFLKDHJB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
