#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace System { class Type; }

#define NPJKDMFBDFG_IOINPFBOICM_CTOR_OFFSET UNITYSDK_OFFSET(0x10400)

inline static constexpr unsigned int NPJKDMFBDFG_IOINPFBOICM_TypeDefinitionIndex = 49428;

	struct alignas(8) NPJKDMFBDFG_IOINPFBOICM
	{
		::System::String* DJNKMHHLKHM; // 0x10
		::System::Type* MPDOMNOHGJK; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG_IOINPFBOICM_CTOR_OFFSET))(this, a1, a2);
		}

	};
