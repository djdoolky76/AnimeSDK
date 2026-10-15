#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace System { class String; }

#define NLCFCMDGOFF_AAKDEJLBJMN_OFFSET UNITYSDK_OFFSET(0x3C4FD80)
#define NLCFCMDGOFF_BBNJCKPKPDN_1_OFFSET UNITYSDK_OFFSET(0x1EC3AB20)
#define NLCFCMDGOFF_BBNJCKPKPDN_2_OFFSET UNITYSDK_OFFSET(0x1EC3AB80)
#define NLCFCMDGOFF_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1EC3AA90)
#define NLCFCMDGOFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C45FF0)
#define NLCFCMDGOFF_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C46030)
#define NLCFCMDGOFF_CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C46080)
#define NLCFCMDGOFF_CTOR_4_OFFSET UNITYSDK_OFFSET(0x3C460D0)
#define NLCFCMDGOFF_CTOR_OFFSET UNITYSDK_OFFSET(0x3C45FC0)
#define NLCFCMDGOFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C4FDF0)
#define NLCFCMDGOFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C4FE10)
#define NLCFCMDGOFF_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0x3C4FD30)
#define NLCFCMDGOFF_LKEFCMNJDJI_OFFSET UNITYSDK_OFFSET(0x3C4FCE0)
#define NLCFCMDGOFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4FE20)

	struct alignas(8) NLCFCMDGOFF
	{
		::System::ReadOnlyMemory_1<::System::Char> INNIEFKCKBK; // 0x10
		::System::Void _ctor(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + NLCFCMDGOFF_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NLCFCMDGOFF_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NLCFCMDGOFF_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + NLCFCMDGOFF_CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NLCFCMDGOFF_CTOR_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 LKEFCMNJDJI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCFCMDGOFF_LKEFCMNJDJI_OFFSET))(this);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCFCMDGOFF_GNNPFBBMFLA_OFFSET))(this);
		}

		::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> AAKDEJLBJMN()
		{
			return ((::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCFCMDGOFF_AAKDEJLBJMN_OFFSET))(this);
		}

		/*
		static ::NLCFCMDGOFF BBNJCKPKPDN(::System::String* a1)
		{
			return ((::NLCFCMDGOFF(*)(::System::String*))((::PBYTE)hIl2Cpp + NLCFCMDGOFF_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::NLCFCMDGOFF BBNJCKPKPDN_1(::System::ReadOnlyMemory_1<::System::Char> a1)
		{
			return ((::NLCFCMDGOFF(*)(::System::ReadOnlyMemory_1<::System::Char>))((::PBYTE)hIl2Cpp + NLCFCMDGOFF_BBNJCKPKPDN_1_OFFSET))(a1);
		}
		*/

		/*
		static ::System::ReadOnlyMemory_1<::System::Char> BBNJCKPKPDN_2(::NLCFCMDGOFF a1)
		{
			return ((::System::ReadOnlyMemory_1<::System::Char>(*)(::NLCFCMDGOFF))((::PBYTE)hIl2Cpp + NLCFCMDGOFF_BBNJCKPKPDN_2_OFFSET))(a1);
		}
		*/

		/*
		::System::Boolean Equals(::NLCFCMDGOFF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLCFCMDGOFF))((::PBYTE)hIl2Cpp + NLCFCMDGOFF_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCFCMDGOFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCFCMDGOFF_TOSTRING_OFFSET))(this);
		}

	};
