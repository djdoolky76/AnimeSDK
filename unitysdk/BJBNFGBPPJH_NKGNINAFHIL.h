#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define BJBNFGBPPJH_NKGNINAFHIL__CTOR_OFFSET UNITYSDK_OFFSET(0x14254010)

inline static constexpr unsigned int BJBNFGBPPJH_NKGNINAFHIL_TypeDefinitionIndex = 46915;

class BJBNFGBPPJH_NKGNINAFHIL : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10
	::System::Action* PABLEDCGDGM; // 0x18
	::System::Int32 CCKGEOKCJMA; // 0x20
	::System::UInt32 NJNCGJLHLKC; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBNFGBPPJH_NKGNINAFHIL__CTOR_OFFSET))(this);
	}
};
