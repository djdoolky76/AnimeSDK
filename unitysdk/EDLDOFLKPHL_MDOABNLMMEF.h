#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EDLDOFLKPHL_MDOABNLMMEF_KMAJAEDLBNF_OFFSET UNITYSDK_OFFSET(0x148CD8C0)
#define EDLDOFLKPHL_MDOABNLMMEF__CTOR_OFFSET UNITYSDK_OFFSET(0x148CD8B0)

inline static constexpr unsigned int EDLDOFLKPHL_MDOABNLMMEF_TypeDefinitionIndex = 61488;

class EDLDOFLKPHL_MDOABNLMMEF : public ::System::Object
{
public:
	::System::Action* KJEGEDODKCE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_MDOABNLMMEF__CTOR_OFFSET))(this);
	}

	::System::Void KMAJAEDLBNF(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EDLDOFLKPHL_MDOABNLMMEF_KMAJAEDLBNF_OFFSET))(this, PIIPCLCCOIG);
	}
};
