#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LNODBDPJGFL;
namespace MoleMole::Config { class DynamicFloat; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIGDCFKIIFC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E25660)
#define HIGDCFKIIFC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19E25980)
#define HIGDCFKIIFC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19E256C0)
#define HIGDCFKIIFC_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x19E25900)
#define HIGDCFKIIFC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19E25A00)
#define HIGDCFKIIFC__CTOR_OFFSET UNITYSDK_OFFSET(0x19E25D60)

inline static constexpr unsigned int HIGDCFKIIFC_TypeDefinitionIndex = 46221;

class HIGDCFKIIFC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* KLBJOFKFIHI; // 0x10
	::MoleMole::Config::DynamicFloat* JAJHPKNEOFD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGDCFKIIFC__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HIGDCFKIIFC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGDCFKIIFC_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HIGDCFKIIFC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HIGDCFKIIFC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HIGDCFKIIFC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
