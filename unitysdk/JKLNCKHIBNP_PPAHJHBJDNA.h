#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JKLNCKHIBNP_ELNCMLOEPHG;

#define JKLNCKHIBNP_PPAHJHBJDNA_EAEILDNIGOK_OFFSET UNITYSDK_OFFSET(0x17B30070)
#define JKLNCKHIBNP_PPAHJHBJDNA__CTOR_OFFSET UNITYSDK_OFFSET(0x17B30060)

inline static constexpr unsigned int JKLNCKHIBNP_PPAHJHBJDNA_TypeDefinitionIndex = 87633;

class JKLNCKHIBNP_PPAHJHBJDNA : public ::System::Object
{
public:
	::JKLNCKHIBNP_ELNCMLOEPHG* FGBNBFHOKAA; // 0x10
	::System::UInt32 JHGKGEGGGFF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLNCKHIBNP_PPAHJHBJDNA__CTOR_OFFSET))(this);
	}

	::System::Void EAEILDNIGOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLNCKHIBNP_PPAHJHBJDNA_EAEILDNIGOK_OFFSET))(this);
	}
};
