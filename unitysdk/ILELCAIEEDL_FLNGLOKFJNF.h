#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIFont; }
namespace System { class Action; }

#define ILELCAIEEDL_FLNGLOKFJNF_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x19881350)
#define ILELCAIEEDL_FLNGLOKFJNF__CTOR_OFFSET UNITYSDK_OFFSET(0x19881340)

inline static constexpr unsigned int ILELCAIEEDL_FLNGLOKFJNF_TypeDefinitionIndex = 48048;

class ILELCAIEEDL_FLNGLOKFJNF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILELCAIEEDL_FLNGLOKFJNF__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigUIFont* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIFont*))((::PBYTE)hIl2Cpp + ILELCAIEEDL_FLNGLOKFJNF_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
