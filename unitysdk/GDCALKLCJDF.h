#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDCALKLCJDF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x165EABD0)
#define GDCALKLCJDF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x165EAF00)
#define GDCALKLCJDF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x165EAC30)
#define GDCALKLCJDF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x165EAF80)
#define GDCALKLCJDF__CTOR_OFFSET UNITYSDK_OFFSET(0x165EB2E0)

inline static constexpr unsigned int GDCALKLCJDF_TypeDefinitionIndex = 78550;

class GDCALKLCJDF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* FGADEGGHMAB; // 0x10
	::System::String* LGJINFINDPN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCALKLCJDF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GDCALKLCJDF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GDCALKLCJDF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GDCALKLCJDF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GDCALKLCJDF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
