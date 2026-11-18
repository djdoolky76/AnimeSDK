#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLBMMJOIJCP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x165B0D20)
#define FLBMMJOIJCP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x165B0660)
#define FLBMMJOIJCP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x165B0D80)
#define FLBMMJOIJCP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x165B06E0)
#define FLBMMJOIJCP__CTOR_OFFSET UNITYSDK_OFFSET(0x165B1250)

inline static constexpr unsigned int FLBMMJOIJCP_TypeDefinitionIndex = 40431;

class FLBMMJOIJCP : public ::System::Object
{
public:
	::System::String* MCOHLHMKLIP; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* OPKONMPIIEM; // 0x18
	::System::Int32 GNHEHOMMHPB; // 0x20
	::System::Int32 MGMDLMBEDJF; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBMMJOIJCP__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FLBMMJOIJCP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FLBMMJOIJCP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FLBMMJOIJCP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FLBMMJOIJCP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
