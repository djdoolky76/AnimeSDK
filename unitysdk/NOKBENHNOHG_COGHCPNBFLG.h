#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSurfGameItemData; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOKBENHNOHG_COGHCPNBFLG_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0xE1ADB00)
#define NOKBENHNOHG_COGHCPNBFLG__CTOR_OFFSET UNITYSDK_OFFSET(0xE1ADAF0)

inline static constexpr unsigned int NOKBENHNOHG_COGHCPNBFLG_TypeDefinitionIndex = 52980;

class NOKBENHNOHG_COGHCPNBFLG : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSurfGameItemData*>* FJDCNBOBIGI; // 0x18
	::System::Action_1<::MoleMole::Config::ConfigSurfGameItemData*>* AMHGBGMOMLL; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKBENHNOHG_COGHCPNBFLG__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigSurfGameItemData* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSurfGameItemData*))((::PBYTE)hIl2Cpp + NOKBENHNOHG_COGHCPNBFLG_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
