#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMFOGJPOHGJ.h"
namespace System { class String; }

#define EEDKGBHGAPN_EMFHJDICJKL_OFFSET UNITYSDK_OFFSET(0x13A29F40)
#define EEDKGBHGAPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2C466B0)

inline static constexpr unsigned int EEDKGBHGAPN_TypeDefinitionIndex = 67176;

	struct alignas(4) EEDKGBHGAPN
	{
		::MMFOGJPOHGJ GMPGDEINODK; // 0x10
		::System::Byte _padding0[0x4];
		::System::UInt64 PHFMCACHFIJ; // 0x18
		/*
		static ::EEDKGBHGAPN EMFHJDICJKL(::MMFOGJPOHGJ a1, ::System::UInt64 a2)
		{
			return ((::EEDKGBHGAPN(*)(::MMFOGJPOHGJ, ::System::UInt64))((::PBYTE)hIl2Cpp + EEDKGBHGAPN_EMFHJDICJKL_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDKGBHGAPN_TOSTRING_OFFSET))(this);
		}

	};
