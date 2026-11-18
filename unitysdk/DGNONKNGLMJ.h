#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGNONKNGLMJ_DMJCLAIANIP.h"
#include "unitysdk/System/Object.h"

class DENGNOJFDLA;

#define DGNONKNGLMJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x19D60C20)
#define DGNONKNGLMJ_BGMLNGMFKAP_OFFSET UNITYSDK_OFFSET(0x19D60CD0)
#define DGNONKNGLMJ_FMIGKIMIBJD_OFFSET UNITYSDK_OFFSET(0x19D60BD0)
#define DGNONKNGLMJ_NPMLCEBKFJM_OFFSET UNITYSDK_OFFSET(0x19D60C80)
#define DGNONKNGLMJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19D60B20)
#define DGNONKNGLMJ_PAJNCNHJDKM_OFFSET UNITYSDK_OFFSET(0x19D60B80)
#define DGNONKNGLMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19D60B70)

inline static constexpr unsigned int DGNONKNGLMJ_TypeDefinitionIndex = 91489;

class DGNONKNGLMJ : public ::System::Object
{
public:
	::DENGNOJFDLA* DGDENJKAJDB; // 0x10
	::DGNONKNGLMJ_DMJCLAIANIP JKBLDFBGBPK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNONKNGLMJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::DENGNOJFDLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DENGNOJFDLA*))((::PBYTE)hIl2Cpp + DGNONKNGLMJ_OJENCMOGDKL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean PAJNCNHJDKM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNONKNGLMJ_PAJNCNHJDKM_OFFSET))(this);
	}

	::System::Boolean FMIGKIMIBJD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNONKNGLMJ_FMIGKIMIBJD_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::DENGNOJFDLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DENGNOJFDLA*))((::PBYTE)hIl2Cpp + DGNONKNGLMJ_BBOMJDBNHIC_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean NPMLCEBKFJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNONKNGLMJ_NPMLCEBKFJM_OFFSET))(this);
	}

	::System::Boolean BGMLNGMFKAP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNONKNGLMJ_BGMLNGMFKAP_OFFSET))(this);
	}
};
