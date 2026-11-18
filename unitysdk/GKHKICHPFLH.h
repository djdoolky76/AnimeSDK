#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HIDDFHCDAAC;
class LNODBDPJGFL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKHKICHPFLH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10FE5F20)
#define GKHKICHPFLH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10FE63D0)
#define GKHKICHPFLH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10FE5F80)
#define GKHKICHPFLH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10FE6450)
#define GKHKICHPFLH__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE6D20)

inline static constexpr unsigned int GKHKICHPFLH_TypeDefinitionIndex = 52968;

class GKHKICHPFLH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* FMJKOENAGFG; // 0x10
	::System::Collections::Generic::List_1<::HIDDFHCDAAC*>* GDFBNPNMNFG; // 0x18
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* NKEKFCKBGFB; // 0x20
	::MoleMole::Config::TeamProperty EHAKJBAKGDL; // 0x28
	::System::Boolean EEPBGNBIBBL; // 0x2C
	::System::Byte _padding0[0x3];
	::MoleMole::Config::TeamProperty JLOAKAKEOMI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHKICHPFLH__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GKHKICHPFLH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GKHKICHPFLH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GKHKICHPFLH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GKHKICHPFLH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
