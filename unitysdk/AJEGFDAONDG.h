#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DENBPLEJLAJ;

#define AJEGFDAONDG_PKBEIGPEPCL_OFFSET UNITYSDK_OFFSET(0x135EBA80)
#define AJEGFDAONDG__CTOR_OFFSET UNITYSDK_OFFSET(0x135EBA70)

inline static constexpr unsigned int AJEGFDAONDG_TypeDefinitionIndex = 71422;

class AJEGFDAONDG : public ::System::Object
{
public:
	::DENBPLEJLAJ* CBDANDDJPEL; // 0x10

	::System::Void _ctor(::DENBPLEJLAJ* MHEPAPJILHF)
	{
		return ((::System::Void(*)(::PVOID, ::DENBPLEJLAJ*))((::PBYTE)hIl2Cpp + AJEGFDAONDG__CTOR_OFFSET))(this, MHEPAPJILHF);
	}

	::System::Void PKBEIGPEPCL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEGFDAONDG_PKBEIGPEPCL_OFFSET))(this);
	}
};
