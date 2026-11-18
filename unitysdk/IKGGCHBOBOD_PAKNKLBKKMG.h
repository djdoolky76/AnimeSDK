#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IKGGCHBOBOD_GPMADJPABEC;

#define IKGGCHBOBOD_PAKNKLBKKMG_GDCPCAAEAND_OFFSET UNITYSDK_OFFSET(0x15C150E0)
#define IKGGCHBOBOD_PAKNKLBKKMG__CTOR_OFFSET UNITYSDK_OFFSET(0x15C150D0)

inline static constexpr unsigned int IKGGCHBOBOD_PAKNKLBKKMG_TypeDefinitionIndex = 57370;

class IKGGCHBOBOD_PAKNKLBKKMG : public ::System::Object
{
public:
	::IKGGCHBOBOD_GPMADJPABEC* KGFKHBMEKBL; // 0x10
	::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGGCHBOBOD_PAKNKLBKKMG__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 GDCPCAAEAND()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGGCHBOBOD_PAKNKLBKKMG_GDCPCAAEAND_OFFSET))(this);
	}
};
