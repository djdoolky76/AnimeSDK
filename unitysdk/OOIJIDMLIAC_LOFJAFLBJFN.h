#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define OOIJIDMLIAC_LOFJAFLBJFN_KJNFIPBKFAP_OFFSET UNITYSDK_OFFSET(0x15FF6770)
#define OOIJIDMLIAC_LOFJAFLBJFN__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF6760)

inline static constexpr unsigned int OOIJIDMLIAC_LOFJAFLBJFN_TypeDefinitionIndex = 70889;

class OOIJIDMLIAC_LOFJAFLBJFN : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10
	::System::Int32 GLPGONDHMLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_LOFJAFLBJFN__CTOR_OFFSET))(this);
	}

	::System::Boolean KJNFIPBKFAP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_LOFJAFLBJFN_KJNFIPBKFAP_OFFSET))(this);
	}
};
