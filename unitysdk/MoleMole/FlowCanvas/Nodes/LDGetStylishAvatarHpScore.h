#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHAVATARHPSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x180D9150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHAVATARHPSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x180D9290)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetStylishAvatarHpScore_TypeDefinitionIndex = 87619;

	class LDGetStylishAvatarHpScore
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHAVATARHPSCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHAVATARHPSCORE_INVOKE_OFFSET))(this);
		}
	};
}
