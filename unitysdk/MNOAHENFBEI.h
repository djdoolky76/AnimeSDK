#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOAHOOCNDHM.h"

#define MNOAHENFBEI_DBLKNCELBOA_OFFSET UNITYSDK_OFFSET(0x1217C760)
#define MNOAHENFBEI_LJPLHKHCEPJ_OFFSET UNITYSDK_OFFSET(0x1217C7F0)
#define MNOAHENFBEI_OMJECMNKBMO_1_OFFSET UNITYSDK_OFFSET(0x1217C560)
#define MNOAHENFBEI_OMJECMNKBMO_OFFSET UNITYSDK_OFFSET(0x1217C440)
#define MNOAHENFBEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1217C7E0)

inline static constexpr unsigned int MNOAHENFBEI_TypeDefinitionIndex = 42588;

class MNOAHENFBEI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOAHENFBEI__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OMJECMNKBMO(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNOAHENFBEI_OMJECMNKBMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::EOAHOOCNDHM OMJECMNKBMO_1(::System::Object* EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNOAHENFBEI_OMJECMNKBMO_1_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DBLKNCELBOA(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::UInt32& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MNOAHENFBEI_DBLKNCELBOA_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}

	::System::Boolean LJPLHKHCEPJ(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::UInt32& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MNOAHENFBEI_LJPLHKHCEPJ_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}
};
