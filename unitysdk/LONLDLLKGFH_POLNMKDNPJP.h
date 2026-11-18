#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class PRDConfig; }
namespace System { class Action; }

#define LONLDLLKGFH_POLNMKDNPJP_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x14DCC7C0)
#define LONLDLLKGFH_POLNMKDNPJP__CTOR_OFFSET UNITYSDK_OFFSET(0x14DCC7B0)

inline static constexpr unsigned int LONLDLLKGFH_POLNMKDNPJP_TypeDefinitionIndex = 74966;

class LONLDLLKGFH_POLNMKDNPJP : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLDLLKGFH_POLNMKDNPJP__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::PRDConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PRDConfig*))((::PBYTE)hIl2Cpp + LONLDLLKGFH_POLNMKDNPJP_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
