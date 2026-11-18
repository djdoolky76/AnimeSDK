#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LNODBDPJGFL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKLPJOFCALH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x159DEF20)
#define CKLPJOFCALH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x159DF200)
#define CKLPJOFCALH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x159DEF80)
#define CKLPJOFCALH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x159DF280)
#define CKLPJOFCALH__CTOR_OFFSET UNITYSDK_OFFSET(0x159DF600)

inline static constexpr unsigned int CKLPJOFCALH_TypeDefinitionIndex = 93133;

class CKLPJOFCALH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* DDAFLAEECIJ; // 0x10
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* NGLHKOJKCDL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLPJOFCALH__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CKLPJOFCALH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CKLPJOFCALH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CKLPJOFCALH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CKLPJOFCALH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
