#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BEDPJEJBHLI;
class LAKMPDDOPDG;

#define BEDPJEJBHLI_CFPDLCJCCMA_BEHPKLAMLJM_OFFSET UNITYSDK_OFFSET(0x136223C0)
#define BEDPJEJBHLI_CFPDLCJCCMA_NMDFEDLIBMJ_OFFSET UNITYSDK_OFFSET(0x13622390)
#define BEDPJEJBHLI_CFPDLCJCCMA_PNLFCHMOFLK_OFFSET UNITYSDK_OFFSET(0x13622360)
#define BEDPJEJBHLI_CFPDLCJCCMA__CTOR_OFFSET UNITYSDK_OFFSET(0x13622350)

inline static constexpr unsigned int BEDPJEJBHLI_CFPDLCJCCMA_TypeDefinitionIndex = 41371;

class BEDPJEJBHLI_CFPDLCJCCMA : public ::System::Object
{
public:
	::LAKMPDDOPDG* LNOMAEFKLHL; // 0x10
	::BEDPJEJBHLI* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDPJEJBHLI_CFPDLCJCCMA__CTOR_OFFSET))(this);
	}

	::System::Void PNLFCHMOFLK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDPJEJBHLI_CFPDLCJCCMA_PNLFCHMOFLK_OFFSET))(this);
	}

	::System::Void NMDFEDLIBMJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDPJEJBHLI_CFPDLCJCCMA_NMDFEDLIBMJ_OFFSET))(this);
	}

	::System::Void BEHPKLAMLJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDPJEJBHLI_CFPDLCJCCMA_BEHPKLAMLJM_OFFSET))(this);
	}
};
