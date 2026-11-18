#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class MOELDGPPDPM;
namespace MoleMole::Battle { class Entity; }

#define COODFLCFEIB_PFJEJJHJOEB_OFFSET UNITYSDK_OFFSET(0x7015D0)

inline static constexpr unsigned int COODFLCFEIB_TypeDefinitionIndex = 85333;

struct alignas(8) COODFLCFEIB
{
	::MOELDGPPDPM* ENFNDMMNHDL; // 0x10
	::MoleMole::Battle::Entity* BFDPPMDEOFF; // 0x18

	::System::Void PFJEJJHJOEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COODFLCFEIB_PFJEJJHJOEB_OFFSET))(this);
	}
};
