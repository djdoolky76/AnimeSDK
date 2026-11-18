#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class OAEFGCLEHHO;
class OPIBJJIMIFC;
namespace System { template <typename T> class Action_1; }
template <typename T> class DFDEIDBBGHG_1;

#define IBHGDJGJLEI_JGLDEJIOMHE_CDIJEIBILGE_OFFSET UNITYSDK_OFFSET(0x141B1250)
#define IBHGDJGJLEI_JGLDEJIOMHE_MIMGBKKEDIC_OFFSET UNITYSDK_OFFSET(0x141B11F0)
#define IBHGDJGJLEI_JGLDEJIOMHE__CTOR_OFFSET UNITYSDK_OFFSET(0x141B11E0)

inline static constexpr unsigned int IBHGDJGJLEI_JGLDEJIOMHE_TypeDefinitionIndex = 55759;

class IBHGDJGJLEI_JGLDEJIOMHE : public ::System::Object
{
public:
	::System::Action_1<::DFDEIDBBGHG_1<::OPIBJJIMIFC*>*>* EDNJGMKPFHG; // 0x10
	::System::Action_1<::CFMGIKJLMBJ*>* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_JGLDEJIOMHE__CTOR_OFFSET))(this);
	}

	::System::Void MIMGBKKEDIC(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_JGLDEJIOMHE_MIMGBKKEDIC_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::Void CDIJEIBILGE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_JGLDEJIOMHE_CDIJEIBILGE_OFFSET))(this, GLAOEHCGCFO);
	}
};
