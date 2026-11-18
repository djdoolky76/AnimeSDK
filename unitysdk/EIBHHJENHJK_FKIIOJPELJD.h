#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MBHOGLGMFEM;
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }

#define EIBHHJENHJK_FKIIOJPELJD_CPFGHGPFBEM_OFFSET UNITYSDK_OFFSET(0x1063D0C0)
#define EIBHHJENHJK_FKIIOJPELJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1063D0B0)

inline static constexpr unsigned int EIBHHJENHJK_FKIIOJPELJD_TypeDefinitionIndex = 71898;

class EIBHHJENHJK_FKIIOJPELJD : public ::System::Object
{
public:
	::MoleMole::UIWindowController* BALNMOMGEFM; // 0x10
	::MBHOGLGMFEM* BMKJMCEMHKF; // 0x18
	::System::Action* MIGFDHONIFP; // 0x20
	::System::Action* CALJKDFFLMH; // 0x28
	::System::Int32 POOJDDDCAHJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_FKIIOJPELJD__CTOR_OFFSET))(this);
	}

	::System::Void CPFGHGPFBEM(::MoleMole::UIWindowController* DJNCALKEFCH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + EIBHHJENHJK_FKIIOJPELJD_CPFGHGPFBEM_OFFSET))(this, DJNCALKEFCH);
	}
};
