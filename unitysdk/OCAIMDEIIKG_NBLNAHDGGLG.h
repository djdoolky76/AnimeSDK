#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNLPBPGMJMF;
class OCAIMDEIIKG_DLLLCCEOOND;

#define OCAIMDEIIKG_NBLNAHDGGLG_ILAABLBOJJM_OFFSET UNITYSDK_OFFSET(0xF174150)
#define OCAIMDEIIKG_NBLNAHDGGLG__CTOR_OFFSET UNITYSDK_OFFSET(0xF173E80)

inline static constexpr unsigned int OCAIMDEIIKG_NBLNAHDGGLG_TypeDefinitionIndex = 44913;

class OCAIMDEIIKG_NBLNAHDGGLG : public ::System::Object
{
public:
	::HNLPBPGMJMF* KPNIHKEKDOC; // 0x10
	::OCAIMDEIIKG_DLLLCCEOOND* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIMDEIIKG_NBLNAHDGGLG__CTOR_OFFSET))(this);
	}

	::System::Void ILAABLBOJJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIMDEIIKG_NBLNAHDGGLG_ILAABLBOJJM_OFFSET))(this);
	}
};
