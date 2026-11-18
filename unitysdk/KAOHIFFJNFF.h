#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LNODBDPJGFL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KAOHIFFJNFF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19489900)
#define KAOHIFFJNFF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19489D10)
#define KAOHIFFJNFF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19489960)
#define KAOHIFFJNFF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19489D90)
#define KAOHIFFJNFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1948A420)

inline static constexpr unsigned int KAOHIFFJNFF_TypeDefinitionIndex = 54762;

class KAOHIFFJNFF : public ::System::Object
{
public:
	::System::String* HIHLJJLCGIH; // 0x10
	::Il2CppArray<::System::String*>* ICCAFOEODCJ; // 0x18
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* KLBJOFKFIHI; // 0x20
	::System::Single JGNCDFNAIMI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOHIFFJNFF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KAOHIFFJNFF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KAOHIFFJNFF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KAOHIFFJNFF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KAOHIFFJNFF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
