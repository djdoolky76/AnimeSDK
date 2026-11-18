#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigCounterstroke; }

#define OEGDAJGEFGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77B3E0)

inline static constexpr unsigned int OEGDAJGEFGC_TypeDefinitionIndex = 87445;

class OEGDAJGEFGC : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10
	::MoleMole::Config::ConfigCounterstroke* GCPMFMLDHAA; // 0x18
	::System::Single JCBOLEEPDIP; // 0x20
	::System::Single CGJCCNDBMIJ; // 0x24
	::System::Boolean EIGIJDJAIID; // 0x28
	::System::Boolean LJAOEFFJAGH; // 0x29
	::System::Boolean IKBAMAHMHJL; // 0x2A
	::System::Boolean INFMCLFKCEH; // 0x2B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGDAJGEFGC__CTOR_OFFSET))(this);
	}
};
