#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJKOCFFMLFB.h"
#include "unitysdk/System/Object.h"

class AGPPAOECHHO;

#define AGPPAOECHHO_CICJIDOKNIE_HNNOAOBAHPC_OFFSET UNITYSDK_OFFSET(0x134CA760)
#define AGPPAOECHHO_CICJIDOKNIE__CTOR_OFFSET UNITYSDK_OFFSET(0x134CA750)

inline static constexpr unsigned int AGPPAOECHHO_CICJIDOKNIE_TypeDefinitionIndex = 81963;

class AGPPAOECHHO_CICJIDOKNIE : public ::System::Object
{
public:
	::AGPPAOECHHO* KLHPEBKNIFB; // 0x10
	::PJKOCFFMLFB OGHBFBJFGIH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPPAOECHHO_CICJIDOKNIE__CTOR_OFFSET))(this);
	}

	::System::Void HNNOAOBAHPC(::System::Boolean KGGJCGPMAIH, ::System::Int32 EDDOCKEICDM, ::System::Boolean BPEGDPLGFPO, ::System::Int32 HAJMKBCMKCE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + AGPPAOECHHO_CICJIDOKNIE_HNNOAOBAHPC_OFFSET))(this, KGGJCGPMAIH, EDDOCKEICDM, BPEGDPLGFPO, HAJMKBCMKCE);
	}
};
