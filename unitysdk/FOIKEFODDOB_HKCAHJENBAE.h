#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace System { class Action; }

#define FOIKEFODDOB_HKCAHJENBAE_HPGKDNJOHMF_OFFSET UNITYSDK_OFFSET(0x142BCE90)
#define FOIKEFODDOB_HKCAHJENBAE__CTOR_OFFSET UNITYSDK_OFFSET(0x142BCE80)

inline static constexpr unsigned int FOIKEFODDOB_HKCAHJENBAE_TypeDefinitionIndex = 66542;

class FOIKEFODDOB_HKCAHJENBAE : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_HKCAHJENBAE__CTOR_OFFSET))(this);
	}

	::System::Void HPGKDNJOHMF(::ConfigModuleLib::Runtime::LoadOpHandle PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadOpHandle))((::PBYTE)hIl2Cpp + FOIKEFODDOB_HKCAHJENBAE_HPGKDNJOHMF_OFFSET))(this, PIIPCLCCOIG);
	}
};
