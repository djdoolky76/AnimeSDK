#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPPDCPGCKBL_FHCALLINGBK;

#define NPPDCPGCKBL_NICIEMNCPDG_FBFCEAOJKBD_OFFSET UNITYSDK_OFFSET(0x1004AD00)
#define NPPDCPGCKBL_NICIEMNCPDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1004ACF0)

inline static constexpr unsigned int NPPDCPGCKBL_NICIEMNCPDG_TypeDefinitionIndex = 86849;

class NPPDCPGCKBL_NICIEMNCPDG : public ::System::Object
{
public:
	::NPPDCPGCKBL_FHCALLINGBK* FGBNBFHOKAA; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPDCPGCKBL_NICIEMNCPDG__CTOR_OFFSET))(this);
	}

	::System::Void FBFCEAOJKBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPDCPGCKBL_NICIEMNCPDG_FBFCEAOJKBD_OFFSET))(this);
	}
};
