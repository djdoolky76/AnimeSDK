#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADEPJGBBIOA.h"
#include "unitysdk/IFELKCECBBO.h"
#include "unitysdk/INPMAMGELOC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class NCELICCDFOF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GCBELCIIIPA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11C9CAA0)
#define GCBELCIIIPA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11C9C110)
#define GCBELCIIIPA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11C9CB00)
#define GCBELCIIIPA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11C9C190)
#define GCBELCIIIPA__CTOR_OFFSET UNITYSDK_OFFSET(0x11C9CED0)

inline static constexpr unsigned int GCBELCIIIPA_TypeDefinitionIndex = 92288;

class GCBELCIIIPA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::NCELICCDFOF*>* AHECJBACEDB; // 0x10
	::System::String* CIPOPCAGGGI; // 0x18
	::INPMAMGELOC KAEENHDGBEF; // 0x20
	::ADEPJGBBIOA ILCBBCAFLLG; // 0x24
	::System::Int32 DGIAGIMPCEA; // 0x28
	::IFELKCECBBO DKFMHKDPEFA; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBELCIIIPA__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GCBELCIIIPA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GCBELCIIIPA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GCBELCIIIPA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GCBELCIIIPA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
