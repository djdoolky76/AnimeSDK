#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define DJIOAKLGDFL_AABHAMFLFKB_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x1A1E60C0)
#define DJIOAKLGDFL_AABHAMFLFKB_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1A1E6160)
#define DJIOAKLGDFL_AABHAMFLFKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E60B0)

inline static constexpr unsigned int DJIOAKLGDFL_AABHAMFLFKB_TypeDefinitionIndex = 57638;

class DJIOAKLGDFL_AABHAMFLFKB : public ::System::Object
{
public:
	::HOCDHMEPPEG AJHFDMLOGIF; // 0x10
	::HOCDHMEPPEG DOHGKLMAIJA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIOAKLGDFL_AABHAMFLFKB__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIOAKLGDFL_AABHAMFLFKB_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIOAKLGDFL_AABHAMFLFKB_LIDNPLMPHAL_OFFSET))(this);
	}
};
