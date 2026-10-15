#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define BCFDAHOHJEA_CPPOCCPECLA_CTOR_OFFSET UNITYSDK_OFFSET(0xF54D0)

inline static constexpr unsigned int BCFDAHOHJEA_CPPOCCPECLA_TypeDefinitionIndex = 71492;

	struct alignas(8) BCFDAHOHJEA_CPPOCCPECLA
	{
		::System::String* CONHLPHNAEL; // 0x10
		::System::String* PDHDEILGBDE; // 0x18
		::System::String* NLIOBBILCJO; // 0x20
		::System::String* MONJFLAKAIK; // 0x28
		::System::String* NOFHFKNDBAO; // 0x30
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BCFDAHOHJEA_CPPOCCPECLA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
