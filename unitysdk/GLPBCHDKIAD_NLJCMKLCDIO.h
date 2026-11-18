#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define GLPBCHDKIAD_NLJCMKLCDIO_MAJDACLKEJA_OFFSET UNITYSDK_OFFSET(0x10F08D00)
#define GLPBCHDKIAD_NLJCMKLCDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x10F08CF0)

inline static constexpr unsigned int GLPBCHDKIAD_NLJCMKLCDIO_TypeDefinitionIndex = 91794;

class GLPBCHDKIAD_NLJCMKLCDIO : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* HIEILMHOMMJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_NLJCMKLCDIO__CTOR_OFFSET))(this);
	}

	::System::Void MAJDACLKEJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_NLJCMKLCDIO_MAJDACLKEJA_OFFSET))(this);
	}
};
