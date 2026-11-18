#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZenkovSpecialAvatar; }
namespace System { class Action; }

#define IFPAJOCNBNI_CMEOJNCEODL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x16573240)
#define IFPAJOCNBNI_CMEOJNCEODL__CTOR_OFFSET UNITYSDK_OFFSET(0x16573230)

inline static constexpr unsigned int IFPAJOCNBNI_CMEOJNCEODL_TypeDefinitionIndex = 60037;

class IFPAJOCNBNI_CMEOJNCEODL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAJOCNBNI_CMEOJNCEODL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigZenkovSpecialAvatar* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZenkovSpecialAvatar*))((::PBYTE)hIl2Cpp + IFPAJOCNBNI_CMEOJNCEODL_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
