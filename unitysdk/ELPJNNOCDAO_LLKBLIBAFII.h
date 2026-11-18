#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define ELPJNNOCDAO_LLKBLIBAFII_FDLNIEGEOLI_OFFSET UNITYSDK_OFFSET(0x15E32CE0)
#define ELPJNNOCDAO_LLKBLIBAFII__CTOR_OFFSET UNITYSDK_OFFSET(0x15E32CD0)

inline static constexpr unsigned int ELPJNNOCDAO_LLKBLIBAFII_TypeDefinitionIndex = 78783;

class ELPJNNOCDAO_LLKBLIBAFII : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_LLKBLIBAFII__CTOR_OFFSET))(this);
	}

	::System::Void FDLNIEGEOLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPJNNOCDAO_LLKBLIBAFII_FDLNIEGEOLI_OFFSET))(this);
	}
};
