#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BIOEMCMJGAO;
class GDGCHLIBEHM;

#define GDGCHLIBEHM_GOHMHFOEEAO_ODIKMKDOLMK_OFFSET UNITYSDK_OFFSET(0x116E0D70)
#define GDGCHLIBEHM_GOHMHFOEEAO__CTOR_OFFSET UNITYSDK_OFFSET(0x116E0D60)

inline static constexpr unsigned int GDGCHLIBEHM_GOHMHFOEEAO_TypeDefinitionIndex = 54989;

class GDGCHLIBEHM_GOHMHFOEEAO : public ::System::Object
{
public:
	::BIOEMCMJGAO* LFGOMPGPHFB; // 0x10
	::GDGCHLIBEHM* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGCHLIBEHM_GOHMHFOEEAO__CTOR_OFFSET))(this);
	}

	::System::Void ODIKMKDOLMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGCHLIBEHM_GOHMHFOEEAO_ODIKMKDOLMK_OFFSET))(this);
	}
};
