#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace System { class String; }

#define DIFEEJPHMJC_AAKDEJLBJMN_OFFSET UNITYSDK_OFFSET(0x3C46860)
#define DIFEEJPHMJC_BBNJCKPKPDN_1_OFFSET UNITYSDK_OFFSET(0x1DD09B80)
#define DIFEEJPHMJC_BBNJCKPKPDN_2_OFFSET UNITYSDK_OFFSET(0x1DD09B90)
#define DIFEEJPHMJC_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1DD09B30)
#define DIFEEJPHMJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C46720)
#define DIFEEJPHMJC_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C46760)
#define DIFEEJPHMJC_CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C467B0)
#define DIFEEJPHMJC_CTOR_4_OFFSET UNITYSDK_OFFSET(0x3C46800)
#define DIFEEJPHMJC_CTOR_OFFSET UNITYSDK_OFFSET(0x3C466F0)
#define DIFEEJPHMJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C468A0)
#define DIFEEJPHMJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C469A0)
#define DIFEEJPHMJC_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0x2F2C1D0)
#define DIFEEJPHMJC_LKEFCMNJDJI_OFFSET UNITYSDK_OFFSET(0x2F2C1C0)
#define DIFEEJPHMJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C46A70)

inline static constexpr unsigned int DIFEEJPHMJC_TypeDefinitionIndex = 6553;

	struct alignas(8) DIFEEJPHMJC
	{
		::System::ReadOnlyMemory_1<::System::Char> INNIEFKCKBK; // 0x10
		::System::Void _ctor(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + DIFEEJPHMJC_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIFEEJPHMJC_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIFEEJPHMJC_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DIFEEJPHMJC_CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIFEEJPHMJC_CTOR_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 LKEFCMNJDJI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFEEJPHMJC_LKEFCMNJDJI_OFFSET))(this);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFEEJPHMJC_GNNPFBBMFLA_OFFSET))(this);
		}

		::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> AAKDEJLBJMN()
		{
			return ((::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFEEJPHMJC_AAKDEJLBJMN_OFFSET))(this);
		}

		/*
		static ::DIFEEJPHMJC BBNJCKPKPDN(::System::String* a1)
		{
			return ((::DIFEEJPHMJC(*)(::System::String*))((::PBYTE)hIl2Cpp + DIFEEJPHMJC_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::DIFEEJPHMJC BBNJCKPKPDN_1(::System::ReadOnlyMemory_1<::System::Char> a1)
		{
			return ((::DIFEEJPHMJC(*)(::System::ReadOnlyMemory_1<::System::Char>))((::PBYTE)hIl2Cpp + DIFEEJPHMJC_BBNJCKPKPDN_1_OFFSET))(a1);
		}
		*/

		/*
		static ::System::ReadOnlyMemory_1<::System::Char> BBNJCKPKPDN_2(::DIFEEJPHMJC a1)
		{
			return ((::System::ReadOnlyMemory_1<::System::Char>(*)(::DIFEEJPHMJC))((::PBYTE)hIl2Cpp + DIFEEJPHMJC_BBNJCKPKPDN_2_OFFSET))(a1);
		}
		*/

		/*
		::System::Boolean Equals(::DIFEEJPHMJC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIFEEJPHMJC))((::PBYTE)hIl2Cpp + DIFEEJPHMJC_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFEEJPHMJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFEEJPHMJC_TOSTRING_OFFSET))(this);
		}

	};
