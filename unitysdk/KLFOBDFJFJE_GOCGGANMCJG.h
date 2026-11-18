#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMBMBLDFBID.h"

namespace System { class Action; }

#define KLFOBDFJFJE_GOCGGANMCJG_AEACEKKACDL_OFFSET UNITYSDK_OFFSET(0x1A2D0B20)
#define KLFOBDFJFJE_GOCGGANMCJG_OLCBDDEEIFL_OFFSET UNITYSDK_OFFSET(0x1A2D0B30)
#define KLFOBDFJFJE_GOCGGANMCJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D0B10)

inline static constexpr unsigned int KLFOBDFJFJE_GOCGGANMCJG_TypeDefinitionIndex = 58483;

class KLFOBDFJFJE_GOCGGANMCJG : public ::System::Object
{
public:
	::System::Action* MKLPLBFGGAD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_GOCGGANMCJG__CTOR_OFFSET))(this);
	}

	::System::Void AEACEKKACDL(::BMBMBLDFBID DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_GOCGGANMCJG_AEACEKKACDL_OFFSET))(this, DMIAICJPPDL);
	}

	::System::Void OLCBDDEEIFL(::BMBMBLDFBID DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + KLFOBDFJFJE_GOCGGANMCJG_OLCBDDEEIFL_OFFSET))(this, DMIAICJPPDL);
	}
};
