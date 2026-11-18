#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJHKEAFOAF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FEIKPIKAJEC.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEAECEINKCC_KCFMHPHDBEC_DCAIDHBLOEH_OFFSET UNITYSDK_OFFSET(0x15DA1AE0)
#define HEAECEINKCC_KCFMHPHDBEC_GBNJGCLLGMJ_OFFSET UNITYSDK_OFFSET(0x15DA1BD0)
#define HEAECEINKCC_KCFMHPHDBEC_HEEIPFLABLC_OFFSET UNITYSDK_OFFSET(0x15DA1BC0)
#define HEAECEINKCC_KCFMHPHDBEC__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA1AD0)

inline static constexpr unsigned int HEAECEINKCC_KCFMHPHDBEC_TypeDefinitionIndex = 64559;

class HEAECEINKCC_KCFMHPHDBEC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* KDFIEDAFACO; // 0x10
	::LLJHKEAFOAF NJDHJMHFMLO; // 0x18
	::System::Collections::Generic::List_1<::System::Double>* NFJECIGPFOL; // 0x28
	::System::Double BOBHDMBLNFL; // 0x30
	::System::Boolean MJLGHGFCHOM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_KCFMHPHDBEC__CTOR_OFFSET))(this);
	}

	::System::Void DCAIDHBLOEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_KCFMHPHDBEC_DCAIDHBLOEH_OFFSET))(this);
	}

	::System::Void HEEIPFLABLC(::FEIKPIKAJEC HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::FEIKPIKAJEC))((::PBYTE)hIl2Cpp + HEAECEINKCC_KCFMHPHDBEC_HEEIPFLABLC_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Boolean GBNJGCLLGMJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_KCFMHPHDBEC_GBNJGCLLGMJ_OFFSET))(this);
	}
};
