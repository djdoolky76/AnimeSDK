#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

class AB642D1382756991;
class F384C36E21EAD724;
class F9B0FAE4277E552E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B1D7B60865DB6613_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x1651E80)
#define B1D7B60865DB6613_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x1651DD0)
#define B1D7B60865DB6613_B307A21C8E9FF680_OFFSET UNITYSDK_OFFSET(0x16519F0)
#define B1D7B60865DB6613_BA2A8929ADCD2C31_OFFSET UNITYSDK_OFFSET(0x1652010)
#define B1D7B60865DB6613__CTOR_OFFSET UNITYSDK_OFFSET(0x1652950)

inline static constexpr unsigned int B1D7B60865DB6613_TypeDefinitionIndex = 35;

class B1D7B60865DB6613 : public ::System::Object
{
public:
	::AB642D1382756991* BCAA0D007A306993; // 0x10
	::F9B0FAE4277E552E* E14BAC98F5FBFA0D; // 0x18
	::System::Single A3DB7278819370DE; // 0x20
	::System::Single A244CE75723C3B8B; // 0x24
	::System::Int32 A0638A30565E4D28; // 0x28
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Boolean>* E37707220BD900CF; // 0x30

	::System::Boolean BA2A8929ADCD2C31(::AB642D1382756991* F249A74E7BFBE1A7, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* A7A5DE3CA2FA2844, ::System::Single& BDDF0F6C01956F38)
	{
		return ((::System::Boolean(*)(::PVOID, ::AB642D1382756991*, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>*, ::System::Single&))((::PBYTE)hIl2Cpp + B1D7B60865DB6613_BA2A8929ADCD2C31_OFFSET))(this, F249A74E7BFBE1A7, A7A5DE3CA2FA2844, BDDF0F6C01956F38);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1D7B60865DB6613__CTOR_OFFSET))(this);
	}

	::System::Boolean B307A21C8E9FF680(::E12F55A5FCCCF1EC EB5670302F34D4B7, ::System::Collections::Generic::List_1<::F384C36E21EAD724*>* ACCD8D60884AACDA, ::System::Collections::Generic::List_1<::F384C36E21EAD724*>*& F51A4BA317BD0B88, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* A7A5DE3CA2FA2844, ::System::Single& B5EBC34026FA6870)
	{
		return ((::System::Boolean(*)(::PVOID, ::E12F55A5FCCCF1EC, ::System::Collections::Generic::List_1<::F384C36E21EAD724*>*, ::System::Collections::Generic::List_1<::F384C36E21EAD724*>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>*, ::System::Single&))((::PBYTE)hIl2Cpp + B1D7B60865DB6613_B307A21C8E9FF680_OFFSET))(this, EB5670302F34D4B7, ACCD8D60884AACDA, F51A4BA317BD0B88, A7A5DE3CA2FA2844, B5EBC34026FA6870);
	}

	::System::Void A1E97155B145443C(::AB642D1382756991* E940BFE34B1F4BEF, ::F9B0FAE4277E552E* ACDE58E97E37D13C)
	{
		return ((::System::Void(*)(::PVOID, ::AB642D1382756991*, ::F9B0FAE4277E552E*))((::PBYTE)hIl2Cpp + B1D7B60865DB6613_A1E97155B145443C_OFFSET))(this, E940BFE34B1F4BEF, ACDE58E97E37D13C);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1D7B60865DB6613_A765A1D14770A303_OFFSET))(this);
	}
};
