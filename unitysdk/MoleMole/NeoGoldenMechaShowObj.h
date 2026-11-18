#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_NEOGOLDENMECHASHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x131125C0)
#define MOLEMOLE_NEOGOLDENMECHASHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13112580)
#define MOLEMOLE_NEOGOLDENMECHASHOWOBJ__ONPROCESS_B__2_0_OFFSET UNITYSDK_OFFSET(0x13112790)

namespace MoleMole
{
	inline static constexpr unsigned int NeoGoldenMechaShowObj_TypeDefinitionIndex = 89529;

	class NeoGoldenMechaShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 PopBuildID; // 0x28

		::System::Void _ctor(::System::Int32 popBuildID, ::FAKODLEPJOA showPage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FAKODLEPJOA))((::PBYTE)hIl2Cpp + MOLEMOLE_NEOGOLDENMECHASHOWOBJ__CTOR_OFFSET))(this, popBuildID, showPage);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEOGOLDENMECHASHOWOBJ_ONPROCESS_OFFSET))(this);
		}

		::System::Void _OnProcess_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEOGOLDENMECHASHOWOBJ__ONPROCESS_B__2_0_OFFSET))(this);
		}
	};
}
