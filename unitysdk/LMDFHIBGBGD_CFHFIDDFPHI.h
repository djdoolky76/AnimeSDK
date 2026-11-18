#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFJLNEHAAF_PNEJDCLKPKF;
class LMDFHIBGBGD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMDFHIBGBGD_CFHFIDDFPHI_CBPHLGGGPHE_OFFSET UNITYSDK_OFFSET(0x15666AB0)
#define LMDFHIBGBGD_CFHFIDDFPHI_PMLPDAHDHIA_OFFSET UNITYSDK_OFFSET(0x15667010)
#define LMDFHIBGBGD_CFHFIDDFPHI__CTOR_OFFSET UNITYSDK_OFFSET(0x15666AA0)

inline static constexpr unsigned int LMDFHIBGBGD_CFHFIDDFPHI_TypeDefinitionIndex = 79903;

class LMDFHIBGBGD_CFHFIDDFPHI : public ::System::Object
{
public:
	::System::String* OLOMNNBBHPJ; // 0x10
	::LMDFHIBGBGD* KLHPEBKNIFB; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* JJBELKNLNIA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDFHIBGBGD_CFHFIDDFPHI__CTOR_OFFSET))(this);
	}

	::System::Void CBPHLGGGPHE(::CHFJLNEHAAF_PNEJDCLKPKF* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::CHFJLNEHAAF_PNEJDCLKPKF*))((::PBYTE)hIl2Cpp + LMDFHIBGBGD_CFHFIDDFPHI_CBPHLGGGPHE_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Void PMLPDAHDHIA(::CHFJLNEHAAF_PNEJDCLKPKF* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::CHFJLNEHAAF_PNEJDCLKPKF*))((::PBYTE)hIl2Cpp + LMDFHIBGBGD_CFHFIDDFPHI_PMLPDAHDHIA_OFFSET))(this, IGAAKDOIPNN);
	}
};
