#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FNLFLIJLBJP_FDEADGMNAJO;
namespace System { class Exception; }

#define FNLFLIJLBJP_BDDFPFBPACE_IPOPJGBIOKB_OFFSET UNITYSDK_OFFSET(0x1F7D2D20)
#define FNLFLIJLBJP_BDDFPFBPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7D2D10)

inline static constexpr unsigned int FNLFLIJLBJP_BDDFPFBPACE_TypeDefinitionIndex = 8367;

class FNLFLIJLBJP_BDDFPFBPACE : public ::System::Object
{
public:
	::FNLFLIJLBJP_FDEADGMNAJO* KGFKHBMEKBL; // 0x10
	::System::Boolean BBOHPCLNADH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLFLIJLBJP_BDDFPFBPACE__CTOR_OFFSET))(this);
	}

	::System::Void IPOPJGBIOKB(::System::Exception* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + FNLFLIJLBJP_BDDFPFBPACE_IPOPJGBIOKB_OFFSET))(this, BLLNHDIDKPA);
	}
};
