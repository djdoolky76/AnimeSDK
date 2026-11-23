#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B703C91251B8559C_AADD2FEB165102B5__CTOR_OFFSET UNITYSDK_OFFSET(0x43FCFE0)

inline static constexpr unsigned int B703C91251B8559C_AADD2FEB165102B5_TypeDefinitionIndex = 19434;

class B703C91251B8559C_AADD2FEB165102B5 : public ::System::Object
{
public:
	::System::Int32 B4343BD3860F5C24; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* E65FF4B38EBE1006; // 0x18
	::System::String* E792B3FB09BC1C13; // 0x20
	::System::Int32 A96B867D8BBB8B00; // 0x28
	::System::Byte _padding1[0x4];
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* E734BA46CBA523FB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B703C91251B8559C_AADD2FEB165102B5__CTOR_OFFSET))(this);
	}
};
