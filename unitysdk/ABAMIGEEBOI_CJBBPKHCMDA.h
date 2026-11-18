#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define ABAMIGEEBOI_CJBBPKHCMDA_KAFIDLOEKAC_OFFSET UNITYSDK_OFFSET(0x12628040)
#define ABAMIGEEBOI_CJBBPKHCMDA__CTOR_OFFSET UNITYSDK_OFFSET(0x12628030)

inline static constexpr unsigned int ABAMIGEEBOI_CJBBPKHCMDA_TypeDefinitionIndex = 39928;

class ABAMIGEEBOI_CJBBPKHCMDA : public ::System::Object
{
public:
	::System::Int32 OLNAFBAENGH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMIGEEBOI_CJBBPKHCMDA__CTOR_OFFSET))(this);
	}

	::System::Void KAFIDLOEKAC(::MoleMole::Battle::Entity* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ABAMIGEEBOI_CJBBPKHCMDA_KAFIDLOEKAC_OFFSET))(this, NFFNEFLKPDG);
	}
};
