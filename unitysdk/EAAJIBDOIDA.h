#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define EAAJIBDOIDA_EHONLINDHPM_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EAAJIBDOIDA_EJIAGAKCHJG_OFFSET UNITYSDK_OFFSET(0x358B00)
#define EAAJIBDOIDA_OJMABHKNMNJ_OFFSET UNITYSDK_OFFSET(0x282350)
#define EAAJIBDOIDA_PFFMCBLNEEM_OFFSET UNITYSDK_OFFSET(0x388A60)
#define EAAJIBDOIDA__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int EAAJIBDOIDA_TypeDefinitionIndex = 76972;

struct alignas(8) EAAJIBDOIDA
{
	::System::String* _DFJEFCNNDCJ_k__BackingField; // 0x10
	::System::String* _BLBDKIHPGJC_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* MCOHLHMKLIP, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EAAJIBDOIDA__CTOR_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}

	::System::String* EHONLINDHPM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAJIBDOIDA_EHONLINDHPM_OFFSET))(this);
	}

	::System::Void EJIAGAKCHJG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EAAJIBDOIDA_EJIAGAKCHJG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PFFMCBLNEEM(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EAAJIBDOIDA_PFFMCBLNEEM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* OJMABHKNMNJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAJIBDOIDA_OJMABHKNMNJ_OFFSET))(this);
	}
};
