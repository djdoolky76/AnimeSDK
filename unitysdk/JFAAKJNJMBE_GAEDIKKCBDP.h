#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BLPJHNGACIL;
namespace System { class Action; }

#define JFAAKJNJMBE_GAEDIKKCBDP_ADFKGLNLEDF_OFFSET UNITYSDK_OFFSET(0x13ACB760)
#define JFAAKJNJMBE_GAEDIKKCBDP_KCGDALNDFDF_OFFSET UNITYSDK_OFFSET(0x13ACB630)
#define JFAAKJNJMBE_GAEDIKKCBDP__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACB620)

inline static constexpr unsigned int JFAAKJNJMBE_GAEDIKKCBDP_TypeDefinitionIndex = 68427;

class JFAAKJNJMBE_GAEDIKKCBDP : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10
	::BLPJHNGACIL* HPGJLKKCPMD; // 0x18
	::System::Int32 OIKFFGKDHME; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAAKJNJMBE_GAEDIKKCBDP__CTOR_OFFSET))(this);
	}

	::System::Void KCGDALNDFDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAAKJNJMBE_GAEDIKKCBDP_KCGDALNDFDF_OFFSET))(this);
	}

	::System::Void ADFKGLNLEDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAAKJNJMBE_GAEDIKKCBDP_ADFKGLNLEDF_OFFSET))(this);
	}
};
