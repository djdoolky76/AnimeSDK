#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ScenePerformConfig; }
namespace System { class Action; }

#define MNGCOCGLOHD_CKDCGMNPHKB_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1077D2B0)
#define MNGCOCGLOHD_CKDCGMNPHKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1077D2A0)

inline static constexpr unsigned int MNGCOCGLOHD_CKDCGMNPHKB_TypeDefinitionIndex = 70149;

class MNGCOCGLOHD_CKDCGMNPHKB : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGCOCGLOHD_CKDCGMNPHKB__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ScenePerformConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScenePerformConfig*))((::PBYTE)hIl2Cpp + MNGCOCGLOHD_CKDCGMNPHKB_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
