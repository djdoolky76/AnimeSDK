#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GIDFLBDHEOJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KEFGJOEEBLH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x130B6B60)
#define KEFGJOEEBLH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x130B67D0)
#define KEFGJOEEBLH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x130B6BC0)
#define KEFGJOEEBLH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x130B6850)
#define KEFGJOEEBLH__CTOR_OFFSET UNITYSDK_OFFSET(0x130B6DB0)

inline static constexpr unsigned int KEFGJOEEBLH_TypeDefinitionIndex = 80180;

class KEFGJOEEBLH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::GIDFLBDHEOJ*>* LGDDMBEAJDC; // 0x10
	::System::UInt32 MGNMJMACKLO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFGJOEEBLH__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KEFGJOEEBLH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KEFGJOEEBLH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KEFGJOEEBLH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KEFGJOEEBLH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
