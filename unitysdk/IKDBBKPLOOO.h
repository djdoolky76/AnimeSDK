#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HIDDFHCDAAC;
class LNODBDPJGFL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKDBBKPLOOO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x153AFB80)
#define IKDBBKPLOOO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x153B02C0)
#define IKDBBKPLOOO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x153AFBE0)
#define IKDBBKPLOOO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x153B0340)
#define IKDBBKPLOOO__CTOR_OFFSET UNITYSDK_OFFSET(0x153B1600)

inline static constexpr unsigned int IKDBBKPLOOO_TypeDefinitionIndex = 63923;

class IKDBBKPLOOO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* FMJKOENAGFG; // 0x10
	::System::Collections::Generic::List_1<::HIDDFHCDAAC*>* GDFBNPNMNFG; // 0x18
	::System::String* MFEGAMIIMHC; // 0x20
	::System::String* LMIEHNEEGEM; // 0x28
	::System::String* LFNMPOCHPLP; // 0x30
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* NKEKFCKBGFB; // 0x38
	::System::String* LEDJHGNLGAG; // 0x40
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* BHCFDKIPGHG; // 0x48
	::MoleMole::Config::BaseProperty JLOAKAKEOMI; // 0x50
	::System::Boolean EEPBGNBIBBL; // 0x54
	::System::Boolean GPDBFDHIPKK; // 0x55
	::System::Byte _padding0[0x2];
	::MoleMole::Config::BaseProperty EHAKJBAKGDL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDBBKPLOOO__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IKDBBKPLOOO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IKDBBKPLOOO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IKDBBKPLOOO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IKDBBKPLOOO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
