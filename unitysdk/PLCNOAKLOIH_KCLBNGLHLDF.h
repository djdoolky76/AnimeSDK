#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define PLCNOAKLOIH_KCLBNGLHLDF_DCMPFEINJCB_OFFSET UNITYSDK_OFFSET(0x1C2BBEB0)
#define PLCNOAKLOIH_KCLBNGLHLDF_MOKKOCOKHKM_OFFSET UNITYSDK_OFFSET(0x1C2BBEA0)
#define PLCNOAKLOIH_KCLBNGLHLDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BBE90)

inline static constexpr unsigned int PLCNOAKLOIH_KCLBNGLHLDF_TypeDefinitionIndex = 89232;

class PLCNOAKLOIH_KCLBNGLHLDF : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_KCLBNGLHLDF__CTOR_OFFSET))(this);
	}

	::System::Void MOKKOCOKHKM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_KCLBNGLHLDF_MOKKOCOKHKM_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void DCMPFEINJCB(::OAEFGCLEHHO* PPDEFOFBJKE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_KCLBNGLHLDF_DCMPFEINJCB_OFFSET))(this, PPDEFOFBJKE);
	}
};
