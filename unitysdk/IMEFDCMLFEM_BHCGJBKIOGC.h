#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageSkinShow; }
namespace System { class Action; }

#define IMEFDCMLFEM_BHCGJBKIOGC_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x197DCBB0)
#define IMEFDCMLFEM_BHCGJBKIOGC__CTOR_OFFSET UNITYSDK_OFFSET(0x197DCBA0)

inline static constexpr unsigned int IMEFDCMLFEM_BHCGJBKIOGC_TypeDefinitionIndex = 47312;

class IMEFDCMLFEM_BHCGJBKIOGC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEFDCMLFEM_BHCGJBKIOGC__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigUIMainPageSkinShow* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainPageSkinShow*))((::PBYTE)hIl2Cpp + IMEFDCMLFEM_BHCGJBKIOGC_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
