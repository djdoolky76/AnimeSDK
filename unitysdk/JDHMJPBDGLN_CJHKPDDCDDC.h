#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define JDHMJPBDGLN_CJHKPDDCDDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1659C830)

inline static constexpr unsigned int JDHMJPBDGLN_CJHKPDDCDDC_TypeDefinitionIndex = 83957;

class JDHMJPBDGLN_CJHKPDDCDDC : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_CJHKPDDCDDC__CTOR_OFFSET))(this);
	}
};
