#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGBFEJMILMI;
class FBAMLABJMKF;
class NAAFMIMIPCF;

#define AGBFEJMILMI_HDBKANOLBCE_IPKKENMPGGN_OFFSET UNITYSDK_OFFSET(0x16FE49F0)
#define AGBFEJMILMI_HDBKANOLBCE__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE49E0)

inline static constexpr unsigned int AGBFEJMILMI_HDBKANOLBCE_TypeDefinitionIndex = 73241;

class AGBFEJMILMI_HDBKANOLBCE : public ::System::Object
{
public:
	::NAAFMIMIPCF* FHHHKKGLDGG; // 0x10
	::AGBFEJMILMI* KLHPEBKNIFB; // 0x18
	::FBAMLABJMKF* AKCCBOJKOJL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_HDBKANOLBCE__CTOR_OFFSET))(this);
	}

	::System::Void IPKKENMPGGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_HDBKANOLBCE_IPKKENMPGGN_OFFSET))(this);
	}
};
