#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_TRANSFERNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1357BE00)
#define MOLEMOLE_FLOWCANVAS_TRANSFERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1357BE50)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int TransferNode_TypeDefinitionIndex = 69601;

	class TransferNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_TRANSFERNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isRandom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_TRANSFERNODE_INVOKE_OFFSET))(this, isRandom);
		}
	};
}
