#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ABHIJPINAMB;
class ADCLLHCLMOH;
class FKNIEPCILLG;
class HDJJJGCHLEE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEHOFFJFMIJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12068C90)
#define DEHOFFJFMIJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12068740)
#define DEHOFFJFMIJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12068CF0)
#define DEHOFFJFMIJ_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x120686B0)
#define DEHOFFJFMIJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x120687C0)
#define DEHOFFJFMIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12068FC0)

inline static constexpr unsigned int DEHOFFJFMIJ_TypeDefinitionIndex = 40416;

class DEHOFFJFMIJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HDJJJGCHLEE*>* JLNCOICNMMA; // 0x10
	::System::Collections::Generic::List_1<::ADCLLHCLMOH*>* JOJINJODPDN; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::ABHIJPINAMB*>* ONAJPLMLGJP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHOFFJFMIJ__CTOR_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHOFFJFMIJ_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DEHOFFJFMIJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DEHOFFJFMIJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DEHOFFJFMIJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DEHOFFJFMIJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
