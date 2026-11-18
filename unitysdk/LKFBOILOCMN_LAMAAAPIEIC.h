#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace MoleMole::Battle { class Entity; }

#define LKFBOILOCMN_LAMAAAPIEIC_NHILCDHILLP_OFFSET UNITYSDK_OFFSET(0x158F3D50)
#define LKFBOILOCMN_LAMAAAPIEIC__CTOR_OFFSET UNITYSDK_OFFSET(0x158F3D40)

inline static constexpr unsigned int LKFBOILOCMN_LAMAAAPIEIC_TypeDefinitionIndex = 82635;

class LKFBOILOCMN_LAMAAAPIEIC : public ::System::Object
{
public:
	::System::Int32 POLJNJKGNJJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBOILOCMN_LAMAAAPIEIC__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle NHILCDHILLP(::MoleMole::Battle::Entity* BDHOILPIGKB)
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_LAMAAAPIEIC_NHILCDHILLP_OFFSET))(this, BDHOILPIGKB);
	}
};
