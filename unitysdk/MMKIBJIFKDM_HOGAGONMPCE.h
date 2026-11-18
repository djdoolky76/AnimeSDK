#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDADCBANNKI.h"
#include "unitysdk/System/Object.h"

class FPGLKKMDFID;

#define MMKIBJIFKDM_HOGAGONMPCE_FHFFHDHHJDI_OFFSET UNITYSDK_OFFSET(0x14070FA0)
#define MMKIBJIFKDM_HOGAGONMPCE__CTOR_OFFSET UNITYSDK_OFFSET(0x14070F90)

inline static constexpr unsigned int MMKIBJIFKDM_HOGAGONMPCE_TypeDefinitionIndex = 53938;

class MMKIBJIFKDM_HOGAGONMPCE : public ::System::Object
{
public:
	::FDADCBANNKI GOHICIFNDIC; // 0x10
	::System::Int32 AODGFKMNHJI; // 0x14
	::System::Int32 CNAMGNNLABA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKIBJIFKDM_HOGAGONMPCE__CTOR_OFFSET))(this);
	}

	::System::Boolean FHFFHDHHJDI(::FPGLKKMDFID* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::FPGLKKMDFID*))((::PBYTE)hIl2Cpp + MMKIBJIFKDM_HOGAGONMPCE_FHFFHDHHJDI_OFFSET))(this, LJBPECKCCEA);
	}
};
