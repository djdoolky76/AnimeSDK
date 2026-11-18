#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JKNLCCEJEAH_OAPFFECOOAA_JCGAKCCLAJP_OFFSET UNITYSDK_OFFSET(0x13C29CF0)
#define JKNLCCEJEAH_OAPFFECOOAA__CTOR_OFFSET UNITYSDK_OFFSET(0x13C29CE0)

inline static constexpr unsigned int JKNLCCEJEAH_OAPFFECOOAA_TypeDefinitionIndex = 65815;

class JKNLCCEJEAH_OAPFFECOOAA : public ::System::Object
{
public:
	::System::Int32 KDOIONAGBGA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNLCCEJEAH_OAPFFECOOAA__CTOR_OFFSET))(this);
	}

	::System::Boolean JCGAKCCLAJP(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JKNLCCEJEAH_OAPFFECOOAA_JCGAKCCLAJP_OFFSET))(this, MGMDLMBEDJF);
	}
};
