#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSkinMdb; }
namespace System { class Action; }

#define BCDAIEBLHPL_PNMEJPGBBBH_ELEEDAAFBGC_OFFSET UNITYSDK_OFFSET(0xF78AFF0)
#define BCDAIEBLHPL_PNMEJPGBBBH__CTOR_OFFSET UNITYSDK_OFFSET(0xF78AFE0)

inline static constexpr unsigned int BCDAIEBLHPL_PNMEJPGBBBH_TypeDefinitionIndex = 63360;

class BCDAIEBLHPL_PNMEJPGBBBH : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDAIEBLHPL_PNMEJPGBBBH__CTOR_OFFSET))(this);
	}

	::System::Void ELEEDAAFBGC(::MoleMole::Config::ConfigSkinMdb* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSkinMdb*))((::PBYTE)hIl2Cpp + BCDAIEBLHPL_PNMEJPGBBBH_ELEEDAAFBGC_OFFSET))(this, DFMKILICPFB);
	}
};
