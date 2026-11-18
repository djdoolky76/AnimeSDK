#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDCKHDEBKKK;
class FBHPDPBIGPK;
class MKFNBHDICNJ;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DFDEIDBBGHG_1;

#define MKFNBHDICNJ_OGAKFCPNHEE_PIADOMGHJEO_OFFSET UNITYSDK_OFFSET(0x17D45CD0)
#define MKFNBHDICNJ_OGAKFCPNHEE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D45CC0)

inline static constexpr unsigned int MKFNBHDICNJ_OGAKFCPNHEE_TypeDefinitionIndex = 61353;

class MKFNBHDICNJ_OGAKFCPNHEE : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*>* NINAIFNMICK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_OGAKFCPNHEE__CTOR_OFFSET))(this);
	}

	::System::Void PIADOMGHJEO(::DFDEIDBBGHG_1<::BDCKHDEBKKK*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::BDCKHDEBKKK*>*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_OGAKFCPNHEE_PIADOMGHJEO_OFFSET))(this, DJLOKMMLFJC);
	}
};
