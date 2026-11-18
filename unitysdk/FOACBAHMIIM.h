#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class LNODBDPJGFL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOACBAHMIIM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10EC9010)
#define FOACBAHMIIM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10EC8C30)
#define FOACBAHMIIM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10EC9070)
#define FOACBAHMIIM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10EC8CB0)
#define FOACBAHMIIM__CTOR_OFFSET UNITYSDK_OFFSET(0x10EC92A0)

inline static constexpr unsigned int FOACBAHMIIM_TypeDefinitionIndex = 46204;

class FOACBAHMIIM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* KLBJOFKFIHI; // 0x10
	::System::String* CIPOPCAGGGI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOACBAHMIIM__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FOACBAHMIIM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FOACBAHMIIM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FOACBAHMIIM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FOACBAHMIIM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
