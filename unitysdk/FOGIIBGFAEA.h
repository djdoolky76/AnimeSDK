#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAILBJHHMLN.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define FOGIIBGFAEA_DGIKBEPDNKJ_OFFSET UNITYSDK_OFFSET(0x3B9490)
#define FOGIIBGFAEA_JEJMGCNBMAD_OFFSET UNITYSDK_OFFSET(0x75FF80)
#define FOGIIBGFAEA__CTOR_OFFSET UNITYSDK_OFFSET(0x3CBCA0)

inline static constexpr unsigned int FOGIIBGFAEA_TypeDefinitionIndex = 44895;

struct alignas(8) FOGIIBGFAEA
{
	::MoleMole::Battle::Entity* LEOKEOFNDLH; // 0x10
	::MAILBJHHMLN FEMHHGAMLGL; // 0x18

	::System::Void _ctor(::MAILBJHHMLN FCPCLIJNDLA, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MAILBJHHMLN, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FOGIIBGFAEA__CTOR_OFFSET))(this, FCPCLIJNDLA, KECKGDFIALJ);
	}

	::System::Double JEJMGCNBMAD(::System::Double BEKLCLFIDKF, ::System::Double MDPPNMIPDMP)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOGIIBGFAEA_JEJMGCNBMAD_OFFSET))(this, BEKLCLFIDKF, MDPPNMIPDMP);
	}

	::System::Boolean DGIKBEPDNKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOGIIBGFAEA_DGIKBEPDNKJ_OFFSET))(this);
	}
};
