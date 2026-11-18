#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ODCLAKCLCBG_CLOMMBCEHGJ_OFFSET UNITYSDK_OFFSET(0x15F5C100)
#define ODCLAKCLCBG_CMAMKOMKPCB_OFFSET UNITYSDK_OFFSET(0x15F5C1A0)
#define ODCLAKCLCBG_DMMHBCEDOOC_OFFSET UNITYSDK_OFFSET(0x15F5C150)
#define ODCLAKCLCBG_OIPHCILDJAH_OFFSET UNITYSDK_OFFSET(0x15F5C1F0)

inline static constexpr unsigned int ODCLAKCLCBG_TypeDefinitionIndex = 83452;

class ODCLAKCLCBG : public ::System::Object
{
public:
	static ::System::Boolean CLOMMBCEHGJ(::System::UInt16 FCPCLIJNDLA, ::System::UInt16 NBMHMFCENIJ)
	{
		return ((::System::Boolean(*)(::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + ODCLAKCLCBG_CLOMMBCEHGJ_OFFSET))(FCPCLIJNDLA, NBMHMFCENIJ);
	}

	static ::System::Boolean DMMHBCEDOOC(::System::UInt16 FCPCLIJNDLA, ::System::UInt16 NBMHMFCENIJ)
	{
		return ((::System::Boolean(*)(::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + ODCLAKCLCBG_DMMHBCEDOOC_OFFSET))(FCPCLIJNDLA, NBMHMFCENIJ);
	}

	static ::System::Boolean CMAMKOMKPCB(::System::UInt16 FCPCLIJNDLA, ::System::UInt16 HHFOLMBLOLM)
	{
		return ((::System::Boolean(*)(::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + ODCLAKCLCBG_CMAMKOMKPCB_OFFSET))(FCPCLIJNDLA, HHFOLMBLOLM);
	}

	static ::System::Boolean OIPHCILDJAH(::System::UInt16 FCPCLIJNDLA, ::System::UInt16 IOKAFOALNFF)
	{
		return ((::System::Boolean(*)(::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + ODCLAKCLCBG_OIPHCILDJAH_OFFSET))(FCPCLIJNDLA, IOKAFOALNFF);
	}
};
