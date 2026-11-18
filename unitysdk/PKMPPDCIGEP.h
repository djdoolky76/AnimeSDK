#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJBFACACPPE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HIDDFHCDAAC;
class LNODBDPJGFL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKMPPDCIGEP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C1DA7B0)
#define PKMPPDCIGEP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C1DAC20)
#define PKMPPDCIGEP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1C1DA810)
#define PKMPPDCIGEP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1C1DACA0)
#define PKMPPDCIGEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1DB500)

inline static constexpr unsigned int PKMPPDCIGEP_TypeDefinitionIndex = 80669;

class PKMPPDCIGEP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* NKEKFCKBGFB; // 0x10
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* FMJKOENAGFG; // 0x18
	::System::Collections::Generic::List_1<::HIDDFHCDAAC*>* GDFBNPNMNFG; // 0x20
	::System::Boolean EEPBGNBIBBL; // 0x28
	::System::Byte _padding0[0x3];
	::LJBFACACPPE EHAKJBAKGDL; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMPPDCIGEP__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKMPPDCIGEP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PKMPPDCIGEP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKMPPDCIGEP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PKMPPDCIGEP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
