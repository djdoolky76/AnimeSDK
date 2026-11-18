#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NewConfigUICommon; }
namespace System { class Action; }

#define KAHAIFPJBOO_FAKMPIGLAEC_MBMHEDILGEH_OFFSET UNITYSDK_OFFSET(0x130A7400)
#define KAHAIFPJBOO_FAKMPIGLAEC__CTOR_OFFSET UNITYSDK_OFFSET(0x130A73F0)

inline static constexpr unsigned int KAHAIFPJBOO_FAKMPIGLAEC_TypeDefinitionIndex = 54424;

class KAHAIFPJBOO_FAKMPIGLAEC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Boolean EBAJLMBGMFE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_FAKMPIGLAEC__CTOR_OFFSET))(this);
	}

	::System::Void MBMHEDILGEH(::MoleMole::NewConfigUICommon* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NewConfigUICommon*))((::PBYTE)hIl2Cpp + KAHAIFPJBOO_FAKMPIGLAEC_MBMHEDILGEH_OFFSET))(this, DFMKILICPFB);
	}
};
