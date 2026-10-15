#pragma once
#include "unitysdk/unitysdk.h"
class ODGPPIHLOFF;
namespace System { class String; }

#define MAJKFOCKHOH_IMPAEMDONPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C170)

inline static constexpr unsigned int MAJKFOCKHOH_IMPAEMDONPJ_TypeDefinitionIndex = 49212;

	struct alignas(8) MAJKFOCKHOH_IMPAEMDONPJ
	{
		::System::String* PEAABPACBEO; // 0x10
		::System::Void _ctor(::ODGPPIHLOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODGPPIHLOFF*))((::PBYTE)hIl2Cpp + MAJKFOCKHOH_IMPAEMDONPJ_CTOR_OFFSET))(this, a1);
		}

	};
