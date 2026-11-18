#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define AKCIIANEHII_OCNHAEGMCGF__CTOR_OFFSET UNITYSDK_OFFSET(0x12D01410)

inline static constexpr unsigned int AKCIIANEHII_OCNHAEGMCGF_TypeDefinitionIndex = 39584;

class AKCIIANEHII_OCNHAEGMCGF : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCIIANEHII_OCNHAEGMCGF__CTOR_OFFSET))(this);
	}
};
