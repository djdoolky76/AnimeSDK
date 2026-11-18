#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELBHCPLOMJA;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
template <typename T> class DFDEIDBBGHG_1;

#define IBHGDJGJLEI_LJHEPOIIMAB_CADCLALKDIE_OFFSET UNITYSDK_OFFSET(0x12E9EAE0)
#define IBHGDJGJLEI_LJHEPOIIMAB_GJCLKFHPHIE_OFFSET UNITYSDK_OFFSET(0x12E9EA60)
#define IBHGDJGJLEI_LJHEPOIIMAB__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9EA50)

inline static constexpr unsigned int IBHGDJGJLEI_LJHEPOIIMAB_TypeDefinitionIndex = 55750;

class IBHGDJGJLEI_LJHEPOIIMAB : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action_2<::DFDEIDBBGHG_1<::ELBHCPLOMJA*>*, ::System::Boolean>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LJHEPOIIMAB__CTOR_OFFSET))(this);
	}

	::System::Void GJCLKFHPHIE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LJHEPOIIMAB_GJCLKFHPHIE_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void CADCLALKDIE(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LJHEPOIIMAB_CADCLALKDIE_OFFSET))(this, BLLNHDIDKPA);
	}
};
