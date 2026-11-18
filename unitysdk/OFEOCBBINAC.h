#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class CHDFDOGABHI;
class EJHHPFFPFOJ;
class FKNIEPCILLG;
class GEAPPLEFPJJ;
class PCFMJDNECHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFEOCBBINAC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13A532D0)
#define OFEOCBBINAC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13A52C10)
#define OFEOCBBINAC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13A53330)
#define OFEOCBBINAC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13A52C90)
#define OFEOCBBINAC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A53660)

inline static constexpr unsigned int OFEOCBBINAC_TypeDefinitionIndex = 89316;

class OFEOCBBINAC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::GEAPPLEFPJJ*>* NEKIAPNHKAG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::CHDFDOGABHI*>* EPAGPIAPIEG; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::EJHHPFFPFOJ*>* ELJMGAOJPLN; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::PCFMJDNECHN*>* IBNALHMIFGH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEOCBBINAC__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OFEOCBBINAC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OFEOCBBINAC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OFEOCBBINAC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OFEOCBBINAC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
