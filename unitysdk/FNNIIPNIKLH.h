#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCEPCPEOECP.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/DAPBHMCJOFI.h"

class KGBFLHNJHHN;

#define FNNIIPNIKLH_EDLKAFMCIGL_OFFSET UNITYSDK_OFFSET(0x15A7ACD0)
#define FNNIIPNIKLH__CTOR_OFFSET UNITYSDK_OFFSET(0x15A7A400)

inline static constexpr unsigned int FNNIIPNIKLH_TypeDefinitionIndex = 13318;

class FNNIIPNIKLH : public ::BCEPCPEOECP
{
public:
	::Foundation::Unreal::FGameplayTagContainer KOHLGOPLCMB; // 0x88
	::Foundation::Unreal::FGameplayTagContainer CLPFIGBILKN; // 0xF8

	::System::Void _ctor(::DAPBHMCJOFI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DAPBHMCJOFI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FNNIIPNIKLH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 EDLKAFMCIGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNIIPNIKLH_EDLKAFMCIGL_OFFSET))(this);
	}
};
