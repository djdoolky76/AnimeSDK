#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HCBMHJJNCOD;
class NOGPJFFJOMO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIEDOGIBIMC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10FDC900)
#define GIEDOGIBIMC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10FDB420)
#define GIEDOGIBIMC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10FDC960)
#define GIEDOGIBIMC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10FDB4A0)
#define GIEDOGIBIMC__CTOR_OFFSET UNITYSDK_OFFSET(0x10FDD280)

inline static constexpr unsigned int GIEDOGIBIMC_TypeDefinitionIndex = 91938;

class GIEDOGIBIMC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::NOGPJFFJOMO*>* NOIMMNHHKAJ; // 0x10
	::System::String* AMEEMEPHGEL; // 0x18
	::HCBMHJJNCOD* GCDCGDLLBPB; // 0x20
	::System::Collections::Generic::List_1<::NOGPJFFJOMO*>* BPKEFMINJHJ; // 0x28
	::System::String* OFPGFOIAPIH; // 0x30
	::System::String* DIJBBBLGHIA; // 0x38
	::System::String* CCOHJEAHNMK; // 0x40
	::System::String* AKPCGHKCEFH; // 0x48
	::System::Int32 BNOJPLGFOOF; // 0x50
	::System::Int32 EKGIGMBLGMI; // 0x54
	::System::Int32 APKIKLPPHEA; // 0x58
	::System::Int32 JDOLDJGCJLH; // 0x5C
	::System::Int32 KKPHLMFOGHJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEDOGIBIMC__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GIEDOGIBIMC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GIEDOGIBIMC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GIEDOGIBIMC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GIEDOGIBIMC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
