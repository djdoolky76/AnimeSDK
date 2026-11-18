#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define ABAMIGEEBOI_LENPLELNMOG_CGINGGDJLIC_OFFSET UNITYSDK_OFFSET(0x144B34B0)
#define ABAMIGEEBOI_LENPLELNMOG__CTOR_OFFSET UNITYSDK_OFFSET(0x144B34A0)

inline static constexpr unsigned int ABAMIGEEBOI_LENPLELNMOG_TypeDefinitionIndex = 39930;

class ABAMIGEEBOI_LENPLELNMOG : public ::System::Object
{
public:
	::System::Int32 MPKKKJFNLIJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMIGEEBOI_LENPLELNMOG__CTOR_OFFSET))(this);
	}

	::System::Void CGINGGDJLIC(::MoleMole::Battle::Entity* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ABAMIGEEBOI_LENPLELNMOG_CGINGGDJLIC_OFFSET))(this, NFFNEFLKPDG);
	}
};
