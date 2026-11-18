#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGAKFDIEBPN.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"

class HDNNIIJFNBM;
class IKFKKMBEBBG;
class OBIJODGCLDA;

#define AAOPPONDJPM_GFMBENFHBJB_OFFSET UNITYSDK_OFFSET(0x17DB9590)
#define AAOPPONDJPM_HBMFMFLHNAA_OFFSET UNITYSDK_OFFSET(0x17DB96A0)
#define AAOPPONDJPM_HDDFBNDJLAG_OFFSET UNITYSDK_OFFSET(0x17DB9600)

inline static constexpr unsigned int AAOPPONDJPM_TypeDefinitionIndex = 48746;

class AAOPPONDJPM : public ::System::Object
{
public:
	static ::System::Void GFMBENFHBJB(::IKFKKMBEBBG* IJKIMCMPBCF, ::System::Boolean CAAFEGLOALC, ::HDNNIIJFNBM* IELEHLNCLII)
	{
		return ((::System::Void(*)(::IKFKKMBEBBG*, ::System::Boolean, ::HDNNIIJFNBM*))((::PBYTE)hIl2Cpp + AAOPPONDJPM_GFMBENFHBJB_OFFSET))(IJKIMCMPBCF, CAAFEGLOALC, IELEHLNCLII);
	}

	static ::System::Single HDDFBNDJLAG(::MoleMole::Config::PropertyModifyFunction FJDOCPKEACA, ::System::Single DGCNAFMPKMA, ::System::Single FCOMCHJLFOA)
	{
		return ((::System::Single(*)(::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AAOPPONDJPM_HDDFBNDJLAG_OFFSET))(FJDOCPKEACA, DGCNAFMPKMA, FCOMCHJLFOA);
	}

	static ::System::Single HBMFMFLHNAA(::OBIJODGCLDA* GBELIHABEDH, ::KGAKFDIEBPN CFFCKJIDPDC)
	{
		return ((::System::Single(*)(::OBIJODGCLDA*, ::KGAKFDIEBPN))((::PBYTE)hIl2Cpp + AAOPPONDJPM_HBMFMFLHNAA_OFFSET))(GBELIHABEDH, CFFCKJIDPDC);
	}
};
