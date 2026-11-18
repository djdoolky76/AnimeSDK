#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityCharacterVolumeProxyEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_IIBEMPKIAAM_ECLIBGHCNAJ_OFFSET UNITYSDK_OFFSET(0x100F98C0)
#define HCIFNBFMBFJ_IIBEMPKIAAM__CTOR_OFFSET UNITYSDK_OFFSET(0x100F98B0)

inline static constexpr unsigned int HCIFNBFMBFJ_IIBEMPKIAAM_TypeDefinitionIndex = 50180;

class HCIFNBFMBFJ_IIBEMPKIAAM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffects*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IIBEMPKIAAM__CTOR_OFFSET))(this);
	}

	::System::Void ECLIBGHCNAJ(::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_IIBEMPKIAAM_ECLIBGHCNAJ_OFFSET))(this, NOJAMHPFFPG);
	}
};
