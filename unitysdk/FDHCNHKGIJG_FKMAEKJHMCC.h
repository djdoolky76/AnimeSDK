#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define FDHCNHKGIJG_FKMAEKJHMCC_IAENPHBFAIJ_OFFSET UNITYSDK_OFFSET(0x191B0700)
#define FDHCNHKGIJG_FKMAEKJHMCC__CTOR_OFFSET UNITYSDK_OFFSET(0x191B06F0)

inline static constexpr unsigned int FDHCNHKGIJG_FKMAEKJHMCC_TypeDefinitionIndex = 57230;

class FDHCNHKGIJG_FKMAEKJHMCC : public ::System::Object
{
public:
	::MoleMole::UIControllerContextBase* AAOCANGHBDG; // 0x10
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHCNHKGIJG_FKMAEKJHMCC__CTOR_OFFSET))(this);
	}

	::System::Void IAENPHBFAIJ(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FDHCNHKGIJG_FKMAEKJHMCC_IAENPHBFAIJ_OFFSET))(this, NAPFALLANDL);
	}
};
