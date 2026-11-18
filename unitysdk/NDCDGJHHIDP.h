#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMEINMPFNJK.h"
#include "unitysdk/LIBBHFPDBFL.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/UnityEngine/Color.h"

#define NDCDGJHHIDP_HCJLLKCCIAJ_OFFSET UNITYSDK_OFFSET(0x1288BD40)
#define NDCDGJHHIDP_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1288BBF0)
#define NDCDGJHHIDP_LOGJBIBGKEN_OFFSET UNITYSDK_OFFSET(0x1288BCF0)
#define NDCDGJHHIDP_MDMHCKNLDBB_OFFSET UNITYSDK_OFFSET(0x1288BC30)
#define NDCDGJHHIDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1288BBE0)

inline static constexpr unsigned int NDCDGJHHIDP_TypeDefinitionIndex = 40926;

class NDCDGJHHIDP : public ::IMEINMPFNJK
{
public:
	::LIBBHFPDBFL DIOBIJIFGGO; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell LFEONIKJIAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NDCDGJHHIDP__CTOR_OFFSET))(this, LFEONIKJIAA);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCDGJHHIDP_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void MDMHCKNLDBB(::LIBBHFPDBFL& ICBANGKGHMF, ::System::Single PBCAAADNEPK, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::PVOID, ::LIBBHFPDBFL&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NDCDGJHHIDP_MDMHCKNLDBB_OFFSET))(this, ICBANGKGHMF, PBCAAADNEPK, EKPEBNCLJPM);
	}

	::System::Void LOGJBIBGKEN(::System::Boolean KDPDLJNCKLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDCDGJHHIDP_LOGJBIBGKEN_OFFSET))(this, KDPDLJNCKLL);
	}

	::System::Void HCJLLKCCIAJ(::UnityEngine::Color IKEHEBEFCCP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + NDCDGJHHIDP_HCJLLKCCIAJ_OFFSET))(this, IKEHEBEFCCP);
	}
};
