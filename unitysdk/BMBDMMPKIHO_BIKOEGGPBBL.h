#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define BMBDMMPKIHO_BIKOEGGPBBL_NEENIBOPBCP_OFFSET UNITYSDK_OFFSET(0x128B1C30)
#define BMBDMMPKIHO_BIKOEGGPBBL__CTOR_OFFSET UNITYSDK_OFFSET(0x128B1C20)

inline static constexpr unsigned int BMBDMMPKIHO_BIKOEGGPBBL_TypeDefinitionIndex = 65326;

class BMBDMMPKIHO_BIKOEGGPBBL : public ::System::Object
{
public:
	::System::Action* KBNLJELHLHK; // 0x10
	::System::Int32 AAJAAIENOHK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_BIKOEGGPBBL__CTOR_OFFSET))(this);
	}

	::System::Void NEENIBOPBCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_BIKOEGGPBBL_NEENIBOPBCP_OFFSET))(this);
	}
};
