#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MCONJOMJABJ;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKPFDNANCLC_MGJJCFGMGIC_NJLCHBDDGDF_OFFSET UNITYSDK_OFFSET(0xF9DE3A0)
#define EKPFDNANCLC_MGJJCFGMGIC_PAJMANBKCFA_OFFSET UNITYSDK_OFFSET(0xF9DE300)
#define EKPFDNANCLC_MGJJCFGMGIC__CTOR_OFFSET UNITYSDK_OFFSET(0xF9DE2F0)

inline static constexpr unsigned int EKPFDNANCLC_MGJJCFGMGIC_TypeDefinitionIndex = 73133;

class EKPFDNANCLC_MGJJCFGMGIC : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* IHFECMDGKLJ; // 0x10
	::System::Collections::Generic::List_1<::MCONJOMJABJ*>* KFKOELECBBP; // 0x18
	::System::Action* LDDCKKNAKJJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPFDNANCLC_MGJJCFGMGIC__CTOR_OFFSET))(this);
	}

	::System::Void PAJMANBKCFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPFDNANCLC_MGJJCFGMGIC_PAJMANBKCFA_OFFSET))(this);
	}

	::System::Void NJLCHBDDGDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPFDNANCLC_MGJJCFGMGIC_NJLCHBDDGDF_OFFSET))(this);
	}
};
