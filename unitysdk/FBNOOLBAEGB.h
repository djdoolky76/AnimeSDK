#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BLEFLDCEAEN.h"

#define FBNOOLBAEGB_EJDOJCCONIL_OFFSET UNITYSDK_OFFSET(0x15E45940)
#define FBNOOLBAEGB_FMMLOFNINBB_OFFSET UNITYSDK_OFFSET(0x15E45810)

inline static constexpr unsigned int FBNOOLBAEGB_TypeDefinitionIndex = 64782;

class FBNOOLBAEGB : public ::System::Object
{
public:
	static ::System::Boolean FMMLOFNINBB(::BLEFLDCEAEN FGHMEEEHCDC, ::System::Single KKAMDFNMMJH, ::System::Single IAKPGBCAAKM, ::System::Single& IPDPLKFKKKP)
	{
		return ((::System::Boolean(*)(::BLEFLDCEAEN, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + FBNOOLBAEGB_FMMLOFNINBB_OFFSET))(FGHMEEEHCDC, KKAMDFNMMJH, IAKPGBCAAKM, IPDPLKFKKKP);
	}

	static ::System::Boolean EJDOJCCONIL(::BLEFLDCEAEN& FGHMEEEHCDC, ::System::Single ILPPMPMHLGF, ::System::Single& EJAOAGGJHHA)
	{
		return ((::System::Boolean(*)(::BLEFLDCEAEN&, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + FBNOOLBAEGB_EJDOJCCONIL_OFFSET))(FGHMEEEHCDC, ILPPMPMHLGF, EJAOAGGJHHA);
	}
};
