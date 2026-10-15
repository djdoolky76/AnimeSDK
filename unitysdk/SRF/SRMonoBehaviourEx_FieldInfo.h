#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

namespace SRF
{
	struct alignas(8) SRMonoBehaviourEx_FieldInfo
	{
		::System::Boolean AutoCreate; // 0x10
		::System::Boolean AutoSet; // 0x11
		::System::Byte _padding0[0x6];
		::System::Reflection::FieldInfo* Field; // 0x18
		::System::Boolean Import; // 0x20
		::System::Byte _padding1[0x7];
		::System::Type* ImportType; // 0x28
	};
}
