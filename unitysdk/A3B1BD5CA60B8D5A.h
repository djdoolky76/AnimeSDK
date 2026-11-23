#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class E46E4648F6874D0E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A3B1BD5CA60B8D5A_F0190E585FF00894_OFFSET UNITYSDK_OFFSET(0x165A480)
#define A3B1BD5CA60B8D5A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A3B1BD5CA60B8D5A_TypeDefinitionIndex = 8070;

class A3B1BD5CA60B8D5A : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E46E4648F6874D0E*>* E20856E6E9A9B690; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3B1BD5CA60B8D5A__CTOR_OFFSET))(this);
	}

	::System::Void F0190E585FF00894(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E46E4648F6874D0E*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E46E4648F6874D0E*>*))((::PBYTE)hIl2Cpp + A3B1BD5CA60B8D5A_F0190E585FF00894_OFFSET))(this, E937D4885DAA1AE8);
	}
};
