#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEAECEINKCC_APHDKDMJBKD_JIHHDPMMIOC_OFFSET UNITYSDK_OFFSET(0x1100D0C0)
#define HEAECEINKCC_APHDKDMJBKD_PJAHLLAMGPK_OFFSET UNITYSDK_OFFSET(0x1100CF20)
#define HEAECEINKCC_APHDKDMJBKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1100CF10)

inline static constexpr unsigned int HEAECEINKCC_APHDKDMJBKD_TypeDefinitionIndex = 64574;

class HEAECEINKCC_APHDKDMJBKD : public ::System::Object
{
public:
	::System::Int64 MNGMCPEBHIH; // 0x10
	::System::Single CIIPCCLOHLH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_APHDKDMJBKD__CTOR_OFFSET))(this);
	}

	::System::Void PJAHLLAMGPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_APHDKDMJBKD_PJAHLLAMGPK_OFFSET))(this);
	}

	::System::Void JIHHDPMMIOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_APHDKDMJBKD_JIHHDPMMIOC_OFFSET))(this);
	}
};
