#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIGMBPDJCMF;
class IBENDELLLAO;

#define ADACFNEHECA_FMFKGBBNEDK_OFFSET UNITYSDK_OFFSET(0x12645B20)
#define ADACFNEHECA_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x12645E70)
#define ADACFNEHECA_JPCGDJPMDPP_OFFSET UNITYSDK_OFFSET(0x12646010)
#define ADACFNEHECA_KIPGBLFACHN_OFFSET UNITYSDK_OFFSET(0x12645D10)
#define ADACFNEHECA_LIEGIPPNGDK_OFFSET UNITYSDK_OFFSET(0x12645F50)
#define ADACFNEHECA__CTOR_OFFSET UNITYSDK_OFFSET(0x12645970)

inline static constexpr unsigned int ADACFNEHECA_TypeDefinitionIndex = 67956;

class ADACFNEHECA : public ::System::Object
{
public:
	::EIGMBPDJCMF* AHMFPFACACD; // 0x10

	::System::Void _ctor(::EIGMBPDJCMF* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::EIGMBPDJCMF*))((::PBYTE)hIl2Cpp + ADACFNEHECA__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADACFNEHECA_JNENFEELMBP_OFFSET))(this);
	}

	::System::Void LIEGIPPNGDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADACFNEHECA_LIEGIPPNGDK_OFFSET))(this);
	}

	::IBENDELLLAO* FMFKGBBNEDK()
	{
		return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADACFNEHECA_FMFKGBBNEDK_OFFSET))(this);
	}

	::System::Boolean JPCGDJPMDPP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADACFNEHECA_JPCGDJPMDPP_OFFSET))(this);
	}

	::System::Boolean KIPGBLFACHN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADACFNEHECA_KIPGBLFACHN_OFFSET))(this);
	}
};
