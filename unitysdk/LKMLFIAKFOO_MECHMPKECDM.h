#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LKMLFIAKFOO;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKMLFIAKFOO_MECHMPKECDM_CHDPJOHBFGH_OFFSET UNITYSDK_OFFSET(0x168566A0)
#define LKMLFIAKFOO_MECHMPKECDM__CTOR_OFFSET UNITYSDK_OFFSET(0x16856690)

inline static constexpr unsigned int LKMLFIAKFOO_MECHMPKECDM_TypeDefinitionIndex = 43586;

class LKMLFIAKFOO_MECHMPKECDM : public ::System::Object
{
public:
	::System::Action_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* EDNJGMKPFHG; // 0x10
	::LKMLFIAKFOO* KLHPEBKNIFB; // 0x18
	::System::UInt32 NJNOHDNDNAF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_MECHMPKECDM__CTOR_OFFSET))(this);
	}

	::System::Void CHDPJOHBFGH(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_MECHMPKECDM_CHDPJOHBFGH_OFFSET))(this, NAPFALLANDL);
	}
};
