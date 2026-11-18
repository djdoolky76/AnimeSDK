#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBattlePhotoActivity; }
namespace System { class Action; }

#define DKAODALKHDG_BHBBCJCFMKJ_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x18346910)
#define DKAODALKHDG_BHBBCJCFMKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18346900)

inline static constexpr unsigned int DKAODALKHDG_BHBBCJCFMKJ_TypeDefinitionIndex = 80844;

class DKAODALKHDG_BHBBCJCFMKJ : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAODALKHDG_BHBBCJCFMKJ__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigBattlePhotoActivity* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBattlePhotoActivity*))((::PBYTE)hIl2Cpp + DKAODALKHDG_BHBBCJCFMKJ_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
