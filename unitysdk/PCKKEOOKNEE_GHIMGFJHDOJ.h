#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
class PCKKEOOKNEE;

#define PCKKEOOKNEE_GHIMGFJHDOJ_CKHKIPLAJCM_OFFSET UNITYSDK_OFFSET(0x136EBD50)
#define PCKKEOOKNEE_GHIMGFJHDOJ_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x136EBCF0)
#define PCKKEOOKNEE_GHIMGFJHDOJ_PEJFEPJJDMI_OFFSET UNITYSDK_OFFSET(0x136EBD20)
#define PCKKEOOKNEE_GHIMGFJHDOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x136EBCE0)

inline static constexpr unsigned int PCKKEOOKNEE_GHIMGFJHDOJ_TypeDefinitionIndex = 80363;

class PCKKEOOKNEE_GHIMGFJHDOJ : public ::System::Object
{
public:
	::PCKKEOOKNEE* KLHPEBKNIFB; // 0x10
	::AFMMAIKKACF* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKKEOOKNEE_GHIMGFJHDOJ__CTOR_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKKEOOKNEE_GHIMGFJHDOJ_MJMKFFANPBL_OFFSET))(this);
	}

	::System::Void PEJFEPJJDMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKKEOOKNEE_GHIMGFJHDOJ_PEJFEPJJDMI_OFFSET))(this);
	}

	::System::Void CKHKIPLAJCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKKEOOKNEE_GHIMGFJHDOJ_CKHKIPLAJCM_OFFSET))(this);
	}
};
