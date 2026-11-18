#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN_NJFKDLBPJGP;
namespace System { class Action; }

#define EKGAHGCJOAN_PAEPBEIHJHP_NBCIADGLEPK_OFFSET UNITYSDK_OFFSET(0x154B7980)
#define EKGAHGCJOAN_PAEPBEIHJHP_NNFEPLFCEFP_OFFSET UNITYSDK_OFFSET(0x154B79B0)
#define EKGAHGCJOAN_PAEPBEIHJHP__CTOR_OFFSET UNITYSDK_OFFSET(0x154B7970)

inline static constexpr unsigned int EKGAHGCJOAN_PAEPBEIHJHP_TypeDefinitionIndex = 51245;

class EKGAHGCJOAN_PAEPBEIHJHP : public ::System::Object
{
public:
	::EKGAHGCJOAN_NJFKDLBPJGP* FGBNBFHOKAA; // 0x10
	::System::Action* KAKAEMACNPB; // 0x18
	::System::Int32 ABHBKFJKINO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_PAEPBEIHJHP__CTOR_OFFSET))(this);
	}

	::System::Void NBCIADGLEPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_PAEPBEIHJHP_NBCIADGLEPK_OFFSET))(this);
	}

	::System::Void NNFEPLFCEFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_PAEPBEIHJHP_NNFEPLFCEFP_OFFSET))(this);
	}
};
