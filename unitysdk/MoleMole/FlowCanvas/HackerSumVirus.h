#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_HACKERSUMVIRUS_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B311C0)
#define MOLEMOLE_FLOWCANVAS_HACKERSUMVIRUS__CTOR_OFFSET UNITYSDK_OFFSET(0x12B31280)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerSumVirus_TypeDefinitionIndex = 57437;

	class HackerSumVirus
	{
	public:
		::System::Int32 _count; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERSUMVIRUS__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::ChessEntity* a)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERSUMVIRUS_INVOKE_OFFSET))(this, a);
		}
	};
}
