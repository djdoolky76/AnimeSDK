#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN_FJGGFIBFDKD;
namespace System { class String; }

#define EKGAHGCJOAN_CFIHDCDLOPJ_IPFAODHGMHO_OFFSET UNITYSDK_OFFSET(0x14172050)
#define EKGAHGCJOAN_CFIHDCDLOPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14172040)

inline static constexpr unsigned int EKGAHGCJOAN_CFIHDCDLOPJ_TypeDefinitionIndex = 51192;

class EKGAHGCJOAN_CFIHDCDLOPJ : public ::System::Object
{
public:
	::EKGAHGCJOAN_FJGGFIBFDKD* FGBNBFHOKAA; // 0x10
	::System::String* NNKBHHLBAJG; // 0x18
	::System::Int32 AIPCPNEEOML; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CFIHDCDLOPJ__CTOR_OFFSET))(this);
	}

	::System::Void IPFAODHGMHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CFIHDCDLOPJ_IPFAODHGMHO_OFFSET))(this);
	}
};
