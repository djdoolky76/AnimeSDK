#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class MBHOGLGMFEM;
class MFFNHPLEPNC;

#define MOLEMOLE_UIVHSREWARDINFO_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13B24560)
#define MOLEMOLE_UIVHSREWARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x13B24510)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSRewardInfo_TypeDefinitionIndex = 76293;

	class UIVHSRewardInfo : public ::MoleMole::DisplayMessageBase
	{
	public:
		::MFFNHPLEPNC* settleData; // 0x28
		::MBHOGLGMFEM* storeData; // 0x30

		::System::Void _ctor(::MFFNHPLEPNC* settleData, ::MBHOGLGMFEM* storeData)
		{
			return ((::System::Void(*)(::PVOID, ::MFFNHPLEPNC*, ::MBHOGLGMFEM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSREWARDINFO__CTOR_OFFSET))(this, settleData, storeData);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSREWARDINFO_ONPROCESS_OFFSET))(this);
		}
	};
}
