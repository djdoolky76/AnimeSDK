#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHAIBHJAFEP.h"

namespace System { class Action; }

#define OIEGPBKMEHF_CBJAEOKBGBE_OFFSET UNITYSDK_OFFSET(0x13A63880)
#define OIEGPBKMEHF_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x13A63780)
#define OIEGPBKMEHF_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x13A637F0)
#define OIEGPBKMEHF_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x13A63700)
#define OIEGPBKMEHF__CTOR_OFFSET UNITYSDK_OFFSET(0x13A636E0)

inline static constexpr unsigned int OIEGPBKMEHF_TypeDefinitionIndex = 65716;

class OIEGPBKMEHF : public ::KHAIBHJAFEP
{
public:
	::System::Action* GPGNNLHONGF; // 0x38

	::System::Void _ctor(::System::Double EODDDEDPMHA, ::System::Action* NPINCGGJBLC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Action*))((::PBYTE)hIl2Cpp + OIEGPBKMEHF__CTOR_OFFSET))(this, EODDDEDPMHA, NPINCGGJBLC);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEGPBKMEHF_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEGPBKMEHF_CHCGMACMJLD_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEGPBKMEHF_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void CBJAEOKBGBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEGPBKMEHF_CBJAEOKBGBE_OFFSET))(this);
	}
};
