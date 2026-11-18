#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicObjectRegistry; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CABENIMLHDB_APLGIIJMBOE_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x16A06F70)
#define CABENIMLHDB_APLGIIJMBOE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A06F60)

inline static constexpr unsigned int CABENIMLHDB_APLGIIJMBOE_TypeDefinitionIndex = 83734;

class CABENIMLHDB_APLGIIJMBOE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicObjectRegistry*>* DJGOOALFABM; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigDynamicObjectRegistry*>* AMHGBGMOMLL; // 0x18
	::System::Action* IBNICCGMILF; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABENIMLHDB_APLGIIJMBOE__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigDynamicObjectRegistry* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDynamicObjectRegistry*))((::PBYTE)hIl2Cpp + CABENIMLHDB_APLGIIJMBOE_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
