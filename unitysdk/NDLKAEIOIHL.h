#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LNODBDPJGFL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDLKAEIOIHL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1ADFB9E0)
#define NDLKAEIOIHL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1ADFBF60)
#define NDLKAEIOIHL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1ADFBA40)
#define NDLKAEIOIHL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1ADFBFE0)
#define NDLKAEIOIHL__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADFCBE0)

inline static constexpr unsigned int NDLKAEIOIHL_TypeDefinitionIndex = 44654;

class NDLKAEIOIHL : public ::System::Object
{
public:
	::System::String* LFNMPOCHPLP; // 0x10
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* NKEKFCKBGFB; // 0x18
	::System::String* FKMBJDCCIOJ; // 0x20
	::System::String* LEDJHGNLGAG; // 0x28
	::MoleMole::Config::BaseProperty EHAKJBAKGDL; // 0x30
	::MoleMole::Config::BaseProperty JLOAKAKEOMI; // 0x34
	::System::Boolean GPDBFDHIPKK; // 0x38
	::System::Boolean EEPBGNBIBBL; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAEIOIHL__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NDLKAEIOIHL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NDLKAEIOIHL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NDLKAEIOIHL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NDLKAEIOIHL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
