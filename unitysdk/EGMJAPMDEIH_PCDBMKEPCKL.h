#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFKBMBMJGAH;
class EGMJAPMDEIH_KILNEHPNBEO;

#define EGMJAPMDEIH_PCDBMKEPCKL_MGECLOEDBFK_OFFSET UNITYSDK_OFFSET(0xF9C5090)
#define EGMJAPMDEIH_PCDBMKEPCKL__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C5080)

inline static constexpr unsigned int EGMJAPMDEIH_PCDBMKEPCKL_TypeDefinitionIndex = 49033;

class EGMJAPMDEIH_PCDBMKEPCKL : public ::System::Object
{
public:
	::CFKBMBMJGAH* DEKJDEPKKLH; // 0x10
	::EGMJAPMDEIH_KILNEHPNBEO* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMJAPMDEIH_PCDBMKEPCKL__CTOR_OFFSET))(this);
	}

	::System::Void MGECLOEDBFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMJAPMDEIH_PCDBMKEPCKL_MGECLOEDBFK_OFFSET))(this);
	}
};
