#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MPKBDIJDMAP_EIACPCCBELA_GCAMDKFHIMA_OFFSET UNITYSDK_OFFSET(0x131B0C20)
#define MPKBDIJDMAP_EIACPCCBELA__CTOR_OFFSET UNITYSDK_OFFSET(0x131B0C10)

inline static constexpr unsigned int MPKBDIJDMAP_EIACPCCBELA_TypeDefinitionIndex = 65444;

class MPKBDIJDMAP_EIACPCCBELA : public ::System::Object
{
public:
	::System::Action* LBACCJPDODJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKBDIJDMAP_EIACPCCBELA__CTOR_OFFSET))(this);
	}

	::System::Void GCAMDKFHIMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKBDIJDMAP_EIACPCCBELA_GCAMDKFHIMA_OFFSET))(this);
	}
};
