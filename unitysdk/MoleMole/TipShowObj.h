#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_TIPSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19B78070)

namespace MoleMole
{
	inline static constexpr unsigned int TipShowObj_TypeDefinitionIndex = 52822;

	class TipShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 Group; // 0x28

		::System::Void _ctor(::FAKODLEPJOA showPage)
		{
			return ((::System::Void(*)(::PVOID, ::FAKODLEPJOA))((::PBYTE)hIl2Cpp + MOLEMOLE_TIPSHOWOBJ__CTOR_OFFSET))(this, showPage);
		}
	};
}
