#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }

#define HANMOFEJCIM_EMPMAEHFFBM_EFBLEPMAPDH_OFFSET UNITYSDK_OFFSET(0x16CE0460)
#define HANMOFEJCIM_EMPMAEHFFBM__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE0450)

inline static constexpr unsigned int HANMOFEJCIM_EMPMAEHFFBM_TypeDefinitionIndex = 71546;

class HANMOFEJCIM_EMPMAEHFFBM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANMOFEJCIM_EMPMAEHFFBM__CTOR_OFFSET))(this);
	}

	::System::Void EFBLEPMAPDH(::MoleMole::Config::ConfigHollowChessboard* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*))((::PBYTE)hIl2Cpp + HANMOFEJCIM_EMPMAEHFFBM_EFBLEPMAPDH_OFFSET))(this, DFMKILICPFB);
	}
};
