#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FNLFLIJLBJP_BDDFPFBPACE;
namespace System { class Exception; }

#define FNLFLIJLBJP_GECNJFKAHLO_DJLJMCOGMND_OFFSET UNITYSDK_OFFSET(0x1DB023B0)
#define FNLFLIJLBJP_GECNJFKAHLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB023A0)

inline static constexpr unsigned int FNLFLIJLBJP_GECNJFKAHLO_TypeDefinitionIndex = 8364;

class FNLFLIJLBJP_GECNJFKAHLO : public ::System::Object
{
public:
	::System::Exception* BLLNHDIDKPA; // 0x10
	::FNLFLIJLBJP_BDDFPFBPACE* MFOCAFMBBGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLFLIJLBJP_GECNJFKAHLO__CTOR_OFFSET))(this);
	}

	::System::Void DJLJMCOGMND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLFLIJLBJP_GECNJFKAHLO_DJLJMCOGMND_OFFSET))(this);
	}
};
