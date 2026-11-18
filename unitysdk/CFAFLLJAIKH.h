#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JDOLCBBOINH.h"

class EHDHMHGIFAK;

#define CFAFLLJAIKH_BGHJMPNLMPA_OFFSET UNITYSDK_OFFSET(0x16865C80)
#define CFAFLLJAIKH_GJEPMGAFNCO_OFFSET UNITYSDK_OFFSET(0x16865D50)

inline static constexpr unsigned int CFAFLLJAIKH_TypeDefinitionIndex = 39964;

class CFAFLLJAIKH : public ::System::Object
{
public:
	static ::JDOLCBBOINH BGHJMPNLMPA(::EHDHMHGIFAK* LILKIGNNLAJ)
	{
		return ((::JDOLCBBOINH(*)(::EHDHMHGIFAK*))((::PBYTE)hIl2Cpp + CFAFLLJAIKH_BGHJMPNLMPA_OFFSET))(LILKIGNNLAJ);
	}

	static ::System::Boolean GJEPMGAFNCO(::EHDHMHGIFAK* LILKIGNNLAJ, ::JDOLCBBOINH OLOKFBCGPDE)
	{
		return ((::System::Boolean(*)(::EHDHMHGIFAK*, ::JDOLCBBOINH))((::PBYTE)hIl2Cpp + CFAFLLJAIKH_GJEPMGAFNCO_OFFSET))(LILKIGNNLAJ, OLOKFBCGPDE);
	}
};
