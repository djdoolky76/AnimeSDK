#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EPAOAGKDGHO;
class GNIGBODIFOL;
class OHOJMHIBBIK;
namespace MoleMole { class ShoppingMallLimitedCardRowContext; }

#define MFMEMCEICGJ_AGOKHCIMBCN_OFFSET UNITYSDK_OFFSET(0x185312C0)
#define MFMEMCEICGJ_DECMEIJMNJD_OFFSET UNITYSDK_OFFSET(0x18531270)
#define MFMEMCEICGJ_ECKFDOJKBHC_OFFSET UNITYSDK_OFFSET(0x185303C0)
#define MFMEMCEICGJ_OEPAFMHPIFH_OFFSET UNITYSDK_OFFSET(0x185306A0)
#define MFMEMCEICGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x185302E0)

inline static constexpr unsigned int MFMEMCEICGJ_TypeDefinitionIndex = 72744;

class MFMEMCEICGJ : public ::System::Object
{
public:
	::GNIGBODIFOL* LGDIOLJHIGP; // 0x10
	::EPAOAGKDGHO* ADEBBNECMCK; // 0x18
	::MoleMole::ShoppingMallLimitedCardRowContext* DAAAEJDBNFI; // 0x20
	::OHOJMHIBBIK* KMMKMGDHCOI; // 0x28

	::System::Void _ctor(::OHOJMHIBBIK* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::OHOJMHIBBIK*))((::PBYTE)hIl2Cpp + MFMEMCEICGJ__CTOR_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void ECKFDOJKBHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMEMCEICGJ_ECKFDOJKBHC_OFFSET))(this);
	}

	::System::Void OEPAFMHPIFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMEMCEICGJ_OEPAFMHPIFH_OFFSET))(this);
	}

	::System::Void DECMEIJMNJD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMEMCEICGJ_DECMEIJMNJD_OFFSET))(this);
	}

	::System::Void AGOKHCIMBCN(::MoleMole::ShoppingMallLimitedCardRowContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ShoppingMallLimitedCardRowContext*))((::PBYTE)hIl2Cpp + MFMEMCEICGJ_AGOKHCIMBCN_OFFSET))(this, AAOCANGHBDG);
	}
};
