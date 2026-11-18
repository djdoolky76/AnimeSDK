#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CampTypeConfig; }
namespace System { class Action; }

#define EIOLOAIPOFB_CDEBAOJOABB_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x14A9D9D0)
#define EIOLOAIPOFB_CDEBAOJOABB__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9D9C0)

inline static constexpr unsigned int EIOLOAIPOFB_CDEBAOJOABB_TypeDefinitionIndex = 51059;

class EIOLOAIPOFB_CDEBAOJOABB : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_CDEBAOJOABB__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::CampTypeConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CampTypeConfig*))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_CDEBAOJOABB_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
