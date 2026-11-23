#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FF9C85F2E2C75B4F.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class AA3F2CEA662828A3;
namespace System { class String; }
namespace System::Collections { class E6C6EEEB155967C0; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEF94FC389F3E889_E0927187AC77B77B_OFFSET UNITYSDK_OFFSET(0x3EA8440)
#define EEF94FC389F3E889__CTOR_OFFSET UNITYSDK_OFFSET(0x3EA84A0)

inline static constexpr unsigned int EEF94FC389F3E889_TypeDefinitionIndex = 15006;

class EEF94FC389F3E889 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* ECCF219385BF9AB1; // 0x10
	::Il2CppArray<::System::String*>* EDC172BE70B91A59; // 0x18
	::System::Int32 A28B6B4EF4D0835D; // 0x20
	::System::Byte _padding0[0x4];
	::System::Collections::E6C6EEEB155967C0* AA5B2E260AA88D24; // 0x28
	::System::Int32 BD795B4CF4BBE63F; // 0x30
	::System::Byte _padding1[0x4];
	::System::Nullable_1<::FF9C85F2E2C75B4F> F2FDC04F64F3321C; // 0x38
	::System::Byte _padding2[0x10];
	::AA3F2CEA662828A3* F6844B8BD8DE092E; // 0x50
	::System::Int32 A5DD0B89AB59397A; // 0x58
	::System::Boolean A93F8F9AFC0F7FBD; // 0x5C

	static ::System::Boolean E0927187AC77B77B(::System::Int32 B12CB8B42EF5427D)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + EEF94FC389F3E889_E0927187AC77B77B_OFFSET))(B12CB8B42EF5427D);
	}

	::System::Void _ctor(::Il2CppArray<::System::Int32>* ED4C427056768236, ::System::Collections::Generic::List_1<::System::String*>* FCF0DF4B16267722, ::System::Int32 A96E6A43CB044B0B, ::System::Collections::E6C6EEEB155967C0* BD8B09E824741283, ::System::Int32 EFC2889A2DE7C3EE, ::AA3F2CEA662828A3* BEBE4A4DD0DBC507, ::System::Nullable_1<::FF9C85F2E2C75B4F> A996C371A65FE9B7, ::System::Int32 F22A85195CA08D5A, ::System::Boolean E2971D06496D0B52)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Collections::E6C6EEEB155967C0*, ::System::Int32, ::AA3F2CEA662828A3*, ::System::Nullable_1<::FF9C85F2E2C75B4F>, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EEF94FC389F3E889__CTOR_OFFSET))(this, ED4C427056768236, FCF0DF4B16267722, A96E6A43CB044B0B, BD8B09E824741283, EFC2889A2DE7C3EE, BEBE4A4DD0DBC507, A996C371A65FE9B7, F22A85195CA08D5A, E2971D06496D0B52);
	}
};
