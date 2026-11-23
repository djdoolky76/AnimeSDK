#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace TMPro { class TMP_Text; }

#define FC3B826B15C2C608_B2822A0173CD0556_OFFSET UNITYSDK_OFFSET(0x409F7E0)
#define FC3B826B15C2C608_B2DB633DAA43F424_OFFSET UNITYSDK_OFFSET(0x409F740)

inline static constexpr unsigned int FC3B826B15C2C608_TypeDefinitionIndex = 18187;

struct alignas(8) FC3B826B15C2C608
{
	::TMPro::TMP_Text* B211666AC084BB8B; // 0x10
	::System::Int32 AE8665F1077F631B; // 0x18
	::System::Int32 BC9E5D86F92651DC; // 0x1C
	::System::Int32 E4DF57BAAEBF6063; // 0x20
	::System::Int32 AD0EF1D77F800DCE; // 0x24
	::System::Int32 A9AB55A92F60EBAB; // 0x28
	::System::Byte _padding0[0x4];
	::Il2CppArray<::System::Char>* B4A16F210C633318; // 0x30

	::System::String* B2DB633DAA43F424()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FC3B826B15C2C608_B2DB633DAA43F424_OFFSET))(this);
	}

	::System::Void B2822A0173CD0556(::Il2CppArray<::System::Char>* E97E8D008427A296, ::System::Int32 B11388950C465AE2, ::System::Int32 A96B867D8BBB8B00)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FC3B826B15C2C608_B2822A0173CD0556_OFFSET))(this, E97E8D008427A296, B11388950C465AE2, A96B867D8BBB8B00);
	}
};
