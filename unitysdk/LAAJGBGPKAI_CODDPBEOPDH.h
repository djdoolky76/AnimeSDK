#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardAtmosphere; }
namespace System { class Action; }

#define LAAJGBGPKAI_CODDPBEOPDH_PLAADLGBEHI_OFFSET UNITYSDK_OFFSET(0x17736D90)
#define LAAJGBGPKAI_CODDPBEOPDH__CTOR_OFFSET UNITYSDK_OFFSET(0x17736D80)

inline static constexpr unsigned int LAAJGBGPKAI_CODDPBEOPDH_TypeDefinitionIndex = 84456;

class LAAJGBGPKAI_CODDPBEOPDH : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAJGBGPKAI_CODDPBEOPDH__CTOR_OFFSET))(this);
	}

	::System::Void PLAADLGBEHI(::MoleMole::Config::ConfigHollowChessboardAtmosphere* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardAtmosphere*))((::PBYTE)hIl2Cpp + LAAJGBGPKAI_CODDPBEOPDH_PLAADLGBEHI_OFFSET))(this, DFMKILICPFB);
	}
};
