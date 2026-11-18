#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUISound; }
namespace System { class Action; }

#define JCEHBEPIPKO_COFOBEFDDBI_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x14F9B0A0)
#define JCEHBEPIPKO_COFOBEFDDBI__CTOR_OFFSET UNITYSDK_OFFSET(0x14F9B090)

inline static constexpr unsigned int JCEHBEPIPKO_COFOBEFDDBI_TypeDefinitionIndex = 91214;

class JCEHBEPIPKO_COFOBEFDDBI : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEHBEPIPKO_COFOBEFDDBI__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigUISound* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUISound*))((::PBYTE)hIl2Cpp + JCEHBEPIPKO_COFOBEFDDBI_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
