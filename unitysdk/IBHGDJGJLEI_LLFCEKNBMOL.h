#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class OGBFIGNJPBP;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define IBHGDJGJLEI_LLFCEKNBMOL_CHBOJAFFMPG_OFFSET UNITYSDK_OFFSET(0x181A4C70)
#define IBHGDJGJLEI_LLFCEKNBMOL_PCNAJCLGLLL_OFFSET UNITYSDK_OFFSET(0x181A4C80)
#define IBHGDJGJLEI_LLFCEKNBMOL__CTOR_OFFSET UNITYSDK_OFFSET(0x181A4C60)

inline static constexpr unsigned int IBHGDJGJLEI_LLFCEKNBMOL_TypeDefinitionIndex = 55791;

class IBHGDJGJLEI_LLFCEKNBMOL : public ::System::Object
{
public:
	::System::Action_1<::OGBFIGNJPBP*>* KOHAILADCFA; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LLFCEKNBMOL__CTOR_OFFSET))(this);
	}

	::System::Void CHBOJAFFMPG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LLFCEKNBMOL_CHBOJAFFMPG_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void PCNAJCLGLLL(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LLFCEKNBMOL_PCNAJCLGLLL_OFFSET))(this, GLAOEHCGCFO);
	}
};
