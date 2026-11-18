#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

namespace System { class EventArgs; }

#define IEGGJLOJJOH_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0xF83B5E0)
#define IEGGJLOJJOH_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0xF83B7B0)
#define IEGGJLOJJOH_KIDCHDKHNBF_OFFSET UNITYSDK_OFFSET(0xF83B840)
#define IEGGJLOJJOH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF83B390)
#define IEGGJLOJJOH__CTOR_OFFSET UNITYSDK_OFFSET(0xF83B770)

inline static constexpr unsigned int IEGGJLOJJOH_TypeDefinitionIndex = 89385;

class IEGGJLOJJOH : public ::BBKFNNHAKBP
{
public:
	::System::Int32 AALEADBBKJC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGGJLOJJOH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGGJLOJJOH_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGGJLOJJOH_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGGJLOJJOH_KHAEIOINMBG_OFFSET))(this);
	}

	::System::Void KIDCHDKHNBF(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + IEGGJLOJJOH_KIDCHDKHNBF_OFFSET))(this, KOIBHLHLMFC);
	}
};
