#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define HAKPNJGJHGG_GIBDNAJAGPH_OFFSET UNITYSDK_OFFSET(0x19DEC550)
#define HAKPNJGJHGG_OBMCNOKHCKF_OFFSET UNITYSDK_OFFSET(0x19DEBFE0)

inline static constexpr unsigned int HAKPNJGJHGG_TypeDefinitionIndex = 44917;

class HAKPNJGJHGG : public ::System::Object
{
public:
	static ::System::Void OBMCNOKHCKF(::MoleMole::EntityHandle NBEGLMMLNCL)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + HAKPNJGJHGG_OBMCNOKHCKF_OFFSET))(NBEGLMMLNCL);
	}

	static ::System::Void GIBDNAJAGPH(::MoleMole::EntityHandle NBEGLMMLNCL)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + HAKPNJGJHGG_GIBDNAJAGPH_OFFSET))(NBEGLMMLNCL);
	}
};
