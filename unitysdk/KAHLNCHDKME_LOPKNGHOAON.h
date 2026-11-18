#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUINewMap; }
namespace System { class Action; }

#define KAHLNCHDKME_LOPKNGHOAON_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x13C46560)
#define KAHLNCHDKME_LOPKNGHOAON__CTOR_OFFSET UNITYSDK_OFFSET(0x13C46550)

inline static constexpr unsigned int KAHLNCHDKME_LOPKNGHOAON_TypeDefinitionIndex = 59479;

class KAHLNCHDKME_LOPKNGHOAON : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHLNCHDKME_LOPKNGHOAON__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigUINewMap* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUINewMap*))((::PBYTE)hIl2Cpp + KAHLNCHDKME_LOPKNGHOAON_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
