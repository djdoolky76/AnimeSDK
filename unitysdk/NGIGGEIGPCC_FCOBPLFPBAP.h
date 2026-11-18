#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define NGIGGEIGPCC_FCOBPLFPBAP_IFJEMPLKNMA_OFFSET UNITYSDK_OFFSET(0x105B7120)
#define NGIGGEIGPCC_FCOBPLFPBAP__CTOR_OFFSET UNITYSDK_OFFSET(0x105B7110)

inline static constexpr unsigned int NGIGGEIGPCC_FCOBPLFPBAP_TypeDefinitionIndex = 38946;

class NGIGGEIGPCC_FCOBPLFPBAP : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* PNJNAAHKAIB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIGGEIGPCC_FCOBPLFPBAP__CTOR_OFFSET))(this);
	}

	::System::Void IFJEMPLKNMA(::MoleMole::Battle::Entity* BMPBKJJLEEI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NGIGGEIGPCC_FCOBPLFPBAP_IFJEMPLKNMA_OFFSET))(this, BMPBKJJLEEI);
	}
};
