#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHMHGEAPMLF.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"
#include "unitysdk/System/Object.h"

class JMEEKIGCMAP;

#define BJBNENFGIOA_ACCCCBHNJPE_OFFSET UNITYSDK_OFFSET(0x1856E670)
#define BJBNENFGIOA_JLOMBBNHEMF_OFFSET UNITYSDK_OFFSET(0x1856E6C0)

inline static constexpr unsigned int BJBNENFGIOA_TypeDefinitionIndex = 65904;

class BJBNENFGIOA : public ::System::Object
{
public:
	static ::MoleMole::FlowCanvas::Nodes::MonsterIDType ACCCCBHNJPE(::JMEEKIGCMAP* DFMKILICPFB)
	{
		return ((::MoleMole::FlowCanvas::Nodes::MonsterIDType(*)(::JMEEKIGCMAP*))((::PBYTE)hIl2Cpp + BJBNENFGIOA_ACCCCBHNJPE_OFFSET))(DFMKILICPFB);
	}

	static ::AHMHGEAPMLF JLOMBBNHEMF(::JMEEKIGCMAP* DFMKILICPFB)
	{
		return ((::AHMHGEAPMLF(*)(::JMEEKIGCMAP*))((::PBYTE)hIl2Cpp + BJBNENFGIOA_JLOMBBNHEMF_OFFSET))(DFMKILICPFB);
	}
};
