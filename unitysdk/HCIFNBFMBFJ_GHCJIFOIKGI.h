#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityTonemappingEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_GHCJIFOIKGI_FCBDBDAHFCE_OFFSET UNITYSDK_OFFSET(0x17AEBA00)
#define HCIFNBFMBFJ_GHCJIFOIKGI__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEB9F0)

inline static constexpr unsigned int HCIFNBFMBFJ_GHCJIFOIKGI_TypeDefinitionIndex = 50167;

class HCIFNBFMBFJ_GHCJIFOIKGI : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityTonemappingEffects*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GHCJIFOIKGI__CTOR_OFFSET))(this);
	}

	::System::Void FCBDBDAHFCE(::MoleMole::Config::ConfigEntityTonemappingEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityTonemappingEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_GHCJIFOIKGI_FCBDBDAHFCE_OFFSET))(this, NOJAMHPFFPG);
	}
};
