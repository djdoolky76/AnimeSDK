#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMNHFJOBPKL;
class MGDFAIOOFLI;

#define PNAEIJGNNPK_ILMFNGHOOAA_OFFSET UNITYSDK_OFFSET(0x1D9D56A0)
#define PNAEIJGNNPK_PLGKDLEODHA_OFFSET UNITYSDK_OFFSET(0x1D9D55F0)
#define PNAEIJGNNPK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D55E0)

inline static constexpr unsigned int PNAEIJGNNPK_TypeDefinitionIndex = 49263;

class PNAEIJGNNPK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAEIJGNNPK__CTOR_OFFSET))(this);
	}

	static ::AMNHFJOBPKL* PLGKDLEODHA(::MGDFAIOOFLI* HOGMIIIFFPC)
	{
		return ((::AMNHFJOBPKL*(*)(::MGDFAIOOFLI*))((::PBYTE)hIl2Cpp + PNAEIJGNNPK_PLGKDLEODHA_OFFSET))(HOGMIIIFFPC);
	}

	static ::AMNHFJOBPKL* ILMFNGHOOAA(::System::UInt32 MGMDLMBEDJF)
	{
		return ((::AMNHFJOBPKL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PNAEIJGNNPK_ILMFNGHOOAA_OFFSET))(MGMDLMBEDJF);
	}
};
