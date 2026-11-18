#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPLAINJPLCB_FCFFPFBELMK.h"
#include "unitysdk/MFEBGICPHCM.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define HPLAINJPLCB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1012A910)
#define HPLAINJPLCB__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1012A920)
#define HPLAINJPLCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1012A8F0)

inline static constexpr unsigned int HPLAINJPLCB_TypeDefinitionIndex = 64107;

class HPLAINJPLCB : public ::System::Attribute
{
public:
	::System::Reflection::FieldInfo* OJKCCIDFGJG; // 0x10
	::System::Reflection::FieldInfo* JLDJEDEMLBJ; // 0x18
	::Il2CppArray<::MFEBGICPHCM>* HJIPCACGAHO; // 0x20
	::HPLAINJPLCB_FCFFPFBELMK OBNIAHNMHPF; // 0x28
	::System::Boolean KHADNDMGFML; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Single DNFNKBNBJHM; // 0x30
	::System::Single GDBANLBHNJK; // 0x34

	::System::Void _ctor(::System::Single GDBANLBHNJK, ::System::Single DNFNKBNBJHM, ::HPLAINJPLCB_FCFFPFBELMK OBNIAHNMHPF, ::Il2CppArray<::MFEBGICPHCM>* BDIPNEAMPGK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::HPLAINJPLCB_FCFFPFBELMK, ::Il2CppArray<::MFEBGICPHCM>*))((::PBYTE)hIl2Cpp + HPLAINJPLCB__CTOR_OFFSET))(this, GDBANLBHNJK, DNFNKBNBJHM, OBNIAHNMHPF, BDIPNEAMPGK);
	}

	::System::Void _ctor_1(::Il2CppArray<::MFEBGICPHCM>* BDIPNEAMPGK)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MFEBGICPHCM>*))((::PBYTE)hIl2Cpp + HPLAINJPLCB__CTOR_1_OFFSET))(this, BDIPNEAMPGK);
	}

	::System::Void _ctor_2(::System::Type* LDHJMMADDDD, ::System::String* GDBANLBHNJK, ::System::String* DNFNKBNBJHM, ::HPLAINJPLCB_FCFFPFBELMK OBNIAHNMHPF, ::Il2CppArray<::MFEBGICPHCM>* HDCPIIIMHNF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::String*, ::HPLAINJPLCB_FCFFPFBELMK, ::Il2CppArray<::MFEBGICPHCM>*))((::PBYTE)hIl2Cpp + HPLAINJPLCB__CTOR_2_OFFSET))(this, LDHJMMADDDD, GDBANLBHNJK, DNFNKBNBJHM, OBNIAHNMHPF, HDCPIIIMHNF);
	}
};
