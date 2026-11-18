#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class APJFGBJKMHI;
class CJIEIHEDMME;

#define APJFGBJKMHI_IGGIHDIMGIH_EMLEOPMKIHK_OFFSET UNITYSDK_OFFSET(0xF783200)
#define APJFGBJKMHI_IGGIHDIMGIH__CTOR_OFFSET UNITYSDK_OFFSET(0xF7831F0)

inline static constexpr unsigned int APJFGBJKMHI_IGGIHDIMGIH_TypeDefinitionIndex = 92481;

class APJFGBJKMHI_IGGIHDIMGIH : public ::System::Object
{
public:
	::APJFGBJKMHI* KLHPEBKNIFB; // 0x10
	::CJIEIHEDMME* HPDGOCBBOHI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APJFGBJKMHI_IGGIHDIMGIH__CTOR_OFFSET))(this);
	}

	::System::Void EMLEOPMKIHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APJFGBJKMHI_IGGIHDIMGIH_EMLEOPMKIHK_OFFSET))(this);
	}
};
