#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AAEKBENGCBO;
class LLIMBFMEECI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHFMBDLJFFD_IBMIGHEHPHN_OFFSET UNITYSDK_OFFSET(0x10EF46C0)
#define GHFMBDLJFFD_ILDKJMCALIJ_OFFSET UNITYSDK_OFFSET(0x10EF4AC0)
#define GHFMBDLJFFD_NLLJAEAHLFA_OFFSET UNITYSDK_OFFSET(0x10EF4700)
#define GHFMBDLJFFD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x10EF4870)
#define GHFMBDLJFFD__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF4740)

inline static constexpr unsigned int GHFMBDLJFFD_TypeDefinitionIndex = 54184;

class GHFMBDLJFFD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::LLIMBFMEECI*>* MMHMPLDIENA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AAEKBENGCBO*>* BMFABAIELKM; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* LJEKBCEDHAO; // 0x20
	::System::Boolean HOGMHBHEGME; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 PLAEINEAEGI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFMBDLJFFD__CTOR_OFFSET))(this);
	}

	::System::Void IBMIGHEHPHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFMBDLJFFD_IBMIGHEHPHN_OFFSET))(this);
	}

	::System::Void NLLJAEAHLFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFMBDLJFFD_NLLJAEAHLFA_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFMBDLJFFD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::AAEKBENGCBO*>* ILDKJMCALIJ()
	{
		return ((::System::Collections::Generic::List_1<::AAEKBENGCBO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFMBDLJFFD_ILDKJMCALIJ_OFFSET))(this);
	}
};
