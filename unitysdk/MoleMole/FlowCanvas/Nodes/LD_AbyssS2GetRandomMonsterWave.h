#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class AbyssS2_DefaultRng; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2GETRANDOMMONSTERWAVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D19010)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2GETRANDOMMONSTERWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D19300)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2GetRandomMonsterWave_TypeDefinitionIndex = 48322;

	class LD_AbyssS2GetRandomMonsterWave
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2GETRANDOMMONSTERWAVE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::AbyssS2_DefaultRng* rng, ::System::String* filter)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::AbyssS2_DefaultRng*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2GETRANDOMMONSTERWAVE_INVOKE_OFFSET))(this, rng, filter);
		}
	};
}
