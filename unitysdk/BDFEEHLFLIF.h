#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BDFEEHLFLIF_AOFIEOJBOCM_OFFSET UNITYSDK_OFFSET(0x1CE86390)
#define BDFEEHLFLIF_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1CE85FD0)
#define BDFEEHLFLIF_LMPJLKKLNPI_OFFSET UNITYSDK_OFFSET(0x1CE86350)
#define BDFEEHLFLIF_NLACJCEDDCI_OFFSET UNITYSDK_OFFSET(0x1CE85E60)

inline static constexpr unsigned int BDFEEHLFLIF_TypeDefinitionIndex = 34740;

class BDFEEHLFLIF : public ::System::Object
{
public:
	static ::System::Void NLACJCEDDCI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDFEEHLFLIF_NLACJCEDDCI_OFFSET))();
	}

	static ::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDFEEHLFLIF_BJANDJKKNCD_OFFSET))();
	}

	static ::System::String* LMPJLKKLNPI(::System::String* HIAIKHDFCLN)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BDFEEHLFLIF_LMPJLKKLNPI_OFFSET))(HIAIKHDFCLN);
	}

	static ::System::Void AOFIEOJBOCM(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BDFEEHLFLIF_AOFIEOJBOCM_OFFSET))(HIAIKHDFCLN);
	}
};
