#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NeoGoldenMechaModuleContext; }

#define EAOFKPCDAFB_OPKOIMNHPIM_INMJJPJGJCP_OFFSET UNITYSDK_OFFSET(0x135378B0)
#define EAOFKPCDAFB_OPKOIMNHPIM__CTOR_OFFSET UNITYSDK_OFFSET(0x135378A0)

inline static constexpr unsigned int EAOFKPCDAFB_OPKOIMNHPIM_TypeDefinitionIndex = 75977;

class EAOFKPCDAFB_OPKOIMNHPIM : public ::System::Object
{
public:
	::MoleMole::NeoGoldenMechaModuleContext* AAOCANGHBDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOFKPCDAFB_OPKOIMNHPIM__CTOR_OFFSET))(this);
	}

	::System::Void INMJJPJGJCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOFKPCDAFB_OPKOIMNHPIM_INMJJPJGJCP_OFFSET))(this);
	}
};
