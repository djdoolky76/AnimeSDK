#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class IKNGGHOCDBF;

#define INLCANACFJK_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0x13823750)
#define INLCANACFJK_GPAGOABIFFP_OFFSET UNITYSDK_OFFSET(0x13823910)
#define INLCANACFJK__CTOR_OFFSET UNITYSDK_OFFSET(0x13823730)

inline static constexpr unsigned int INLCANACFJK_TypeDefinitionIndex = 64066;

class INLCANACFJK : public ::System::Object
{
public:
	::CFMGIKJLMBJ* LJBPECKCCEA; // 0x10
	::IKNGGHOCDBF* APLFIKBEFNP; // 0x18
	::System::UInt32 DAIOBDPPJIO; // 0x20

	::System::Void _ctor(::System::UInt32 DAIOBDPPJIO, ::IKNGGHOCDBF* APLFIKBEFNP, ::CFMGIKJLMBJ* LMDCOGAGPLA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::IKNGGHOCDBF*, ::CFMGIKJLMBJ*))((::PBYTE)hIl2Cpp + INLCANACFJK__CTOR_OFFSET))(this, DAIOBDPPJIO, APLFIKBEFNP, LMDCOGAGPLA);
	}

	::System::Void DKDJDEJHABH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLCANACFJK_DKDJDEJHABH_OFFSET))(this);
	}

	::CFMGIKJLMBJ* GPAGOABIFFP()
	{
		return ((::CFMGIKJLMBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLCANACFJK_GPAGOABIFFP_OFFSET))(this);
	}
};
