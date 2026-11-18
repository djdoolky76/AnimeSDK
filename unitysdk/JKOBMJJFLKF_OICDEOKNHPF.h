#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMultiplayer; }
namespace System { class Action; }

#define JKOBMJJFLKF_OICDEOKNHPF_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1A47A390)
#define JKOBMJJFLKF_OICDEOKNHPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47A380)

inline static constexpr unsigned int JKOBMJJFLKF_OICDEOKNHPF_TypeDefinitionIndex = 48065;

class JKOBMJJFLKF_OICDEOKNHPF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::Foundation::AssetPath PJNJFACFJHP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOBMJJFLKF_OICDEOKNHPF__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigMultiplayer* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMultiplayer*))((::PBYTE)hIl2Cpp + JKOBMJJFLKF_OICDEOKNHPF_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
