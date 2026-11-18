#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDDGJMFPAKF.h"
#include "unitysdk/System/Object.h"

#define PCLCJODELEP_JNLPMJAJDGF_OFFSET UNITYSDK_OFFSET(0x178B4E40)
#define PCLCJODELEP_LCAMMNHJMJJ_OFFSET UNITYSDK_OFFSET(0x178B4F50)
#define PCLCJODELEP_LCLDGKDPLEM_OFFSET UNITYSDK_OFFSET(0x178B4E90)
#define PCLCJODELEP_MBFEGNPAEFA_OFFSET UNITYSDK_OFFSET(0x178B4EF0)

inline static constexpr unsigned int PCLCJODELEP_TypeDefinitionIndex = 76587;

class PCLCJODELEP : public ::System::Object
{
public:
	static ::System::Boolean JNLPMJAJDGF(::NDDGJMFPAKF IIJEIFKCBJG)
	{
		return ((::System::Boolean(*)(::NDDGJMFPAKF))((::PBYTE)hIl2Cpp + PCLCJODELEP_JNLPMJAJDGF_OFFSET))(IIJEIFKCBJG);
	}

	static ::System::Boolean LCLDGKDPLEM(::NDDGJMFPAKF IIJEIFKCBJG)
	{
		return ((::System::Boolean(*)(::NDDGJMFPAKF))((::PBYTE)hIl2Cpp + PCLCJODELEP_LCLDGKDPLEM_OFFSET))(IIJEIFKCBJG);
	}

	static ::System::Boolean MBFEGNPAEFA(::NDDGJMFPAKF IIJEIFKCBJG)
	{
		return ((::System::Boolean(*)(::NDDGJMFPAKF))((::PBYTE)hIl2Cpp + PCLCJODELEP_MBFEGNPAEFA_OFFSET))(IIJEIFKCBJG);
	}

	static ::System::Boolean LCAMMNHJMJJ(::NDDGJMFPAKF IIJEIFKCBJG)
	{
		return ((::System::Boolean(*)(::NDDGJMFPAKF))((::PBYTE)hIl2Cpp + PCLCJODELEP_LCAMMNHJMJJ_OFFSET))(IIJEIFKCBJG);
	}
};
