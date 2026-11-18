#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJPDGONFBFB;
namespace MoleMole { class MonoGamepadNavigatableList; }

#define APGJLBFNFMO__CTOR_OFFSET UNITYSDK_OFFSET(0x113CA270)

inline static constexpr unsigned int APGJLBFNFMO_TypeDefinitionIndex = 55677;

class APGJLBFNFMO : public ::System::Object
{
public:
	::JJPDGONFBFB* JMINOGAOFIL; // 0x10
	::MoleMole::MonoGamepadNavigatableList* MOOHFHCPOIE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGJLBFNFMO__CTOR_OFFSET))(this);
	}
};
