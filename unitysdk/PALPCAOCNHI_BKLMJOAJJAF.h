#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUITextStyle; }
namespace System { class Action; }

#define PALPCAOCNHI_BKLMJOAJJAF_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x150ADDE0)
#define PALPCAOCNHI_BKLMJOAJJAF__CTOR_OFFSET UNITYSDK_OFFSET(0x150ADDD0)

inline static constexpr unsigned int PALPCAOCNHI_BKLMJOAJJAF_TypeDefinitionIndex = 41364;

class PALPCAOCNHI_BKLMJOAJJAF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PALPCAOCNHI_BKLMJOAJJAF__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigUITextStyle* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUITextStyle*))((::PBYTE)hIl2Cpp + PALPCAOCNHI_BKLMJOAJJAF_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
