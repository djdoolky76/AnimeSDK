#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_UNLOCKMAPNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D1E120)
#define MOLEMOLE_FLOWCANVAS_UNLOCKMAPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1E170)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int UnlockMapNode_TypeDefinitionIndex = 66973;

	class UnlockMapNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_UNLOCKMAPNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isRandom, ::System::Int32 num)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_UNLOCKMAPNODE_INVOKE_OFFSET))(this, isRandom, num);
		}
	};
}
