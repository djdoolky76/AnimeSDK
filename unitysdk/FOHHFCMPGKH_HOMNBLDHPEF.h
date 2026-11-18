#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigLanguageVideo; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOHHFCMPGKH_HOMNBLDHPEF_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x165C4C50)
#define FOHHFCMPGKH_HOMNBLDHPEF__CTOR_OFFSET UNITYSDK_OFFSET(0x165C4C40)

inline static constexpr unsigned int FOHHFCMPGKH_HOMNBLDHPEF_TypeDefinitionIndex = 75558;

class FOHHFCMPGKH_HOMNBLDHPEF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::ConfigLanguageVideo*>* DJGOOALFABM; // 0x10
	::System::Action_1<::MoleMole::ConfigLanguageVideo*>* AMHGBGMOMLL; // 0x18
	::System::Action* IBNICCGMILF; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHHFCMPGKH_HOMNBLDHPEF__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigLanguageVideo* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLanguageVideo*))((::PBYTE)hIl2Cpp + FOHHFCMPGKH_HOMNBLDHPEF_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
