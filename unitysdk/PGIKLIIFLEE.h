#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EJAGLDDBEJG;
class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PGIKLIIFLEE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15539A80)
#define PGIKLIIFLEE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15539CF0)
#define PGIKLIIFLEE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15539AE0)
#define PGIKLIIFLEE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15539D70)
#define PGIKLIIFLEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1553A0A0)

inline static constexpr unsigned int PGIKLIIFLEE_TypeDefinitionIndex = 44489;

class PGIKLIIFLEE : public ::System::Object
{
public:
	::System::String* AOLGDHDOCLP; // 0x10
	::System::Collections::Generic::List_1<::EJAGLDDBEJG*>* HJLJMPBGFKG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIKLIIFLEE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGIKLIIFLEE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PGIKLIIFLEE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGIKLIIFLEE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PGIKLIIFLEE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
