#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define ABAMIGEEBOI_OMJIICCENLJ_BFOJKLIEDPC_OFFSET UNITYSDK_OFFSET(0x181E4450)
#define ABAMIGEEBOI_OMJIICCENLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x181E4440)

inline static constexpr unsigned int ABAMIGEEBOI_OMJIICCENLJ_TypeDefinitionIndex = 39929;

class ABAMIGEEBOI_OMJIICCENLJ : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMIGEEBOI_OMJIICCENLJ__CTOR_OFFSET))(this);
	}

	::System::Void BFOJKLIEDPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMIGEEBOI_OMJIICCENLJ_BFOJKLIEDPC_OFFSET))(this);
	}
};
