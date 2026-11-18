#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIFishV2; }
namespace System { class Action; }

#define PDHAGHFIGGD_IDMJJGDFOCF_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x16F9E9D0)
#define PDHAGHFIGGD_IDMJJGDFOCF__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9E9C0)

inline static constexpr unsigned int PDHAGHFIGGD_IDMJJGDFOCF_TypeDefinitionIndex = 89516;

class PDHAGHFIGGD_IDMJJGDFOCF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHAGHFIGGD_IDMJJGDFOCF__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigUIFishV2* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIFishV2*))((::PBYTE)hIl2Cpp + PDHAGHFIGGD_IDMJJGDFOCF_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
