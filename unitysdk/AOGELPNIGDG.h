#pragma once
#include "unitysdk/unitysdk.h"

#define AOGELPNIGDG_CTOR_OFFSET UNITYSDK_OFFSET(0x304CB20)
#define AOGELPNIGDG_EEBFMFBOIHN_OFFSET UNITYSDK_OFFSET(0x16722140)
#define AOGELPNIGDG_NCGPGGFFFBN_OFFSET UNITYSDK_OFFSET(0x167221B0)

inline static constexpr unsigned int AOGELPNIGDG_TypeDefinitionIndex = 79886;

	struct alignas(4) AOGELPNIGDG
	{
		::System::Boolean PAGKOAEOLKA; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 JLFFDKIBBGP; // 0x14
		::System::Boolean ICFDOHLFODF; // 0x18
		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AOGELPNIGDG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		/*
		static ::AOGELPNIGDG EEBFMFBOIHN()
		{
			return ((::AOGELPNIGDG(*)())((::PBYTE)hIl2Cpp + AOGELPNIGDG_EEBFMFBOIHN_OFFSET))();
		}
		*/

		/*
		static ::AOGELPNIGDG NCGPGGFFFBN(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::AOGELPNIGDG(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AOGELPNIGDG_NCGPGGFFFBN_OFFSET))(a1, a2);
		}
		*/

	};
