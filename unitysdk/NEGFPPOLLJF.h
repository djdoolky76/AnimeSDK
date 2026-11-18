#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEGFPPOLLJF_CIFDJIKNMJE_OFFSET UNITYSDK_OFFSET(0x1727FA70)
#define NEGFPPOLLJF_KCKBIOBGKBH_OFFSET UNITYSDK_OFFSET(0x1727FAB0)
#define NEGFPPOLLJF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1727FA60)
#define NEGFPPOLLJF__CTOR_OFFSET UNITYSDK_OFFSET(0x1727FA50)

inline static constexpr unsigned int NEGFPPOLLJF_TypeDefinitionIndex = 91178;

class NEGFPPOLLJF : public ::System::Object
{
public:
	static ::NEGFPPOLLJF** StaticGet_KIFOJFGAMMF()
	{
		return (::NEGFPPOLLJF**)Il2CppClass::FromTypeDefinitionIndex(NEGFPPOLLJF_TypeDefinitionIndex)->GetStaticField(0x4DB70);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGFPPOLLJF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEGFPPOLLJF__CCTOR_OFFSET))();
	}

	::System::Boolean CIFDJIKNMJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGFPPOLLJF_CIFDJIKNMJE_OFFSET))(this);
	}

	static ::NEGFPPOLLJF* KCKBIOBGKBH()
	{
		return ((::NEGFPPOLLJF*(*)())((::PBYTE)hIl2Cpp + NEGFPPOLLJF_KCKBIOBGKBH_OFFSET))();
	}
};
