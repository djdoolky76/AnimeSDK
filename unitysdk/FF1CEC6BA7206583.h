#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A6A684AACF63E6A6/E246BE49F200C585.h"
#include "unitysdk/F61F7233E80EFB93/B7D2B4BFF4CC5737.h"
#include "unitysdk/FF1CEC6BA7206583_BDEE8AECF5E6E8D2.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class A0CC2F7BD6262918;
class EF41AAB1A8B59C89;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FF1CEC6BA7206583_A56CF20071FDE0A9_OFFSET UNITYSDK_OFFSET(0x3E67C70)
#define FF1CEC6BA7206583_BA69E3CFFAB0BD46_OFFSET UNITYSDK_OFFSET(0x3E680E0)
#define FF1CEC6BA7206583_F38CE8FC519F71AA_OFFSET UNITYSDK_OFFSET(0x3E67AC0)
#define FF1CEC6BA7206583_FA2079491DD4C56F_OFFSET UNITYSDK_OFFSET(0x3E68440)
#define FF1CEC6BA7206583__CTOR_OFFSET UNITYSDK_OFFSET(0x3E684C0)

inline static constexpr unsigned int FF1CEC6BA7206583_TypeDefinitionIndex = 14935;

struct alignas(8) FF1CEC6BA7206583
{
	::Il2CppArray<::System::Byte>* F75461A7D6484906; // 0x10
	::Il2CppArray<::System::Byte>* A310106ECDF65857; // 0x18
	::System::Int32 A61806D1B8904679; // 0x20
	::System::Byte _padding0[0x4];
	::Il2CppArray<::System::Byte>* BC1558BAD17CA2BF; // 0x28
	::FF1CEC6BA7206583_BDEE8AECF5E6E8D2 B944460C55BC9988; // 0x30
	::EF41AAB1A8B59C89* F05D5F2CD1A2A3BA; // 0x40
	::System::DateTime A90C43BE9F4F4C0D; // 0x48
	::System::DateTime E1CA57B37E111A0B; // 0x50
	::EF41AAB1A8B59C89* E107D37BD09C33DF; // 0x58
	::FF1CEC6BA7206583_BDEE8AECF5E6E8D2 E95345EB6BB9BA4C; // 0x60
	::Il2CppArray<::System::Byte>* F6F9794607051800; // 0x70
	::Il2CppArray<::System::Byte>* E72A0E818E0AE41B; // 0x78
	::Il2CppArray<::System::Byte>* B985B1F7BCAE7A1B; // 0x80
	::System::Collections::Generic::List_1<::A0CC2F7BD6262918*>* F24419FD1DB8CE51; // 0x88
	::FF1CEC6BA7206583_BDEE8AECF5E6E8D2 B0BBD33E01987C9D; // 0x90
	::Il2CppArray<::System::Byte>* B0FC4DBBCA8CF4E5; // 0xA0

	static ::System::String* F38CE8FC519F71AA(::Il2CppArray<::System::Byte>* B2BED8354BC3FEE1, ::F61F7233E80EFB93::B7D2B4BFF4CC5737 ACA7B6BE6A96C489, ::System::String* EF01324FA79B59E0)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::F61F7233E80EFB93::B7D2B4BFF4CC5737, ::System::String*))((::PBYTE)hIl2Cpp + FF1CEC6BA7206583_F38CE8FC519F71AA_OFFSET))(B2BED8354BC3FEE1, ACA7B6BE6A96C489, EF01324FA79B59E0);
	}

	::System::String* A56CF20071FDE0A9(::A6A684AACF63E6A6::E246BE49F200C585 AF0BC24CAA2A62C1, ::System::Boolean A1F7F58F8D4458EA)
	{
		return ((::System::String*(*)(::PVOID, ::A6A684AACF63E6A6::E246BE49F200C585, ::System::Boolean))((::PBYTE)hIl2Cpp + FF1CEC6BA7206583_A56CF20071FDE0A9_OFFSET))(this, AF0BC24CAA2A62C1, A1F7F58F8D4458EA);
	}

	static ::System::String* BA69E3CFFAB0BD46(::EF41AAB1A8B59C89* F79B4D487F303AB2)
	{
		return ((::System::String*(*)(::EF41AAB1A8B59C89*))((::PBYTE)hIl2Cpp + FF1CEC6BA7206583_BA69E3CFFAB0BD46_OFFSET))(F79B4D487F303AB2);
	}

	::System::Void _ctor(::Il2CppArray<::System::Byte>* FA0E11C463ABE811)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FF1CEC6BA7206583__CTOR_OFFSET))(this, FA0E11C463ABE811);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>* FA2079491DD4C56F(::EF41AAB1A8B59C89* F79B4D487F303AB2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>*(*)(::EF41AAB1A8B59C89*))((::PBYTE)hIl2Cpp + FF1CEC6BA7206583_FA2079491DD4C56F_OFFSET))(F79B4D487F303AB2);
	}
};
