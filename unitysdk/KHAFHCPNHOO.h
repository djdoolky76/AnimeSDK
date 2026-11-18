#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPageCamera; }
namespace MoleMole::Config { class ConfigUICameraStretch; }

#define KHAFHCPNHOO__CTOR_OFFSET UNITYSDK_OFFSET(0x157EC220)

inline static constexpr unsigned int KHAFHCPNHOO_TypeDefinitionIndex = 42138;

class KHAFHCPNHOO : public ::System::Object
{
public:
	::MoleMole::Config::ConfigPageCamera* JMCPNDGFAIG; // 0x10
	::MoleMole::Config::ConfigUICameraStretch* HEIJHCCPCJJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAFHCPNHOO__CTOR_OFFSET))(this);
	}
};
