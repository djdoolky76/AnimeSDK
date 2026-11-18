#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGDCIMONJIP.h"
#include "unitysdk/FBOHDKKBJKK_DHCOGPODPEC.h"
#include "unitysdk/OCNLBFOPMEK.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFFINNHAOAG_DNAKEIJEHJO_OFFSET UNITYSDK_OFFSET(0x128A4F90)
#define BFFINNHAOAG_HKGNEFLBHNM_OFFSET UNITYSDK_OFFSET(0x128A4DF0)
#define BFFINNHAOAG_INOKFEPEEDJ_OFFSET UNITYSDK_OFFSET(0x128A53A0)
#define BFFINNHAOAG_NPMOACHJNBM_OFFSET UNITYSDK_OFFSET(0x128A4E00)
#define BFFINNHAOAG__CTOR_OFFSET UNITYSDK_OFFSET(0x128A4BF0)

inline static constexpr unsigned int BFFINNHAOAG_TypeDefinitionIndex = 65379;

class BFFINNHAOAG : public ::BGDCIMONJIP
{
public:
	::FBOHDKKBJKK_DHCOGPODPEC NAHHBPNEJKC; // 0x50

	::System::Void _ctor(::System::UInt32 MOODEOPMFLB, ::System::UInt32 DPNKDGJLKFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BFFINNHAOAG__CTOR_OFFSET))(this, MOODEOPMFLB, DPNKDGJLKFC);
	}

	::OCNLBFOPMEK HKGNEFLBHNM()
	{
		return ((::OCNLBFOPMEK(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFINNHAOAG_HKGNEFLBHNM_OFFSET))(this);
	}

	::System::Void NPMOACHJNBM(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*& GGPMCEEHFOH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*&))((::PBYTE)hIl2Cpp + BFFINNHAOAG_NPMOACHJNBM_OFFSET))(this, GGPMCEEHFOH);
	}

	::System::Void DNAKEIJEHJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFINNHAOAG_DNAKEIJEHJO_OFFSET))(this);
	}

	::System::Void INOKFEPEEDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFINNHAOAG_INOKFEPEEDJ_OFFSET))(this);
	}
};
