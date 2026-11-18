#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_UIPINBALLBALLSELECTPAGESHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1676A4B0)
#define MOLEMOLE_UIPINBALLBALLSELECTPAGESHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1676A460)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballBallSelectPageShowObj_TypeDefinitionIndex = 42569;

	class UIPinballBallSelectPageShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 _id; // 0x28

		::System::Void _ctor(::System::Int32 id, ::FAKODLEPJOA showPage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FAKODLEPJOA))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLSELECTPAGESHOWOBJ__CTOR_OFFSET))(this, id, showPage);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBALLSELECTPAGESHOWOBJ_ONPROCESS_OFFSET))(this);
		}
	};
}
