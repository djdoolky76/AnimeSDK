#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LENLFPIOLEP_AHNJGNJIJBJ_ELDKDMJODEE_OFFSET UNITYSDK_OFFSET(0x12560290)
#define LENLFPIOLEP_AHNJGNJIJBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12560280)

inline static constexpr unsigned int LENLFPIOLEP_AHNJGNJIJBJ_TypeDefinitionIndex = 73421;

class LENLFPIOLEP_AHNJGNJIJBJ : public ::System::Object
{
public:
	::System::Boolean GFGBMIHGPDM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLFPIOLEP_AHNJGNJIJBJ__CTOR_OFFSET))(this);
	}

	::System::Int32 ELDKDMJODEE(::System::Int32 DMBMOMEKJFO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LENLFPIOLEP_AHNJGNJIJBJ_ELDKDMJODEE_OFFSET))(this, DMBMOMEKJFO);
	}
};
