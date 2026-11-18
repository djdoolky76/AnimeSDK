#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDynamicOverrideWeather; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFBMAGFALIG_HMDHEOBDHLL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x17645880)
#define KFBMAGFALIG_HMDHEOBDHLL__CTOR_OFFSET UNITYSDK_OFFSET(0x17645870)

inline static constexpr unsigned int KFBMAGFALIG_HMDHEOBDHLL_TypeDefinitionIndex = 84902;

class KFBMAGFALIG_HMDHEOBDHLL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicOverrideWeather*>* HPKNOEKCHKJ; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Action_1<::MoleMole::ConfigDynamicOverrideWeather*>* AMHGBGMOMLL; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBMAGFALIG_HMDHEOBDHLL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigDynamicOverrideWeather* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigDynamicOverrideWeather*))((::PBYTE)hIl2Cpp + KFBMAGFALIG_HMDHEOBDHLL_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
