#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DKMEFNANLDK;
namespace MoleMole { class UIHackInteractPointChildWindowController; }

#define DKMEFNANLDK_PEELLGABEIM_CDHFLODEEPK_OFFSET UNITYSDK_OFFSET(0x19D6E670)
#define DKMEFNANLDK_PEELLGABEIM__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6E660)

inline static constexpr unsigned int DKMEFNANLDK_PEELLGABEIM_TypeDefinitionIndex = 89123;

class DKMEFNANLDK_PEELLGABEIM : public ::System::Object
{
public:
	::MoleMole::UIHackInteractPointChildWindowController* NCIMBHDKIJM; // 0x10
	::DKMEFNANLDK* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMEFNANLDK_PEELLGABEIM__CTOR_OFFSET))(this);
	}

	::System::Void CDHFLODEEPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMEFNANLDK_PEELLGABEIM_CDHFLODEEPK_OFFSET))(this);
	}
};
