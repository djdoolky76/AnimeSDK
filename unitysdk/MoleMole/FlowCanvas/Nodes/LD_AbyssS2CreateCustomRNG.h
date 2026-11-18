#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class AbyssS2_DefaultRng; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2CREATECUSTOMRNG_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE2FE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2CREATECUSTOMRNG__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE30A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2CreateCustomRNG_TypeDefinitionIndex = 56480;

	class LD_AbyssS2CreateCustomRNG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2CREATECUSTOMRNG__CTOR_OFFSET))(this);
		}

		::MoleMole::AbyssS2_DefaultRng* Invoke(::System::Int32 seed)
		{
			return ((::MoleMole::AbyssS2_DefaultRng*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2CREATECUSTOMRNG_INVOKE_OFFSET))(this, seed);
		}
	};
}
