#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class KFGCLOPEGJO_HKFNAAPGIJK;
namespace System { class String; }
template <typename T> class BFMLEHMAGAK_1;

#define KFGCLOPEGJO_KGNDHMADCHK_KEEKPFNONCJ_OFFSET UNITYSDK_OFFSET(0x1A2C5B10)
#define KFGCLOPEGJO_KGNDHMADCHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C5B00)

inline static constexpr unsigned int KFGCLOPEGJO_KGNDHMADCHK_TypeDefinitionIndex = 78937;

class KFGCLOPEGJO_KGNDHMADCHK : public ::System::Object
{
public:
	::BFMLEHMAGAK_1<::System::String*>* MECNIPBOBIE; // 0x10
	::KFGCLOPEGJO_HKFNAAPGIJK* MFOCAFMBBGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_KGNDHMADCHK__CTOR_OFFSET))(this);
	}

	::System::Void KEEKPFNONCJ(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_KGNDHMADCHK_KEEKPFNONCJ_OFFSET))(this, KOIBHLHLMFC);
	}
};
