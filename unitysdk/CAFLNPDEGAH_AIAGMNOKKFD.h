#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigWanderMove; }
namespace System { class Action; }

#define CAFLNPDEGAH_AIAGMNOKKFD_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1399A460)
#define CAFLNPDEGAH_AIAGMNOKKFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1399A450)

inline static constexpr unsigned int CAFLNPDEGAH_AIAGMNOKKFD_TypeDefinitionIndex = 43759;

class CAFLNPDEGAH_AIAGMNOKKFD : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFLNPDEGAH_AIAGMNOKKFD__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigWanderMove* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigWanderMove*))((::PBYTE)hIl2Cpp + CAFLNPDEGAH_AIAGMNOKKFD_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
