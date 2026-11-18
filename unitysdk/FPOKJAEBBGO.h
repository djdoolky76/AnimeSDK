#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define FPOKJAEBBGO_BMDLEIHJDIA_OFFSET UNITYSDK_OFFSET(0x175104B0)
#define FPOKJAEBBGO_DJCLDEEEHAN_OFFSET UNITYSDK_OFFSET(0x175104C0)
#define FPOKJAEBBGO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17510490)
#define FPOKJAEBBGO__CTOR_OFFSET UNITYSDK_OFFSET(0x17510480)

inline static constexpr unsigned int FPOKJAEBBGO_TypeDefinitionIndex = 81886;

class FPOKJAEBBGO : public ::System::Object
{
public:
	::System::Nullable_1<::System::DateTime> _CEKBOBCBKPF_k__BackingField; // 0x10

	::System::Void _ctor(::System::Nullable_1<::System::DateTime> EGACDAKOALO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + FPOKJAEBBGO__CTOR_OFFSET))(this, EGACDAKOALO);
	}

	::System::Void _ctor_1(::FPOKJAEBBGO* NHGCEMDKADO)
	{
		return ((::System::Void(*)(::PVOID, ::FPOKJAEBBGO*))((::PBYTE)hIl2Cpp + FPOKJAEBBGO__CTOR_1_OFFSET))(this, NHGCEMDKADO);
	}

	::System::Nullable_1<::System::DateTime> BMDLEIHJDIA()
	{
		return ((::System::Nullable_1<::System::DateTime>(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOKJAEBBGO_BMDLEIHJDIA_OFFSET))(this);
	}

	::System::Void DJCLDEEEHAN(::System::Nullable_1<::System::DateTime> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + FPOKJAEBBGO_DJCLDEEEHAN_OFFSET))(this, EGEGIMGMJHN);
	}
};
