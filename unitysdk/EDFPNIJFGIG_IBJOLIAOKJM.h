#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTargetValues; }
namespace System { class Action; }

#define EDFPNIJFGIG_IBJOLIAOKJM_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x14147260)
#define EDFPNIJFGIG_IBJOLIAOKJM__CTOR_OFFSET UNITYSDK_OFFSET(0x14147250)

inline static constexpr unsigned int EDFPNIJFGIG_IBJOLIAOKJM_TypeDefinitionIndex = 88793;

class EDFPNIJFGIG_IBJOLIAOKJM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFPNIJFGIG_IBJOLIAOKJM__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigTargetValues* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTargetValues*))((::PBYTE)hIl2Cpp + EDFPNIJFGIG_IBJOLIAOKJM_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
