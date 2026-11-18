#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAvatarLayoutCamera; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CNMLHAJOAHF_AHCHGFHJIPL_INFEKJEGLMN_OFFSET UNITYSDK_OFFSET(0x1A1BF1F0)
#define CNMLHAJOAHF_AHCHGFHJIPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BF1E0)

inline static constexpr unsigned int CNMLHAJOAHF_AHCHGFHJIPL_TypeDefinitionIndex = 82229;

class CNMLHAJOAHF_AHCHGFHJIPL : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigAvatarLayoutCamera*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMLHAJOAHF_AHCHGFHJIPL__CTOR_OFFSET))(this);
	}

	::System::Void INFEKJEGLMN(::MoleMole::Config::ConfigAvatarLayoutCamera* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarLayoutCamera*))((::PBYTE)hIl2Cpp + CNMLHAJOAHF_AHCHGFHJIPL_INFEKJEGLMN_OFFSET))(this, DFMKILICPFB);
	}
};
