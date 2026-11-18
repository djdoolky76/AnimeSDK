#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMFGEDJIFIO.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class EEMIHLLPOCA;
class FBAMLABJMKF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EEMIHLLPOCA_PJJOMGPOEKK_GFDJFJLKOAF_OFFSET UNITYSDK_OFFSET(0x148D0890)
#define EEMIHLLPOCA_PJJOMGPOEKK_KCJENFAMFKI_OFFSET UNITYSDK_OFFSET(0x148D0900)
#define EEMIHLLPOCA_PJJOMGPOEKK__CTOR_OFFSET UNITYSDK_OFFSET(0x148D0880)

inline static constexpr unsigned int EEMIHLLPOCA_PJJOMGPOEKK_TypeDefinitionIndex = 52132;

class EEMIHLLPOCA_PJJOMGPOEKK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::LMFGEDJIFIO>* NDPKLDFBCFN; // 0x10
	::EEMIHLLPOCA* KLHPEBKNIFB; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_PJJOMGPOEKK__CTOR_OFFSET))(this);
	}

	::System::Void GFDJFJLKOAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_PJJOMGPOEKK_GFDJFJLKOAF_OFFSET))(this);
	}

	::System::Void KCJENFAMFKI(::FBAMLABJMKF* CBLGCIFLMKL)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_PJJOMGPOEKK_KCJENFAMFKI_OFFSET))(this, CBLGCIFLMKL);
	}
};
