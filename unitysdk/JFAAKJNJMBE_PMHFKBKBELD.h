#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HFALNBMNFCA.h"

class HCBFNKIPOPJ;
class JFAAKJNJMBE;
namespace System { class Action; }

#define JFAAKJNJMBE_PMHFKBKBELD_GINEAIFGHLM_OFFSET UNITYSDK_OFFSET(0x165A1610)
#define JFAAKJNJMBE_PMHFKBKBELD_JLEHPMNOKAE_OFFSET UNITYSDK_OFFSET(0x165A12B0)
#define JFAAKJNJMBE_PMHFKBKBELD__CTOR_OFFSET UNITYSDK_OFFSET(0x165A12A0)

inline static constexpr unsigned int JFAAKJNJMBE_PMHFKBKBELD_TypeDefinitionIndex = 68428;

class JFAAKJNJMBE_PMHFKBKBELD : public ::System::Object
{
public:
	::JFAAKJNJMBE* KLHPEBKNIFB; // 0x10
	::HCBFNKIPOPJ* OIPJHJHGONH; // 0x18
	::System::Action* POCANNAFFOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAAKJNJMBE_PMHFKBKBELD__CTOR_OFFSET))(this);
	}

	::System::Void JLEHPMNOKAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAAKJNJMBE_PMHFKBKBELD_JLEHPMNOKAE_OFFSET))(this);
	}

	::System::Void GINEAIFGHLM(::HFALNBMNFCA PDIBELGHENG)
	{
		return ((::System::Void(*)(::PVOID, ::HFALNBMNFCA))((::PBYTE)hIl2Cpp + JFAAKJNJMBE_PMHFKBKBELD_GINEAIFGHLM_OFFSET))(this, PDIBELGHENG);
	}
};
