#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class AGLHCNIJPGH;

#define AGLHCNIJPGH_LBMMKGDIEEH_CKDNKFNLAGP_OFFSET UNITYSDK_OFFSET(0x14350AC0)
#define AGLHCNIJPGH_LBMMKGDIEEH__CTOR_OFFSET UNITYSDK_OFFSET(0x14350AB0)

inline static constexpr unsigned int AGLHCNIJPGH_LBMMKGDIEEH_TypeDefinitionIndex = 70867;

class AGLHCNIJPGH_LBMMKGDIEEH : public ::System::Object
{
public:
	::AGLHCNIJPGH* KLHPEBKNIFB; // 0x10
	::MoleMole::EntityHandle CMPFDLGCOPD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLHCNIJPGH_LBMMKGDIEEH__CTOR_OFFSET))(this);
	}

	::System::Void CKDNKFNLAGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLHCNIJPGH_LBMMKGDIEEH_CKDNKFNLAGP_OFFSET))(this);
	}
};
