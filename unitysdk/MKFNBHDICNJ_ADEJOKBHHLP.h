#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDCKHDEBKKK;
class FBHPDPBIGPK;
class MKFNBHDICNJ;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DFDEIDBBGHG_1;

#define MKFNBHDICNJ_ADEJOKBHHLP_DPIGDNOIJCJ_OFFSET UNITYSDK_OFFSET(0x177C7630)
#define MKFNBHDICNJ_ADEJOKBHHLP_JFBMMMHCDBE_OFFSET UNITYSDK_OFFSET(0x177C7660)
#define MKFNBHDICNJ_ADEJOKBHHLP__CTOR_OFFSET UNITYSDK_OFFSET(0x177C7620)

inline static constexpr unsigned int MKFNBHDICNJ_ADEJOKBHHLP_TypeDefinitionIndex = 61402;

class MKFNBHDICNJ_ADEJOKBHHLP : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*>* KOIMIIHJJFB; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_ADEJOKBHHLP__CTOR_OFFSET))(this);
	}

	::System::Void DPIGDNOIJCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_ADEJOKBHHLP_DPIGDNOIJCJ_OFFSET))(this);
	}

	::System::Void JFBMMMHCDBE(::DFDEIDBBGHG_1<::BDCKHDEBKKK*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::BDCKHDEBKKK*>*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_ADEJOKBHHLP_JFBMMMHCDBE_OFFSET))(this, DJLOKMMLFJC);
	}
};
