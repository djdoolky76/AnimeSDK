#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JAHMGIDBBGA__CTOR_OFFSET UNITYSDK_OFFSET(0x19891E50)

inline static constexpr unsigned int JAHMGIDBBGA_TypeDefinitionIndex = 68974;

class JAHMGIDBBGA : public ::System::Object
{
public:
	// static const ::System::Int32 MNGEACHFBJI = 0x1; // 0x0
	// static const ::System::Int32 KLDOBKKILMG = 0x2; // 0x0
	// static const ::System::String* GPHPFIFPDHM; // 0x0
	// static const ::System::String* MFJIGAGMPOP; // 0x0
	// static const ::System::Single HCMABDBIBJH; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAHMGIDBBGA__CTOR_OFFSET))(this);
	}
};
