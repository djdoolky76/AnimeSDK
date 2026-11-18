#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowNpc; }
namespace System { class Action; }

#define EDKDIMAENKB_KKACJBELCOI_EFBLEPMAPDH_OFFSET UNITYSDK_OFFSET(0x17225BD0)
#define EDKDIMAENKB_KKACJBELCOI__CTOR_OFFSET UNITYSDK_OFFSET(0x17225BC0)

inline static constexpr unsigned int EDKDIMAENKB_KKACJBELCOI_TypeDefinitionIndex = 51033;

class EDKDIMAENKB_KKACJBELCOI : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKDIMAENKB_KKACJBELCOI__CTOR_OFFSET))(this);
	}

	::System::Void EFBLEPMAPDH(::MoleMole::Config::ConfigHollowNpc* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowNpc*))((::PBYTE)hIl2Cpp + EDKDIMAENKB_KKACJBELCOI_EFBLEPMAPDH_OFFSET))(this, DFMKILICPFB);
	}
};
