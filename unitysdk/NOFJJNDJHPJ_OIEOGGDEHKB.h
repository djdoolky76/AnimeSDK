#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigLevelWeather; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOFJJNDJHPJ_OIEOGGDEHKB_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x172AD910)
#define NOFJJNDJHPJ_OIEOGGDEHKB__CTOR_OFFSET UNITYSDK_OFFSET(0x172AD900)

inline static constexpr unsigned int NOFJJNDJHPJ_OIEOGGDEHKB_TypeDefinitionIndex = 56476;

class NOFJJNDJHPJ_OIEOGGDEHKB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::ConfigLevelWeather*>* HPKNOEKCHKJ; // 0x10
	::System::Action_1<::MoleMole::ConfigLevelWeather*>* AMHGBGMOMLL; // 0x18
	::System::Action* IBNICCGMILF; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFJJNDJHPJ_OIEOGGDEHKB__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigLevelWeather* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLevelWeather*))((::PBYTE)hIl2Cpp + NOFJJNDJHPJ_OIEOGGDEHKB_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
