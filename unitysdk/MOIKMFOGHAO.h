#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define MOIKMFOGHAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA30)

inline static constexpr unsigned int MOIKMFOGHAO_TypeDefinitionIndex = 57819;

	struct alignas(8) MOIKMFOGHAO
	{
		::System::String* BFDAADMGNFD; // 0x10
		::System::String* ICEPLFPKAHC; // 0x18
		::Il2CppArray<::System::String*>* FCIHHDHMFFN; // 0x20
		::Il2CppArray<::System::String*>* CBMHCNHBOGM; // 0x28
		/*
		::System::Boolean Equals(::MOIKMFOGHAO a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOIKMFOGHAO))((::PBYTE)hIl2Cpp + MOIKMFOGHAO_EQUALS_OFFSET))(this, a1);
		}
		*/

	};
