#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LNODBDPJGFL;
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPHALCMDAJJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x147B7620)
#define CPHALCMDAJJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x147B7CD0)
#define CPHALCMDAJJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x147B7680)
#define CPHALCMDAJJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x147B7D50)
#define CPHALCMDAJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x147B8A20)

inline static constexpr unsigned int CPHALCMDAJJ_TypeDefinitionIndex = 59896;

class CPHALCMDAJJ : public ::System::Object
{
public:
	::MoleMole::Config::DynamicString* KKOEDKIPHHN; // 0x10
	::MoleMole::Config::DynamicInt* AINFLEFDINO; // 0x18
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* NPGPKCABGPD; // 0x20
	::MoleMole::Config::DynamicInt* DFFBGMLDFOJ; // 0x28
	::System::Boolean MNIAIHOKPBH; // 0x30
	::System::Boolean BGAACAFMOEP; // 0x31
	::System::Boolean ACHPPDBHPNL; // 0x32
	::System::Boolean EOIKGIKKCDF; // 0x33

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHALCMDAJJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CPHALCMDAJJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CPHALCMDAJJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CPHALCMDAJJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CPHALCMDAJJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
