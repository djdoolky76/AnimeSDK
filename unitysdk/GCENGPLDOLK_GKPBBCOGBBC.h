#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCENGPLDOLK_NIKLGLOCLBO;
class IKKDCFLLIOF;

#define GCENGPLDOLK_GKPBBCOGBBC_BPJCDBOFCIJ_OFFSET UNITYSDK_OFFSET(0xBB81950)
#define GCENGPLDOLK_GKPBBCOGBBC_MAJNOMOCICP_OFFSET UNITYSDK_OFFSET(0xBB817B0)
#define GCENGPLDOLK_GKPBBCOGBBC__CTOR_OFFSET UNITYSDK_OFFSET(0xBB817A0)

inline static constexpr unsigned int GCENGPLDOLK_GKPBBCOGBBC_TypeDefinitionIndex = 58168;

class GCENGPLDOLK_GKPBBCOGBBC : public ::System::Object
{
public:
	::IKKDCFLLIOF* HHNMAELEGFA; // 0x10
	::IKKDCFLLIOF* KAIHDJAHFEN; // 0x18
	::GCENGPLDOLK_NIKLGLOCLBO* FGBNBFHOKAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCENGPLDOLK_GKPBBCOGBBC__CTOR_OFFSET))(this);
	}

	::System::Boolean MAJNOMOCICP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCENGPLDOLK_GKPBBCOGBBC_MAJNOMOCICP_OFFSET))(this);
	}

	::System::Void BPJCDBOFCIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCENGPLDOLK_GKPBBCOGBBC_BPJCDBOFCIJ_OFFSET))(this);
	}
};
