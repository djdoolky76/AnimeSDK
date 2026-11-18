#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_HACKERGETBODYCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x142F3EB0)
#define MOLEMOLE_FLOWCANVAS_HACKERGETBODYCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x142F3F60)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGetBodyCount_TypeDefinitionIndex = 62943;

	class HackerGetBodyCount
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGETBODYCOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::ChessEntity* a)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGETBODYCOUNT_INVOKE_OFFSET))(this, a);
		}
	};
}
