#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define CRIWARE_CRIATOMEX_AISACCONTROLINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x2E88480)

namespace CriWare
{
	struct alignas(8) CriAtomEx_AisacControlInfo
	{
		::System::String* name; // 0x10
		::System::UInt32 id; // 0x18
		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_AISACCONTROLINFO_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
