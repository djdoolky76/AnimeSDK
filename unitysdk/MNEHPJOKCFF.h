#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class DOJJPPJMGNJ;
class FKNIEPCILLG;
class KEFGJOEEBLH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNEHPJOKCFF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174AE4C0)
#define MNEHPJOKCFF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x174ADE20)
#define MNEHPJOKCFF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x174AE520)
#define MNEHPJOKCFF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x174ADEA0)
#define MNEHPJOKCFF__CTOR_OFFSET UNITYSDK_OFFSET(0x174AE810)

inline static constexpr unsigned int MNEHPJOKCFF_TypeDefinitionIndex = 75968;

class MNEHPJOKCFF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::KEFGJOEEBLH*>* FPCJDILJOOA; // 0x10
	::System::Collections::Generic::List_1<::DOJJPPJMGNJ*>* IGIMLFLMFNE; // 0x18
	::System::Collections::Generic::List_1<::DOJJPPJMGNJ*>* DEHNMGMABPJ; // 0x20
	::System::UInt32 BEGHGELJFCD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEHPJOKCFF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MNEHPJOKCFF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MNEHPJOKCFF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MNEHPJOKCFF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MNEHPJOKCFF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
