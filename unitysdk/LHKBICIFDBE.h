#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HIDDFHCDAAC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHKBICIFDBE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11F10A90)
#define LHKBICIFDBE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11F10D70)
#define LHKBICIFDBE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11F10AF0)
#define LHKBICIFDBE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11F10DF0)
#define LHKBICIFDBE__CTOR_OFFSET UNITYSDK_OFFSET(0x11F11100)

inline static constexpr unsigned int LHKBICIFDBE_TypeDefinitionIndex = 83171;

class LHKBICIFDBE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HIDDFHCDAAC*>* GDFBNPNMNFG; // 0x10
	::System::Boolean EEPBGNBIBBL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKBICIFDBE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LHKBICIFDBE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LHKBICIFDBE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LHKBICIFDBE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LHKBICIFDBE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
