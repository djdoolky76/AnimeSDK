#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CharacterCommonDatas; }
namespace System { class Action; }

#define EBNJMKJHEHB_JFJKDIEEPAD_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x17222390)
#define EBNJMKJHEHB_JFJKDIEEPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x17222380)

inline static constexpr unsigned int EBNJMKJHEHB_JFJKDIEEPAD_TypeDefinitionIndex = 81981;

class EBNJMKJHEHB_JFJKDIEEPAD : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNJMKJHEHB_JFJKDIEEPAD__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::CharacterCommonDatas* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterCommonDatas*))((::PBYTE)hIl2Cpp + EBNJMKJHEHB_JFJKDIEEPAD_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
