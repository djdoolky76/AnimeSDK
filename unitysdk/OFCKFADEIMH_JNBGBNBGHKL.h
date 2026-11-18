#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigInteractEntry; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OFCKFADEIMH_JNBGBNBGHKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77D480)

inline static constexpr unsigned int OFCKFADEIMH_JNBGBNBGHKL_TypeDefinitionIndex = 59240;

class OFCKFADEIMH_JNBGBNBGHKL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractEntry*>* JLJFELLLPAK; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCKFADEIMH_JNBGBNBGHKL__CTOR_OFFSET))(this);
	}
};
