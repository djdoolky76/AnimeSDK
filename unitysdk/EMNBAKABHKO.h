#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LCDHCHIECKF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EMNBAKABHKO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10F45D80)
#define EMNBAKABHKO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10F45B40)
#define EMNBAKABHKO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10F45DE0)
#define EMNBAKABHKO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10F45BC0)
#define EMNBAKABHKO__CTOR_OFFSET UNITYSDK_OFFSET(0x10F45F90)

inline static constexpr unsigned int EMNBAKABHKO_TypeDefinitionIndex = 69038;

class EMNBAKABHKO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LCDHCHIECKF*>* BIOBDBCDOMA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNBAKABHKO__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EMNBAKABHKO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EMNBAKABHKO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EMNBAKABHKO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EMNBAKABHKO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
