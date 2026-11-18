#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define DPKPBHFIOHK_ELFNIPPEIJJ_BNHIDAPEHNL_OFFSET UNITYSDK_OFFSET(0x134910C0)
#define DPKPBHFIOHK_ELFNIPPEIJJ_MAKNEHPPFFN_OFFSET UNITYSDK_OFFSET(0x13491020)
#define DPKPBHFIOHK_ELFNIPPEIJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13491010)

inline static constexpr unsigned int DPKPBHFIOHK_ELFNIPPEIJJ_TypeDefinitionIndex = 83993;

class DPKPBHFIOHK_ELFNIPPEIJJ : public ::System::Object
{
public:
	::HOCDHMEPPEG PHHDHIBOCKA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPBHFIOHK_ELFNIPPEIJJ__CTOR_OFFSET))(this);
	}

	::System::Void MAKNEHPPFFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPBHFIOHK_ELFNIPPEIJJ_MAKNEHPPFFN_OFFSET))(this);
	}

	::System::Void BNHIDAPEHNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPBHFIOHK_ELFNIPPEIJJ_BNHIDAPEHNL_OFFSET))(this);
	}
};
