#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class MPINFNMDEED;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMHJJMPHHLF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19D7B4C0)
#define DMHJJMPHHLF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19D7B280)
#define DMHJJMPHHLF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19D7B520)
#define DMHJJMPHHLF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19D7B300)
#define DMHJJMPHHLF__CTOR_OFFSET UNITYSDK_OFFSET(0x19D7B6D0)

inline static constexpr unsigned int DMHJJMPHHLF_TypeDefinitionIndex = 47850;

class DMHJJMPHHLF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MPINFNMDEED*>* LJICDJLAOJJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHJJMPHHLF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DMHJJMPHHLF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DMHJJMPHHLF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DMHJJMPHHLF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DMHJJMPHHLF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
