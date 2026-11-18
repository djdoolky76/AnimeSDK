#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMFFHJDBGLL.h"
#include "unitysdk/FEIKPIKAJEC.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define BDKLHGNCKLC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1854DC60)
#define BDKLHGNCKLC__CTOR_OFFSET UNITYSDK_OFFSET(0x1854DC00)

inline static constexpr unsigned int BDKLHGNCKLC_TypeDefinitionIndex = 85545;

class BDKLHGNCKLC : public ::System::Object
{
public:
	::System::Action_1<::FEIKPIKAJEC>* BNGMEPEJJHE; // 0x10
	::System::Action* LEGHIDIHIHM; // 0x18
	::System::Action* HKEBHFKHBCC; // 0x20
	::DMFFHJDBGLL HACAHPNPAKN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKLHGNCKLC__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKLHGNCKLC_NPOLNFDBOOD_OFFSET))(this);
	}
};
