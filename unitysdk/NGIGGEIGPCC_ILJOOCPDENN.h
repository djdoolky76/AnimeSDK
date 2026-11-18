#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NGIGGEIGPCC_FCOBPLFPBAP;
namespace MoleMole::Battle { class Entity; }

#define NGIGGEIGPCC_ILJOOCPDENN_FONGLIBKPNO_OFFSET UNITYSDK_OFFSET(0x137569E0)
#define NGIGGEIGPCC_ILJOOCPDENN__CTOR_OFFSET UNITYSDK_OFFSET(0x137569D0)

inline static constexpr unsigned int NGIGGEIGPCC_ILJOOCPDENN_TypeDefinitionIndex = 38945;

class NGIGGEIGPCC_ILJOOCPDENN : public ::System::Object
{
public:
	::NGIGGEIGPCC_FCOBPLFPBAP* FGBNBFHOKAA; // 0x10
	::System::Boolean JNJLOKNBFLP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIGGEIGPCC_ILJOOCPDENN__CTOR_OFFSET))(this);
	}

	::System::Void FONGLIBKPNO(::MoleMole::Battle::Entity* BMPBKJJLEEI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NGIGGEIGPCC_ILJOOCPDENN_FONGLIBKPNO_OFFSET))(this, BMPBKJJLEEI);
	}
};
