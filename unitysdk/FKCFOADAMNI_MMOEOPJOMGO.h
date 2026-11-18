#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FKCFOADAMNI;

#define FKCFOADAMNI_MMOEOPJOMGO_DNNFFLHJFPC_OFFSET UNITYSDK_OFFSET(0x156C27F0)
#define FKCFOADAMNI_MMOEOPJOMGO__CTOR_OFFSET UNITYSDK_OFFSET(0x156C27E0)

inline static constexpr unsigned int FKCFOADAMNI_MMOEOPJOMGO_TypeDefinitionIndex = 76369;

class FKCFOADAMNI_MMOEOPJOMGO : public ::System::Object
{
public:
	::FKCFOADAMNI* KLHPEBKNIFB; // 0x10
	::System::Int32 OIKFFGKDHME; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCFOADAMNI_MMOEOPJOMGO__CTOR_OFFSET))(this);
	}

	::System::Void DNNFFLHJFPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCFOADAMNI_MMOEOPJOMGO_DNNFFLHJFPC_OFFSET))(this);
	}
};
