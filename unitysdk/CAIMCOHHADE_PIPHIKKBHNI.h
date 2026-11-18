#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAIMCOHHADE;
class GNKKDGGFNBO;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DFDEIDBBGHG_1;

#define CAIMCOHHADE_PIPHIKKBHNI_EMNLDNOCCPO_OFFSET UNITYSDK_OFFSET(0x1477BF20)
#define CAIMCOHHADE_PIPHIKKBHNI_PIJBHKFPLEK_OFFSET UNITYSDK_OFFSET(0x1477BF80)
#define CAIMCOHHADE_PIPHIKKBHNI__CTOR_OFFSET UNITYSDK_OFFSET(0x14774B10)

inline static constexpr unsigned int CAIMCOHHADE_PIPHIKKBHNI_TypeDefinitionIndex = 62623;

class CAIMCOHHADE_PIPHIKKBHNI : public ::System::Object
{
public:
	::CAIMCOHHADE* KLHPEBKNIFB; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::GNKKDGGFNBO*>*>* CNOCDBLMIAE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMCOHHADE_PIPHIKKBHNI__CTOR_OFFSET))(this);
	}

	::System::Void EMNLDNOCCPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIMCOHHADE_PIPHIKKBHNI_EMNLDNOCCPO_OFFSET))(this);
	}

	::System::Void PIJBHKFPLEK(::DFDEIDBBGHG_1<::System::UInt64>* HPNMDCOCACJ)
	{
		return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + CAIMCOHHADE_PIPHIKKBHNI_PIJBHKFPLEK_OFFSET))(this, HPNMDCOCACJ);
	}
};
