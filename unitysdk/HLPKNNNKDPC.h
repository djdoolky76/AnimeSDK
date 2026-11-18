#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OHCKAJEAIBL.h"
#include "unitysdk/ALOACIEGMAI.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HLPKNNNKDPC_FFFNHAPNICI_OFFSET UNITYSDK_OFFSET(0x160FBD80)
#define HLPKNNNKDPC__CTOR_OFFSET UNITYSDK_OFFSET(0x160FBD70)

inline static constexpr unsigned int HLPKNNNKDPC_TypeDefinitionIndex = 16302;

class HLPKNNNKDPC : public ::OHCKAJEAIBL
{
public:
	::System::String* _PGLBANMBLCA_k__BackingField; // 0xE0
	::System::Int32 _LPNCKCHCNJD_k__BackingField; // 0xE8
	::System::Int32 _PMGPIPFEFLK_k__BackingField; // 0xEC

	::System::Void _ctor(::ALOACIEGMAI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ALOACIEGMAI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HLPKNNNKDPC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* FFFNHAPNICI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPKNNNKDPC_FFFNHAPNICI_OFFSET))(this);
	}
};
