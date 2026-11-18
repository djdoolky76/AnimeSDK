#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDCKHDEBKKK;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class DFDEIDBBGHG_1;

#define IBHGDJGJLEI_LHBMDKADKMG_FFLAJACLAKE_OFFSET UNITYSDK_OFFSET(0x101304C0)
#define IBHGDJGJLEI_LHBMDKADKMG_ILNIKJIAODC_OFFSET UNITYSDK_OFFSET(0x10130440)
#define IBHGDJGJLEI_LHBMDKADKMG__CTOR_OFFSET UNITYSDK_OFFSET(0x10130430)

inline static constexpr unsigned int IBHGDJGJLEI_LHBMDKADKMG_TypeDefinitionIndex = 55763;

class IBHGDJGJLEI_LHBMDKADKMG : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action_1<::DFDEIDBBGHG_1<::BDCKHDEBKKK*>*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LHBMDKADKMG__CTOR_OFFSET))(this);
	}

	::System::Void ILNIKJIAODC(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LHBMDKADKMG_ILNIKJIAODC_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void FFLAJACLAKE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_LHBMDKADKMG_FFLAJACLAKE_OFFSET))(this, PIIPCLCCOIG);
	}
};
