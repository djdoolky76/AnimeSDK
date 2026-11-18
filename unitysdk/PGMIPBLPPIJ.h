#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NLMHLJADDFG;

#define PGMIPBLPPIJ_DMLJCLGMEIE_OFFSET UNITYSDK_OFFSET(0x1C655450)
#define PGMIPBLPPIJ_EAPBALOFFLN_OFFSET UNITYSDK_OFFSET(0x1C655550)
#define PGMIPBLPPIJ_JCCLEMGGNOP_OFFSET UNITYSDK_OFFSET(0x1C655240)
#define PGMIPBLPPIJ_MCEEDOMEHBI_OFFSET UNITYSDK_OFFSET(0x1C655630)
#define PGMIPBLPPIJ_PHFJGLKLHIP_OFFSET UNITYSDK_OFFSET(0x1C655340)

inline static constexpr unsigned int PGMIPBLPPIJ_TypeDefinitionIndex = 87072;

class PGMIPBLPPIJ : public ::System::Object
{
public:
	static ::System::Boolean JCCLEMGGNOP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGMIPBLPPIJ_JCCLEMGGNOP_OFFSET))();
	}

	static ::System::Boolean PHFJGLKLHIP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGMIPBLPPIJ_PHFJGLKLHIP_OFFSET))();
	}

	static ::System::Boolean DMLJCLGMEIE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGMIPBLPPIJ_DMLJCLGMEIE_OFFSET))();
	}

	static ::System::Boolean EAPBALOFFLN(::NLMHLJADDFG* NLKHAICJJAL)
	{
		return ((::System::Boolean(*)(::NLMHLJADDFG*))((::PBYTE)hIl2Cpp + PGMIPBLPPIJ_EAPBALOFFLN_OFFSET))(NLKHAICJJAL);
	}

	static ::System::Boolean MCEEDOMEHBI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGMIPBLPPIJ_MCEEDOMEHBI_OFFSET))();
	}
};
