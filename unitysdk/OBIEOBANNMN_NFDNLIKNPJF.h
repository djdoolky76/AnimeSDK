#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFlowCanvas; }
namespace System { class Action; }

#define OBIEOBANNMN_NFDNLIKNPJF_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x15F57E00)
#define OBIEOBANNMN_NFDNLIKNPJF__CTOR_OFFSET UNITYSDK_OFFSET(0x15F57DF0)

inline static constexpr unsigned int OBIEOBANNMN_NFDNLIKNPJF_TypeDefinitionIndex = 85757;

class OBIEOBANNMN_NFDNLIKNPJF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIEOBANNMN_NFDNLIKNPJF__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigFlowCanvas* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFlowCanvas*))((::PBYTE)hIl2Cpp + OBIEOBANNMN_NFDNLIKNPJF_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
