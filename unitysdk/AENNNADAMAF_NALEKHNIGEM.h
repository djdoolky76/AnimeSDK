#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DHGMDONDOHI;
namespace MoleMole::Battle { class Entity; }

#define AENNNADAMAF_NALEKHNIGEM_INPGAJEJJLJ_OFFSET UNITYSDK_OFFSET(0x135DB320)
#define AENNNADAMAF_NALEKHNIGEM__CTOR_OFFSET UNITYSDK_OFFSET(0x135DB310)

inline static constexpr unsigned int AENNNADAMAF_NALEKHNIGEM_TypeDefinitionIndex = 81991;

class AENNNADAMAF_NALEKHNIGEM : public ::System::Object
{
public:
	::DHGMDONDOHI* GBELIHABEDH; // 0x10
	::MoleMole::Battle::Entity* AMNIHACKELI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENNNADAMAF_NALEKHNIGEM__CTOR_OFFSET))(this);
	}

	::System::Void INPGAJEJJLJ(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AENNNADAMAF_NALEKHNIGEM_INPGAJEJJLJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
