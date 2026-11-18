#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMFAHGEFDFJ;

#define EKCHGHOKFEA_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x169A21E0)
#define EKCHGHOKFEA_DMMHANOOMGC_OFFSET UNITYSDK_OFFSET(0x169A2240)
#define EKCHGHOKFEA__CTOR_OFFSET UNITYSDK_OFFSET(0x169A21D0)

inline static constexpr unsigned int EKCHGHOKFEA_TypeDefinitionIndex = 81492;

class EKCHGHOKFEA : public ::System::Object
{
public:
	::AMFAHGEFDFJ* JMINOGAOFIL; // 0x10
	::AMFAHGEFDFJ* FMOCOPCOCFP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCHGHOKFEA__CTOR_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCHGHOKFEA_APCKPKCNFJE_OFFSET))(this);
	}

	::System::UInt64 DMMHANOOMGC()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCHGHOKFEA_DMMHANOOMGC_OFFSET))(this);
	}
};
