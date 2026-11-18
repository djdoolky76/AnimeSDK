#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class NIIGJMGNGHK;

#define LBGOAJOFOIO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15807000)
#define LBGOAJOFOIO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15806B60)
#define LBGOAJOFOIO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15807060)
#define LBGOAJOFOIO_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x15806AE0)
#define LBGOAJOFOIO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15806BE0)
#define LBGOAJOFOIO__CTOR_OFFSET UNITYSDK_OFFSET(0x158072E0)

inline static constexpr unsigned int LBGOAJOFOIO_TypeDefinitionIndex = 91018;

class LBGOAJOFOIO : public ::System::Object
{
public:
	::NIIGJMGNGHK* NLMKCCHGGKI; // 0x10
	::NIIGJMGNGHK* BIOGBPMINKI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGOAJOFOIO__CTOR_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGOAJOFOIO_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LBGOAJOFOIO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LBGOAJOFOIO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LBGOAJOFOIO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LBGOAJOFOIO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
